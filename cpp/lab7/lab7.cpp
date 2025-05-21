#include <iostream>
#include <string>
#include <string_view>
#include <regex>
#include <vector>
#include <fstream>
#include <cmath>
#include <map>

class Settings
{
public:
    static void Add(float a, float b)
    {
        list[a] = b;
    }

    static float Get(float key)
    {
        return list[key];
    }

    static void print()
    {
        for (auto& a : list)
        {
            std::cout << a.first << ' ' << a.second << '\n';
        }
    }

private:    
    static std::map<float, float> list;
};

bool isCorrectName(const std::string& name)
{
    std::regex reg{ "[A-Z]{1,}[a-z]{1,31}" };
    return std::regex_search(name, reg);
}

bool isCorrectMail(const std::string& email)
{
    std::regex reg("^[a-z0-9_][a-z0-9_\.-]*[a-z0-9_]@([a-z0-9]+[a-z0-9_-]*[a-z0-9]\.)+[a-z0-9]{2,}$", std::regex_constants::icase);
    return std::regex_search(email, reg);
}

std::regex getRegularString()
{
    std::regex reg("^[a-z0-9_][a-z0-9_\.-]*[a-z0-9_]@([a-z0-9]+[a-z0-9_-]*[a-z0-9]\.)+[a-z0-9]{2,}$", std::regex_constants::icase);
    return reg;
}

void printArray(std::vector<float>& arr)
{
    for (auto& a : arr)
    {
        std::cout << a << ' ';
    }
    std::cout << '\n';
}

int main()
{
    std::string str{};
    int index{};
    bool entered{ false };

    std::cout << "Enter the string, what you want: ";
    std::cin >> str;

    for (int i{}; i < str.size(); ++i)
    {
        if (i >= 2 && i <= 4)
        {
            std::cout << str[i];
        }
        if (str[i] == 'a' && !entered)
        {
            index = i;
            entered = true;
        }
    }
    std::cout << '\n';
    if (entered)
    {
        std::cout << "The first index of the a is " << index << ".\n";
    }
    else 
    {
        std::cout << "The symbol a is not find.\n";
    }

    std::string name{};
    std::cout << "Enter your name: ";
    std::cin >> name;

    if (isCorrectName(name))
    {
        std::cout << "You entered correct name.\n";
    }
    else 
    {
        std::cout << "You entered invalid name.\n";
    }

    std::string emails{};
    std::cout << "Enter email addresses: ";
    std::cin >> emails;
    std::vector<std::string> mail{};

    std::smatch matches{};

    while (std::regex_search(emails, matches, getRegularString()))
    {
        std::cout << matches[0] << ' ';

        emails = matches.suffix().str();
    }

    double radius{};
    std::cout << "\nEnter the radius of the circle: ";
    std::cin >> radius;
    const double pi { 3.14 };
    double S{ std::round(2 * pi * radius * 1000) / 1000 };

    std::cout << "The length of the circle " << S << '\n';

    std::string random{};
    std::cout << "Enter random word: ";

    while(std::getline(std::cin, random))
    {
        std::ofstream input{ "input.txt", std::ios::app };

        if (random == "read")
        {
            std::ifstream enter{ "input.txt" };

            std::string out{};
            while (enter >> out)
            {
                std::cout << out << ' ';
            }
            enter.close();
        }
        else if (random == "erase")
        {
            std::ofstream eraser{ "input.txt", std::ios::trunc };
            eraser.close();
        }
        else if (random == "exit")
        {
            input.close();
            break;
        }
        else 
        {
            input << random;
        }
    }

    std::vector<float> array{};
    array.push_back(4.1);
    array.push_back(3.3);
    array.push_back(5.8);
    array.push_back(3.14);
    array.push_back(64.1);

    printArray(array);

    auto iter{ array.begin() };

    array.insert(iter+4, 13.15);

    printArray(array);

    array.pop_back();

    printArray(array);

    Settings sett{};

    /*sett.Add(1.32, 90);

    std::cout << sett.Get(1.32) << '\n';

    sett.Add(3.14, 123412);

    sett.print();

    sett.Add(1.423, 34);*/

    std::cout << sett.Get(1.423) << '\n';

    sett.Add(3.14, 231);

    sett.print();

    return 0;
}