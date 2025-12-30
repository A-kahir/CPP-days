#include "Weapon.hpp"
#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &club) : name_A(name), weapon_A(club)
{
}

void HumanA::attack(void)
{
    std::cout << name_A << " attacks with their " << weapon_A.getType() << '\n';
}
