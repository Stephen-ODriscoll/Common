#pragma once

#include <string>
#include <vector>
class str : public std::string  // std::string with extended functionality
{
public:
    using std::string::string;
    using std::string::operator=;

    template<typename T>
    str(const T& t) : std::string(std::to_string(t)) { }
    str(const char c) : std::string(&c, 1) { }
    str(const std::string& s) : std::string(s) { }
    str(const bool b) : std::string(b ? "true" : "false") { }

    template<typename T>
    str(const std::vector<T>& vec, const str& sep = ", ") : std::string()
    {
        if (vec.empty()) return;

        for (auto& item : vec)
            append(str(item) + sep);
        resize(size() - sep.size());
    }

    void split(std::vector<str>& splits, const char delim = ' ') const
    {
        size_t start, end = 0;
        while ((start = find_first_not_of(delim, end)) != npos)
        {
            end = find(delim, start);
            splits.push_back(substr(start, end - start));
        }
    }
    std::vector<str> split(const char delim = ' ') const
    {
        std::vector<str> splits;
        split(splits, delim);
        return splits;
    }

    bool equals(const str& s) const { return _Equal(s); }
    bool equalsIgnoreCase(const str& s) const
    {
        if (size() != s.size()) return false;

        for (auto it1 = begin(), it2 = s.begin(); it1 < end(); ++it1, ++it2)
            if (std::tolower(*it1) != std::tolower(*it2)) return false;

        return true;
    }

    std::string& string() { return *this; }
    const std::string& string() const { return *this; }

    float tof(size_t* idx = nullptr) const { return std::stof(*this, idx); }
    double tod(size_t* idx = nullptr) const { return std::stod(*this, idx); }
    long double told(size_t* idx = nullptr) const { return std::stold(*this, idx); }
    int toi(size_t* idx = nullptr, int base = 10) const { return std::stoi(*this, idx, base); }
    long tol(size_t* idx = nullptr, int base = 10) const { return std::stol(*this, idx, base); }
    long long toll(size_t* idx = nullptr, int base = 10) const { return std::stoll(*this, idx, base); }
    unsigned long toul(size_t* idx = nullptr, int base = 10) const { return std::stoul(*this, idx, base); }
    unsigned long long toull(size_t* idx = nullptr, int base = 10) const { return std::stoull(*this, idx, base); }
};
