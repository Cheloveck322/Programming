#include <iostream>
#include "Gun.h"
#include "Gun.cpp"
#include "Player.h"
#include "Player.cpp"
#include "MagicWeapon.h"
#include "MagicWeapon.cpp"

int main()
{
    setlocale(LC_ALL, "Russian");

    Gun weapon{ "Steel sword", 40, 4.3, weapons::onehanded };

    if (weapon.getType() == weapons::onehanded)
    {
        std::cout << "Одноручное оружие\n";
    }
    else if (weapon.getType() == weapons::twohanded)
    {
        std::cout << "Двуручное оружие\n";
    }
    else if (weapon.getType() == weapons::bow)
    {
        std::cout << "Лук\n";
    }
    else if (weapon.getType() == weapons::crossbow)
    {
        std::cout << "Арбалет\n";
    }
    else 
    {
        std::cout << "Ошибочное оружие.\n";
    }

    Player player{ 12, "Steve", "postgres" };

    player.printCharacteristics();

    MagicWeapon mWeapon{ "wisdom stick", 38, 1.3, weapons::onehanded, 14.3 };

    std::cout << mWeapon.getAddDamage() << '\n';

    return 0;
}