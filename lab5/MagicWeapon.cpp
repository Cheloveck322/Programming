#include "MagicWeapon.h"
#include <string>

MagicWeapon::MagicWeapon(const std::string& name, int damage, double weight, const weapons::type& type, double addDamage)
    : Gun(name, damage, weight, type), m_addDamage{ addDamage }
{
}

double MagicWeapon::getAddDamage() const
{
    return m_addDamage;
}