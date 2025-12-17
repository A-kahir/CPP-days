#include "Weapon.hpp"

Weapon::Weapon(std::string w)
{
    weapon = w;
}

std::string Weapon::getType() const
{
    return(weapon);
}

void Weapon::setType(std::string new_Weapon)
{
    this->weapon = new_Weapon;
}

