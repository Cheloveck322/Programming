#include "Characteristic.h"
#include "Gun.h"

Characteristic::Characteristic(int strength)
    : m_strength{ strength }
{
}

int Characteristic::getDamage(const Gun& gun) const
{ 
    return gun.getDamage() + m_strength;
}