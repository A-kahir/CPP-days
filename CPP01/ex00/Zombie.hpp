#ifndef ZOMBIE_CPP
#define ZOMBIE_CPP

#include <iostream>
#include <string>

class Zombie
{
    private:
        std::string zombie_name;
    public:
        void announce(void);
        Zombie newZombie(std::string name);
};

#endif