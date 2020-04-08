#pragma once

// min and max
template<class T> inline T min(const T& a, const T& b) { return (b < a) ? b : a; }
template<class T> inline T max(const T& a, const T& b) { return (a < b) ? b : a; }
