#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <iostream>

class Weapon
{
    private:
        std::string weapon;
    public:
        Weapon(std::string w);
        std::string getType() const;
        void setType(std::string new_Weapon);
};

#endif