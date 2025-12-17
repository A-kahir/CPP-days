#include "Zombie.hpp"

Zombie* zombieHorde(int N, std::string name);

int main()
{
    int N = 214748;
    if (N < 0 || N > 2147483647)
        return (1);
    Zombie *zombie = zombieHorde(N, "aymane");
    if (!zombie)
        return (1);
    for (int i = 0; i < N; i++)
    {
        zombie[i].announce();
    }
    delete[](zombie);
}
