#include "HumanB.hpp"

void HumanB::attack()
{
    std::cout << _name << " attacks with his " <<  wp->getType() << std::endl;
}

HumanB::HumanB(std::string name)
{
    _name = name;
}

void    HumanB::setWeapon(Weapon& weap)
{
    wp = &weap;
}

HumanB::~HumanB()
{
}