#include "Zombie.hpp"

Zombie::Zombie()
{
    zombie_name = "";
}

Zombie::~Zombie()
{
    std::cout << zombie_name << " destroyed correctly\n";
}

Zombie::Zombie(std::string new_name)
{
    zombie_name = new_name;
}

void Zombie::announce(void)
{
    std::cout << zombie_name << ":" << " BraiiiiiiinnnzzzZ...\n";
}
