#ifndef ZOMBIE_H
#define ZOMBIE_H

#include <string>

class Zombie
{
    private:
        std::string _name;
    public:
        Zombie ( void );
        Zombie ( std::string name );
        ~Zombie ( void );
        void announce( void );
       void SetName( std::string name );

};
Zombie* zombieHorde( int N, std::string name );

#endif