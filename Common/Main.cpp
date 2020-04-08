#include "func.h"
#include "loop.h"
#include "str.h"

#include <iostream>


void testFunc()
{
    std::cout << "min(8, 5): " << min(8, 5) << std::endl;
    std::cout << "min(5, 8): " << min(5, 8) << std::endl;
    std::cout << "min(5, 5): " << min(5, 5) << "\n" << std::endl;

    std::cout << "max(5, 8): " << max(5, 8) << std::endl;
    std::cout << "max(8, 5): " << max(8, 5) << std::endl;
    std::cout << "max(8, 8): " << max(8, 8) << "\n" << std::endl;
}

void testLoop()
{
    std::vector<int> numbers = { 0, 1, 2, 3, 4 };
    std::vector<int> numbers2 = { 3, 4, 5, 6, 7 };

    std::cout << "trav(number, numbers): ";
    trav(number, numbers)
    {
        std::cout << number << ", ";
    }
    std::cout << "\n" << std::endl;

    // up
    {
        std::cout << "up(i, 0, 5):           ";
        up(i, 0, 5)
            std::cout << i << ", ";
        std::cout << std::endl;

        std::cout << "upwith(i, 0, 5, ++i):  ";
        upwith(i, 0, 5, ++i)
            std::cout << i << ", ";
        std::cout << std::endl;

        std::cout << "up2(i, 0, 5):          ";
        up2(i, 0, 5)
            std::cout << i << ", ";
        std::cout << std::endl;

        std::cout << "up2with(i, 0, 5, ++i): ";
        up2with(i, 0, 5, ++i)
            std::cout << i << ", ";
        std::cout << "\n" << std::endl;
    }

    // down
    {
        std::cout << "down(i, 5, 0):           ";
        down(i, 5, 0)
            std::cout << i << ", ";
        std::cout << std::endl;

        std::cout << "downwith(i, 5, 0, --i):  ";
        downwith(i, 5, 0, --i)
            std::cout << i << ", ";
        std::cout << std::endl;

        std::cout << "down2(i, 5, 0):          ";
        down2(i, 5, 0)
            std::cout << i << ", ";
        std::cout << std::endl;

        std::cout << "down2with(i, 5, 0, --i): ";
        down2with(i, 5, 0, --i)
            std::cout << i << ", ";
        std::cout << "\n" << std::endl;
    }

    // iter
    {
        std::cout << "iter(it, numbers):            ";
        iter(it, numbers)
            std::cout << *it << ", ";
        std::cout << std::endl;

        std::cout << "iterwith(it, numbers, ++it):  ";
        iterwith(it, numbers, ++it)
            std::cout << *it << ", ";
        std::cout << std::endl;

        std::cout << "riter(it, numbers):           ";
        riter(it, numbers)
            std::cout << *it << ", ";
        std::cout << std::endl;

        std::cout << "riterwith(it, numbers, ++it): ";
        riterwith(it, numbers, ++it)
            std::cout << *it << ", ";
        std::cout << "\n" << std::endl;
    }

    // parone
    {
        std::cout << "parone(it, it2, numbers, numbers2):                   ";
        parone(it, it2, numbers, numbers2)
            std::cout << *it << " and " << *it2 << ", ";
        std::cout << std::endl;

        std::cout << "paronewith(it, it2, numbers, numbers2, ++it, ++it2):  ";
        paronewith(it, it2, numbers, numbers2, ++it, ++it2)
            std::cout << *it << " and " << *it2 << ", ";
        std::cout << std::endl;

        std::cout << "rparone(it, it2, numbers, numbers2):                  ";
        rparone(it, it2, numbers, numbers2)
            std::cout << *it << " and " << *it2 << ", ";
        std::cout << std::endl;

        std::cout << "rparonewith(it, it2, numbers, numbers2, ++it, ++it2): ";
        rparonewith(it, it2, numbers, numbers2, ++it, ++it2)
            std::cout << *it << " and " << *it2 << ", ";
        std::cout << "\n" << std::endl;
    }

    numbers.push_back(5);

    // par
    {
        std::cout << "par(it, it2, numbers, numbers2):                   ";
        par(it, it2, numbers, numbers2)
            std::cout << *it << " and " << *it2 << ", ";
        std::cout << std::endl;

        std::cout << "parwith(it, it2, numbers, numbers2, ++it, ++it2):  ";
        parwith(it, it2, numbers, numbers2, ++it, ++it2)
            std::cout << *it << " and " << *it2 << ", ";
        std::cout << std::endl;

        std::cout << "rpar(it, it2, numbers, numbers2):                  ";
        rpar(it, it2, numbers, numbers2)
            std::cout << *it << " and " << *it2 << ", ";
        std::cout << std::endl;

        std::cout << "rparwith(it, it2, numbers, numbers2, ++it, ++it2): ";
        rparwith(it, it2, numbers, numbers2, ++it, ++it2)
            std::cout << *it << " and " << *it2 << ", ";
        std::cout << "\n" << std::endl;
    }
}

