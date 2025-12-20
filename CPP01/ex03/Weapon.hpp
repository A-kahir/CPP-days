#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <iostream>
#include <string>

class Weapon
{
    private:
        std::string weapon;
    public:
        Weapon(const std::string &w);
        const std::string &getType() const;
        void setType(const std::string &new_Weapon);
};

#endif