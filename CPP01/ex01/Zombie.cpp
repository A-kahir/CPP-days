#include "Zombie.hpp"

Zombie::Zombie()
{
    zombie_name = "";
}

Zombie::~Zombie()
{
    std::cout << zombie_name << " destroyed correctly\n";
}

void Zombie::announce(void)
{
    std::cout << zombie_name << ":" << " BraiiiiiiinnnzzzZ...\n";
}

void Zombie::set_zombie_name(std::string name)
{
    this->zombie_name = name;
}
