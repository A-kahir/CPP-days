#ifndef HUMANA_HPP
#define HUMANA_HPP

#include <iostream>
class Weapon;

class HumanA
{
    private:
        std::string name_A;
        Weapon &weapon_A;
    public:
        HumanA(std::string name, Weapon &club);
        void attack(void);
};

#endif