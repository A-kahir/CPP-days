#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>
#include <stdlib.h>

class Zombie
{
    private:
        std::string zombie_name;
    public:
        Zombie();
        ~Zombie();
        void announce(void);
        void set_zombie_name(std::string name);
};

#endif