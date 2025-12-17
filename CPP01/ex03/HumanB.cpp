#include "Weapon.hpp"
#include "HumanB.hpp"

void HumanB::attack(void)
{
    std::cout << name_B << " attacks with their " << weapon_B->getType() << '\n';
}
void HumanB::setWeapon(Weapon &club)
{
    weapon_B = &club;
}
