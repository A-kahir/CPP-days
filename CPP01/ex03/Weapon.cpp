#include "Weapon.hpp"

Weapon::Weapon(const std::string &w)
{
    weapon = w;
}

const std::string& Weapon::getType() const
{
    return(weapon);
}

void Weapon::setType(const std::string &new_Weapon)
{
    this->weapon = new_Weapon;
}

