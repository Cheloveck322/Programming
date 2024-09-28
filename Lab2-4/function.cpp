#include "function.h"

namespace some
{
    void function(int a)
    {
        static int static_int{ 0 };
        std::cout << a + static_int << '\n';
        static_int = a;
    }
}