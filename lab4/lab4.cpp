#include <iostream>
#include "Gun.h"
#include "Gun.cpp"
#include "Characteristic.h"
#include "MyMath.h"
#include "Characteristic.cpp"
#include "MyMath.cpp"

int main()
{
    Gun awp { "AWP", 127, 7.9 };
    std::cout << awp.getName() << ' ' << awp.getDamage() << ' ' << awp.getWeight() << '\n';

    Gun pistol { "Makarov", 23, 1.8 };

    Gun* ak { new Gun{} };
    std::cout << ak->getName() << ' ' << ak->getDamage() << ' ' << ak->getWeight() << '\n';

    std::cout << std::boolalpha << awp.maxWeight(15.0) << '\n';

    std::cout << awp.sumWeight(pistol) << '\n';

    delete ak;

    Gun gun{ "Cooler", 10, 2.8 };
    Characteristic op { 5 };

    std::cout << op.getDamage(gun) << '\n';

    MyMath a {};
    a.add(5, 6);
    a.div(3, 1);
    a.mult(6, 3);
    a.sub(10, 8);

    std::cout << a.getCounter() << '\n';

    return 0;
}