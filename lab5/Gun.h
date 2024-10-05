#ifndef GUN_H
#define GUN_H

#include <string>
#include <string_view>

namespace weapons
{
    enum type
    {
        onehanded,
        twohanded,
        bow,
        crossbow,
        all_weapons
    };
}

class Gun
{
public:
    Gun(const std::string& name, int damage, double weight, weapons::type type);

    Gun();

    std::string_view getName() const;

    int getDamage() const;

    double getWeight() const;

    weapons::type getType() const;

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
    weapons::type m_type{};
};

#endif