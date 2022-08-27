#include "Zombie.hpp"
#include <iostream>

Zombie::Zombie ( void )
{
    std::cout << "Construction called" << std::endl;
}

Zombie::~Zombie(void)
{
    std::cout << "destructor name : " << _name << " is being destroyed" << std::endl;
}

void     Zombie::announce(void)
{
    std::cout <<  _name << std::endl;
}

Zombie::Zombie ( std::string name )
{
    _name = name;
}

void    Zombie::SetName( std::string name )
{
    _name = name;
}
