#include <iostream>

int main()
{
    int number { 3 };
    int* pnum { &number };
    std::cout << pnum << ' ' << *pnum << '\n';

    *pnum = 10;
    std::cout << number << '\n';

    int arr[10]{ 1, 2, 3, 4, 5, 6, 7, 8, 9 };
    int arrSize{ sizeof(arr) / sizeof(arr[0]) };

    for (int* pi { arr }; pi != arr + arrSize; ++pi)
    {
        std::cout << *pi << ' ';
    }
    std::cout << '\n';

    int newNumb { 5 };
    int* const pnewNumb { &newNumb };
    //pnewNumb = &number;
    *pnewNumb = 8;

    std::cout << newNumb << '\n';

    return 0;
}