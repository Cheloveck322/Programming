#include <iostream>
#include "MyException.h"

int main()
{
    try
    {
        int number{};
        std::cout << "Enter 1, 2 or 3: ";
        std::cin >> number;
        if (number < 1 || number > 3) throw "Uncorrect number.\n";

        int year{};
        std::cout << "Enter your year of birth: ";
        std::cin >> year;
        if (year < 1850) throw MyException::less_1850;
        else if (year > 2024) throw MyException::more_current_year;
        else if (year < 0) throw MyException::negative;
        else std::cout << "You entered correct data, thank You.\n";
    }
    catch(const MyException::exceptions& e)
    {
        switch (e)
        {
        case MyException::less_1850:
            std::cout << "I don't drust you.\n";
            break;
        case MyException::more_current_year:
            std::cout << "You don't born now.\n";
            break;
        case MyException::negative:
            std::cout << "You entered negative number.\n";
            break;
        
        default:
            std::cout << "Vsye okey.\n";
            break;
        }
    }
    

    return 0;
}