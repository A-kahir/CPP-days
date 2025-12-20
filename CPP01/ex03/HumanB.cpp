#include "Weapon.hpp"
#include "HumanB.hpp"

HumanB::HumanB(const std::string name) : name_B(name), weapon_B(NULL)
{
}

void HumanB::attack(void)
{
    if (weapon_B)
        std::cout << name_B << " attacks with their " << weapon_B->getType() << std::endl;
    else
        std::cout << name_B << " has no weapon to attack with!" << std::endl;
}

void HumanB::setWeapon(Weapon &club)
{
    weapon_B = &club;
}
