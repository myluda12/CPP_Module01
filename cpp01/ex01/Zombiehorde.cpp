#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name )
{
    Zombie *z = new Zombie[N];
    while(N--)
    {
        z[N].SetName(name);
    }
    return z;
}
