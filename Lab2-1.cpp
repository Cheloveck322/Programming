#include <iostream>

int main()
{
    setlocale(LC_ALL, "Russian");

    int a{}, b{};

    std::cin >> a >> b;
    std::cout << (a + b) / 2 << '\n'; 

    char operation {};
    std::cout << "Input +, -, * or /";
    std::cin >> operation;

    /*if (operation == '+')
    {
        std::cout << a + b << '\n';
    }
    else if (operation == '-')
    {
        std::cout << a - b << '\n';
    }
    else if (operation == '*')
    {
        std::cout << a * b << '\n';
    }
    else if (operation == '/')
    {
        std::cout << a / b << '\n';
    }
    else 
    {
        std::cout << "Wrong operation!\n";
    }
    */
    switch (operation)
    {
    case '+':
        std::cout << a + b << '\n';
        break;
    case '-':
        std::cout << a - b << '\n';
        break;
    case '*':
        std::cout << a * b << '\n';
        break;
    case '/':
        std::cout << a / b << '\n';
        break;
    
    default:
        std::cout << "Wrong operation!\n";
        break;
    }
    
    return 0;
}