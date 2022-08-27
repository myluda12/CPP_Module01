#ifndef WEAPON_HPP
# define WEAPON_HPP
 
#include <iostream>

class Weapon
{
private:
    std::string _type;
public:
    Weapon(std::string weapon);
    ~Weapon();
    void   setType(std::string type);
    std::string const getType();
};




#endif