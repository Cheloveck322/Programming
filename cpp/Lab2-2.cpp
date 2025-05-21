#include <iostream>

int main()
{
    int positiveNumber{};

    std::cout << "Enter positive integral number: ";
    while(true)
    {
        std::cin >> positiveNumber;

        if (positiveNumber > 0)
        {
            break;
        }
        else 
        {
            std::cout << "It's not positive number.\n";
        }
    }

    int sum{};
    for (int i{ 1 }; i <= positiveNumber; ++i)
    {
        sum += i;
        if (i == positiveNumber)
        {
            std::cout << i << '\n';
        }
        else 
        {
            std::cout << i << " + ";
        }
    }
    int arr[10] { 1, 2, 3, 4, 5, 6, 7, 8, 9, 0 };

    for (int i{}; i < 10; ++i)
    {
        std::cout << arr[i] << ' ';
    }
    std::cout << '\n';

    for (int i{}; i < 10; ++i)
    {
        if (i % 2 == 0)
        {
            std::cout << arr[i] << ' ';
        }
    }
    std::cout << '\n';

    for (int i{}; i < 10; ++i)
    {
        if (i % 2 != 0)
        {
            std::cout << arr[i] << ' ';
        }
    }
    std::cout << '\n';

    return 0;
}