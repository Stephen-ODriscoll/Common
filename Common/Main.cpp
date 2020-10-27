#include <iostream>
#include <chrono>

#include "str.h"
#include "func.h"
#include "loop.h"


void testFunc()
{
    std::cout << "min(8, 5): " << min(8, 5) << "\n";
    std::cout << "min(5, 8): " << min(5, 8) << "\n";
    std::cout << "min(5, 5): " << min(5, 5) << "\n" << std::endl;

    std::cout << "max(5, 8): " << max(5, 8) << "\n";
    std::cout << "max(8, 5): " << max(8, 5) << "\n";
    std::cout << "max(8, 8): " << max(8, 8) << "\n" << std::endl;
}

void testLoop()
{
    std::vector<int> numbers = { 0, 1, 2, 3, 4 };
    std::vector<int> numbers2 = { 3, 4, 5, 6, 7 };

    std::cout << "trav(number, numbers): ";
    trav(number, numbers)
        std::cout << number << ", ";
    std::cout << "\n" << std::endl;

    // up
    {
        std::cout << "up(i, 0, 5):           ";
        up(i, 0, 5)
            std::cout << i << ", ";
        std::cout << "\n";

        std::cout << "upwith(i, 0, 5, ++i):  ";
        upwith(i, 0, 5, ++i)
            std::cout << i << ", ";
        std::cout << "\n";

        std::cout << "up2(i, 0, 5):          ";
        up2(i, 0, 5)
            std::cout << i << ", ";
        std::cout << "\n";

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
        std::cout << "\n";

        std::cout << "downwith(i, 5, 0, --i):  ";
        downwith(i, 5, 0, --i)
            std::cout << i << ", ";
        std::cout << "\n";

        std::cout << "down2(i, 5, 0):          ";
        down2(i, 5, 0)
            std::cout << i << ", ";
        std::cout << "\n";

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
        std::cout << "\n";

        std::cout << "iterwith(it, numbers, ++it):  ";
        iterwith(it, numbers, ++it)
            std::cout << *it << ", ";
        std::cout << "\n";

        std::cout << "riter(it, numbers):           ";
        riter(it, numbers)
            std::cout << *it << ", ";
        std::cout << "\n";

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
        std::cout << "\n";

        std::cout << "paronewith(it, it2, numbers, numbers2, ++it, ++it2):  ";
        paronewith(it, it2, numbers, numbers2, ++it, ++it2)
            std::cout << *it << " and " << *it2 << ", ";
        std::cout << "\n";

        std::cout << "rparone(it, it2, numbers, numbers2):                  ";
        rparone(it, it2, numbers, numbers2)
            std::cout << *it << " and " << *it2 << ", ";
        std::cout << "\n";

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
        std::cout << "\n";

        std::cout << "parwith(it, it2, numbers, numbers2, ++it, ++it2):  ";
        parwith(it, it2, numbers, numbers2, ++it, ++it2)
            std::cout << *it << " and " << *it2 << ", ";
        std::cout << "\n";

        std::cout << "rpar(it, it2, numbers, numbers2):                  ";
        rpar(it, it2, numbers, numbers2)
            std::cout << *it << " and " << *it2 << ", ";
        std::cout << "\n";

        std::cout << "rparwith(it, it2, numbers, numbers2, ++it, ++it2): ";
        rparwith(it, it2, numbers, numbers2, ++it, ++it2)
            std::cout << *it << " and " << *it2 << ", ";
        std::cout << "\n" << std::endl;
    }
}

