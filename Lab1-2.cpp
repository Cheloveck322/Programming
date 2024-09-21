#include <iostream>
#include <string>
#include <string_view>

int main()
{
    setlocale(LC_ALL, "Russian");

    int firstValue { 150 };
    float secondValue { 15.933 };
    short thirdValue { 250 };

    std::cout << firstValue << '\n';
    std::cout << secondValue << '\n';
    std::cout << thirdValue << '\n';

    int day { 7 };
    std::string month { "january" };
    int year { 2005 };

    std::cout << "Моя дата рождения: " << day << ' ' << month << ' ' << year << " года\n";

    constexpr int a { 2 };
    constexpr int b { 3 };
    constexpr std::string_view str { "WINDOWS" };   

    std::cout << a << ' ' << b << ' ' << str << '\n';

    return 0;
}