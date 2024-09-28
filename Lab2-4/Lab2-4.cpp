#define SUM_TO_NUMBER(a, b) a + b
#include <iostream>
#include "function.h"
#include "function.cpp"

using namespace std;

int main()
{
    some::function(2);
    some::function(3);
    some::function(4);

    std::cout << SUM_TO_NUMBER(1, 2) << '\n';



    return 0;
}