void testStr()
{
    std::cout << "str(): " << str() << "\n";
    std::cout << "str('t'): " << str('t') << "\n";
    std::cout << "str(\"test\"): " << str("test") << "\n";
    std::cout << "str(str(\"test\")): " << str(str("test")) << "\n";
    std::cout << "str(std::string(\"test\"): " << str(std::string("test")) << "\n";
    std::cout << "std::string(str(\"test\")): " << std::string(str("test")) << "\n";
    std::cout << "str(\"test\").string())): " << str("test").string() << "\n";
    str test("test"); test.string() = "testModified";
    const str testConst("test"); testConst.string();
    std::cout << "str test(\"test\"); test.string() = \"testModified\"; test: " << test << "\n" << std::endl;
    

    std::cout << "str(1): " << str(1) << "\n";
    std::cout << "str(1u): " << str(1u) << "\n";
    std::cout << "str(1l): " << str(1l) << "\n";
    std::cout << "str(1ul): " << str(1ul) << "\n";
    std::cout << "str(1ll): " << str(1ll) << "\n";
    std::cout << "str(1ull): " << str(1ull) << "\n";
    std::cout << "str(1.f): " << str(1.f) << "\n";
    std::cout << "str(1.): " << str(1.) << "\n" << std::endl;
    

    std::cout << "str(true): " << str(true) << "\n";
    std::cout << "str(false): " << str(false) << "\n" << std::endl;

    std::vector<str> strings;
    std::vector<int> numbers{ 0, 1, 2, 3, 4 };
    std::vector<int*> pNumbers{ &numbers[0], &numbers[1], &numbers[2], &numbers[3], &numbers[4] };
    std::cout << "str(numbers): " << str(numbers.begin(), numbers.end()) << "\n";
    std::cout << "str(numbers, \", \"): " << str(numbers.begin(), numbers.end(), ", ") << "\n";
    std::cout << "str(pNumbers, [](const int* pNumber) { return *pNumber; }, \", \")): " << str(pNumbers.begin(), pNumbers.end(), [](int* pNumber) -> str { return *pNumber; }, ", ") << "\n";
    strings = str("a b c").split();
    std::cout << "strings = str(\"a b c\").split(); str(strings.begin(), strings.end()): " << str(strings.begin(), strings.end()) << "\n";
    strings = str("a  b  c").split();
    std::cout << "strings = str(\"a  b  c\").split(); str(strings.begin(), strings.end()): " << str(strings.begin(), strings.end()) << "\n";
    strings = str("atestbtestc").split("test");
    std::cout << "strings = str(\"atestbtestc\").split(\"test\"); str(strings.begin(), strings.end()): " << str(strings.begin(), strings.end()) << "\n" << std::endl;

    std::cout << "str(\"yes\").equals(\"no\"):  " << str("yes").equals("no") << "\n";
    std::cout << "str(\"yes\").equals(\"yes\"): " << str("yes").equals("yes") << "\n";
    std::cout << "str(\"yes\").equals(\"YES\"): " << str("yes").equals("YES") << "\n" << std::endl;

    std::cout << "str(\"yes\").equalsIgnoreCase(\"no\"):  " << str("yes").equalsIgnoreCase("no") << "\n";
    std::cout << "str(\"yes\").equalsIgnoreCase(\"yes\"): " << str("yes").equalsIgnoreCase("yes") << "\n";
    std::cout << "str(\"yes\").equalsIgnoreCase(\"YES\"): " << str("yes").equalsIgnoreCase("YES") << "\n" << std::endl;

    std::cout << "str(\"testing\").contains(\"test\"): " << str("testing").contains("test") << "\n";
    std::cout << "str(\"testing\").contains(\"fail\"): " << str("testing").contains("fail") << "\n" << std::endl;

    std::cout << "str(1).tod(): " << str(1).tod() << "\n";
    std::cout << "str(1).tof(): " << str(1).tof() << "\n";
    std::cout << "str(1).toi(): " << str(1).toi() << "\n";
    std::cout << "str(1).tol(): " << str(1).tol() << "\n";
    std::cout << "str(1).told(): " << str(1).told() << "\n";
    std::cout << "str(1).toll(): " << str(1).toll() << "\n";
    std::cout << "str(1).toul(): " << str(1).toul() << "\n";
    std::cout << "str(1).toull(): " << str(1).toull() << std::endl;
}

int main()
{
    std::cout << "\n";
    testFunc(); std::cout << std::endl;
    testLoop(); std::cout << std::endl;
    testStr();
}
