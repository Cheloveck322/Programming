#include <iostream>
#include "MyException.h"

int main()
{
    try
    {
        MyException ex{};
        int number{};
        std::cout << "Enter 1, 2 or 3: ";
        std::cin >> number;
        if (number < 1 || number > 3) throw "Uncorrect number.\n";

        int year{};
        std::cout << "Enter your year of birth: ";
        std::cin >> year;

        if (year < 1850) throw ex.whatError(less_1850);
        else if (year > 2024) throw ex.whatError(more_current_year);
        else if (year < 0) throw ex.whatError(negative);
        else std::cout << "You entered correct data, thank You.\n";
    }
    catch(const char* e)
    {
        std::cout << e << '\n';
    }
    catch(const MyException& e)
    {
        std::cout << e.what() << '\n';
    }
    

    return 0;
}