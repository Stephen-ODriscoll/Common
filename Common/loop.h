#pragma once

#define trav(a, x) for(auto& a : x)     // a traverses x.

#define up(i, a, b)             for(auto i = a; i < b; ++i)             // i increments from a to b exclusive.
#define up2(i, a, b)            for(auto i = a; i <= b; ++i)            // i increments from a to b inclusive.
#define upwith(i, a, b, ...)    for(auto i = a; i < b; __VA_ARGS__)     // i is set to a and must reach greater than b.
#define up2with(i, a, b, ...)   for(auto i = a; i <= b; __VA_ARGS__)    // i is set to a and must reach b or greater.

#define down(i, a, b)           for(auto i = a; b < i; --i)             // i decrements from a to b exclusive.
#define down2(i, a, b)          for(auto i = a; b <= i; --i)            // i decrements from a to b exclusive.
#define downwith(i, a, b, ...)  for(auto i = a; b < i; __VA_ARGS__)     // i is set to a and must reach less than b.
#define down2with(i, a, b, ...) for(auto i = a; b <= i; __VA_ARGS__)    // i is set to a and must reach b or less.

#define iter(a, x)              for (auto it = std::begin(x); a < std::end(x); ++a)             // a iterates over x.
#define riter(a, x)             for (auto it = std::rbegin(x); a < std::rend(x); ++a)           // a reverse iterates over x.
#define iterwith(a, x, ...)     for (auto it = std::begin(x); a < std::end(x); __VA_ARGS__)     // a is set to begin of x and must reach end.
#define riterwith(a, x, ...)    for (auto it = std::rbegin(x); a < std::rend(x); __VA_ARGS__)   // a is set to rbegin of x and must reach rend.

#define parone(a, b, x, y)              for (auto a = std::begin(x), b = std::begin(y); a < std::end(x); ++a, ++b)          // a and b iterate over x and y. a must reach end() before or with b.
#define rparone(a, b, x, y)             for (auto a = std::rbegin(x), b = std::rbegin(y); a < std::rend(x); ++a, ++b)       // a and b reverse iterate over x and y. a must reach rend() before or with b.
#define paronewith(a, b, x, y, ...)     for (auto a = std::begin(x), b = std::begin(y); a < std::end(x); __VA_ARGS__)       // a and b are set to begin of x and y. a must reach end() before or with b.
#define rparonewith(a, b, x, y, ...)    for (auto a = std::rbegin(x), b = std::rbegin(y); a < std::rend(x); __VA_ARGS__)    // a and b are set to rbegin of x and y. a must reach rend() before or with b.

#define par(a, b, x, y)             for (auto a = std::begin(x), b = std::begin(y); a < std::end(x) && b < std::end(y); ++a, ++b)           // a and b iterate over x and y.
#define rpar(a, b, x, y)            for (auto a = std::rbegin(x), b = std::rbegin(y); a < std::rend(x) && b < std::rend(y); ++a, ++b)       // a and b reverse iterate over x and y.
#define parwith(a, b, x, y, ...)    for (auto a = std::begin(x), b = std::begin(y); a < std::end(x) && b < std::end(y); __VA_ARGS__)        // a and b are set to begin of x and y. either a or b must reach end().
#define rparwith(a, b, x, y, ...)   for (auto a = std::rbegin(x), b = std::rbegin(y); a < std::rend(x) && b < std::rend(y); __VA_ARGS__)    // a and b are set to rbegin of x and y. either a or b must reach rend().
