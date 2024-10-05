#ifndef MAGICWEAPON_H
#define MAGICWEAPON_H

#include "Gun.h"

class MagicWeapon : public Gun
{
public:
    MagicWeapon(const std::string& name, int damage, double weight, const weapons::type& type, double addDamage);

    MagicWeapon() = default;

    double getAddDamage() const;

private:
    double m_addDamage{};
};

#endif