void testStr()
{
    std::cout << "str('t'): " << str('t') << std::endl;
    std::cout << "str(\"test\"): " << str("test") << std::endl;
    std::cout << "str(str(\"test\")): " << str(str("test")) << std::endl;
    std::cout << "str(std::string(\"test\"): " << str(std::string("test")) << std::endl;
    std::cout << "std::string(str(\"test\")): " << std::string(str("test")) << "\n" << std::endl;

    std::cout << "str(1): " << str(1) << std::endl;
    std::cout << "str(1u): " << str(1u) << std::endl;
    std::cout << "str(1l): " << str(1l) << std::endl;
    std::cout << "str(1ul): " << str(1ul) << std::endl;
    std::cout << "str(1ll): " << str(1ll) << std::endl;
    std::cout << "str(1ull): " << str(1ull) << std::endl;
    std::cout << "str(1.f): " << str(1.f) << "\n" << std::endl;
    std::cout << "str(1.): " << str(1.) << std::endl;
    

    std::cout << "str(true): " << str(true) << std::endl;
    std::cout << "str(false): " << str(false) << "\n" << std::endl;

    std::vector<int> numbers{ 0, 1, 2, 3, 4 };
    std::cout << "str(numbers): " << str(numbers) << std::endl;
    std::cout << "str(numbers, \", \"): " << str(numbers, ", ") << std::endl;
    std::cout << "str(str(\"a b c\").split()): " << str(str("a b c").split()) << std::endl;
    std::cout << "str(str(\"a  b  c\").split()): " << str(str("a  b  c").split()) << "\n" << std::endl;

    std::cout << "str(\"yes\").equals(\"no\"):  " << str("yes").equals("no") << std::endl;
    std::cout << "str(\"yes\").equals(\"yes\"): " << str("yes").equals("yes") << std::endl;
    std::cout << "str(\"yes\").equals(\"YES\"): " << str("yes").equals("YES") << "\n" << std::endl;

    std::cout << "str(\"yes\").equalsIgnoreCase(\"NO\"):  " << str("yes").equalsIgnoreCase("no") << std::endl;
    std::cout << "str(\"yes\").equalsIgnoreCase(\"YES\"): " << str("yes").equalsIgnoreCase("yes") << std::endl;
    std::cout << "str(\"yes\").equalsIgnoreCase(\"YES\"): " << str("yes").equalsIgnoreCase("YES") << "\n" << std::endl;

    std::cout << "str(1).tod(): " << str(1).tod() << std::endl;
    std::cout << "str(1).tof(): " << str(1).tof() << std::endl;
    std::cout << "str(1).toi(): " << str(1).toi() << std::endl;
    std::cout << "str(1).tol(): " << str(1).tol() << std::endl;
    std::cout << "str(1).told(): " << str(1).told() << std::endl;
    std::cout << "str(1).toll(): " << str(1).toll() << std::endl;
    std::cout << "str(1).toul(): " << str(1).toul() << std::endl;
    std::cout << "str(1).toull(): " << str(1).toull() << std::endl;
}

int main()
{
    testFunc(); std::cout << std::endl;
    testLoop(); std::cout << std::endl;
    testStr();
}
