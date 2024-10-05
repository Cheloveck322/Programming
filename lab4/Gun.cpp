#include <iostream>
#include <string>
#include <string_view>
#include "Gun.h"

Gun::Gun(const std::string& name, int damage, double weight)
    : m_name { name }, m_damage { damage }, m_weight { weight }
{
}

Gun::Gun()
    : Gun("AK-47", 56, 4.12)
{
}

std::string_view Gun::getName() const 
{
    return m_name;
}

int Gun::getDamage() const
{
    return m_damage;
}

double Gun::getWeight() const
{
    return m_weight;
}

void Gun::setDamage(int damage) 
{
    m_damage = damage;
}

bool Gun::maxWeight(double weight) const 
{
    return (weight < m_weight ? true : false);
}

/*int Gun::sumWeight(const Gun& gun) const
{
    return gun.getWeight() + m_weight;
}*/
    
int Gun::sumWeight(int weight) const
{
    return m_weight + weight;
}

int Gun::sumWeight(const Gun& gun) const
{
    return sumWeight(gun.getWeight()) + m_weight;
}

Gun::~Gun()
{
    std::cout << m_name << ' ' << m_damage << ' ' << m_weight << '\n';
    std::cout << "The gun is deleting.\n";
}