#include <iostream>

int sumToNumb(int num = 1)
{
    int sum{};
    if (num <= 0)
    {
        return 0;
    }

    for (int i{ 1 }; i <= num; ++i)
    {
        sum += i;
    }
    return sum;
}

void sumAndMult(int a, int b, int& c, int& d)
{
    c = a + b;
    d = a * b;
}

int main()
{
    int arr[2][3] { { 1, 1, 1 }, { 2, 2, 2 } };

    int rowsOfArr { sizeof(arr) / sizeof(*arr) };
    int columnsOfArr { sizeof(arr[0]) / sizeof(arr[0][0]) };
    
    int sum{};

    for (int row{}; row < rowsOfArr; ++row)
    {
        for (int column{}; column < columnsOfArr; ++column)
        {
            sum += arr[row][column];
        }
    }
    std::cout << sum << '\n';

    int oneDemen[3]{};
    int oneDemensSize { sizeof(oneDemen)/sizeof(*oneDemen) };

    for (int i{}; i < rowsOfArr; ++i)
    {
        for (int j{}; j < columnsOfArr; ++j)
        {
            oneDemen[j] += arr[i][j];
        }
    }

    for (int i{}; i < oneDemensSize; ++i)
    {
        std::cout << oneDemen[i] << ' ';
    }
    std::cout << '\n';

    float temp { 20.84 };
    float& firstRefToFloat { temp };
    float& secondRefToFloat { temp };

    firstRefToFloat = 3.14;
    std::cout << temp << ' ' << secondRefToFloat << '\n';

    std::cout << sumToNumb() << '\n';

    int a{ 1 };
    int b{ 2 };
    int tempC{};
    int tempD{};
    int& c{ tempC };
    int& d{ tempD };
    sumAndMult(a, b, c, d);
    std::cout << c << ' ' << d << '\n';

    size_t random{ 10392874 };
    std::cout << random << '\n';

    int count{ 3 };
    while(count > 0)
    {
        int lol{ 5432 };
        for (int i{}; i < rowsOfArr; ++i)
        {
            for (int j{}; j < columnsOfArr; ++j)
            {
                std::cout << arr[i][j] << ' ';
            }
            std::cout << '\n';
        }
        std::cout << lol << '\n';
        --count;
    } 
    //std::cout << lol << '\n';
    
    return 0;
}