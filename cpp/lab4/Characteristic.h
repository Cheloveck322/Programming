#ifndef CHARACTERISTIC_H
#define CHARACTERISTIC_H

class Gun;

class Characteristic
{
public:
    Characteristic(int strength);

    int getDamage(const Gun& gun) const;

private:
    int m_strength{};
};

#endif