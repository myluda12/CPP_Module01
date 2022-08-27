#ifndef HUMANB_HPP
#define HUMANB_HPP

#include "Weapon.hpp"

class HumanB
{
private:
    std::string _name;
    Weapon *wp;
public:
    HumanB(std::string string);
    ~HumanB();
    void attack();
    void setWeapon(Weapon& weap);

};


#endif