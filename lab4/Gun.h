#ifndef GUN_H
#define GUN_H

#include <string>
#include <string_view>

class Gun
{
public:
    Gun(const std::string& name, int damage, double weight);

    Gun();

    std::string_view getName() const;

    int getDamage() const;

    double getWeight() const;

    void setDamage(int damage);

    bool maxWeight(double weight) const;

    /*int sumWeight(const Gun& gun) const;*/
    
    int sumWeight(int weight) const;

    int sumWeight(const Gun& gun) const;

    ~Gun();

private:
    std::string m_name{};
    int m_damage{};
    double m_weight{};  
};

#endif