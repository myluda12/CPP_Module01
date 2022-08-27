#ifndef HUMANA_HPP
#define HUMANA_HPP

#include "Weapon.hpp"
class HumanA
{
private:
    std::string _name;
    Weapon &wp;

public:
    HumanA(std::string name, Weapon & weap);
    ~HumanA();
    void attack();

};




#endif