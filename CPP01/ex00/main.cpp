#include "Zombie.hpp"

Zombie* newZombie(std::string name);
void randomChump(std::string name);

int main()
{
    Zombie *Zombie = newZombie("aymane");
    Zombie->announce();
    delete(Zombie);
    randomChump("kahir");
}
