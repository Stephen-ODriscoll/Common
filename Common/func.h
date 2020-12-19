#pragma once

#define both(x) std::begin(x), std::end(x)

// min and max
template<class T> inline T min(const T& a, const T& b) { return (b < a) ? b : a; }
template<class T> inline T max(const T& a, const T& b) { return (a < b) ? b : a; }
