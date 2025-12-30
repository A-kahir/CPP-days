#include "Zombie.hpp"

Zombie* zombieHorde(int N, std::string name);

int main()
{
    int N = 4;
    if (N < 0)
        return (1);
    Zombie *zombie = zombieHorde(N, "akahir");
    if (!zombie)
        return (1);
    for (int i = 0; i < N; i++)
    {
        zombie[i].announce();
    }
    delete[](zombie);
}
