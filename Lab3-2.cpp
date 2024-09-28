#include <iostream>

void printArr(int* begin, int* end)
{
    while(begin != end)
    {
        std::cout << *begin << ' ';
        ++begin;
    }
    std::cout << '\n';
}

int nothing(int a, int b)
{
    return 0;
}

int sumTwoNumbers(int a, int b)
{
    return a + b;
}

int diffTwoNumbers(int a, int b)
{
    return a - b;
}

int (*get_operation(char ch))(int, int)
{
    if (ch == '+')
    {
        return sumTwoNumbers;
    }
    else if (ch == '-')
    {
        return diffTwoNumbers;
    }
    
    return nothing;
}


int main()
{
    int arr[10]{ 1, 2, 3, 4, 5, 6, 7, 8, 9 };
    int arrSize{ sizeof(arr) / sizeof(arr[0]) };

    printArr(arr, arr+arrSize);

    std::cout << get_operation('-')(10, 4) << '\n';

    float* num { new float{ 3.14 } };

    std::cout << *num << '\n';

    delete num;

    return 0;
}