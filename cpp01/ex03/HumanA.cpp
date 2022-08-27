#include "HumanA.hpp"

void HumanA::attack()
{
    std::cout << _name << " attacks with his " <<  wp.getType() << std::endl;
}

HumanA::HumanA(std::string name, Weapon & weap) : wp(weap)
{
    _name = name;
}

HumanA::~HumanA()
{
}
