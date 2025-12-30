#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>

class Zombie
{
    private:
        std::string zombie_name;
    public:
        Zombie();
        Zombie(std::string new_name);
        ~Zombie();
        void announce(void);
};

#endif
