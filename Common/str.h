#pragma once

// I am aware that extending the std::string class is frowned upon
// but for my own personal use it's made certain aspects of programming a lot simpler.

#include <string>
#include <vector>
class str : public std::string  // std::string with extended functionality
{
public:
    using std::string::operator=;

    str() : std::string() { }
    str(const std::string& s) : std::string(s) { }

    str(const char* pC) : std::string(pC) { }
    str(const char* pC1, const char* pC2) : std::string(pC1, pC2) { }
    
    str(const char c) : std::string(&c, 1) { }
    str(const bool b) : std::string(b ? "true" : "false") { }

    str(const int i) : std::string(std::to_string(i)) { }
    str(const long l) : std::string(std::to_string(l)) { }
    str(const float f) : std::string(std::to_string(f)) { }
    str(const double d) : std::string(std::to_string(d)) { }
    str(const long long ll) : std::string(std::to_string(ll)) { }
    str(const long double ld) : std::string(std::to_string(ld)) { }
    str(const unsigned int ui) : std::string(std::to_string(ui)) { }
    str(const unsigned long ul) : std::string(std::to_string(ul)) { }
    str(const unsigned long long ull) : std::string(std::to_string(ull)) { }

    
    // Constructor for iterable types - must work with std::begin() and std::end()
    template<typename Iterator>
    str(Iterator it1, Iterator it2, str func(typename std::iterator_traits<Iterator>::value_type), const str& sep = ", ") : std::string()
    {
        if (&*it1 <= &*it2) return;

        for (--it2; it1 != it2; ++it1)
            append(func(*it1) + sep);
        append(func(*it1));
    }
    // Constructor for iterable types - must work with std::begin() and std::end()
    template<typename Iterator>
    str(Iterator it1, Iterator it2, const str& sep = ", ") : std::string()
    {
        if (&*it1 <= &*it2) return;

        for (--it2; it1 != it2; ++it1)
            append(str(*it1) + sep);
        append(str(*it1));
    }

    void split(std::vector<str>& splits, const str& delim = " ") const
    {
        size_t start, end = 0;
        while ((start = find_first_not_of(delim, end)) != npos)
        {
            end = find(delim, start);
            splits.push_back(substr(start, end - start));
        }
    }
    std::vector<str> split(const str& delim = " ") const
    {
        std::vector<str> splits;
        split(splits, delim);
        return splits;
    }

    bool equals(const str& s) const { return _Equal(s); }
    bool equalsIgnoreCase(const str& s) const
    {
        return (size() == s.size()) &&
            std::equal(begin(), end(), s.begin(),
                [](char c1, char c2) { return (c1 == c2) || (std::tolower(c1) == std::tolower(c2)); }
            );
    }

    bool contains(const str& s, size_t i = 0Ui64) const { return (find(s, i) != npos); }

    std::string& string() { return *this; }                 // No copy
    const std::string& string() const { return *this; }     // No copy

    float tof(size_t* idx = nullptr) const { return std::stof(*this, idx); }
    double tod(size_t* idx = nullptr) const { return std::stod(*this, idx); }
    long double told(size_t* idx = nullptr) const { return std::stold(*this, idx); }
    int toi(size_t* idx = nullptr, int base = 10) const { return std::stoi(*this, idx, base); }
    long tol(size_t* idx = nullptr, int base = 10) const { return std::stol(*this, idx, base); }
    long long toll(size_t* idx = nullptr, int base = 10) const { return std::stoll(*this, idx, base); }
    unsigned long toul(size_t* idx = nullptr, int base = 10) const { return std::stoul(*this, idx, base); }
    unsigned long long toull(size_t* idx = nullptr, int base = 10) const { return std::stoull(*this, idx, base); }
};
