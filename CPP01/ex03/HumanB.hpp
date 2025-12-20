#ifndef HUMANB_HPP
#define HUMANB_HPP

#include <iostream>
class Weapon;

class HumanB
{
    private:
        std::string name_B;
        Weapon *weapon_B;
    public:
        HumanB(std::string name);
        void attack(void);
        void setWeapon(Weapon &club);
};

#endif