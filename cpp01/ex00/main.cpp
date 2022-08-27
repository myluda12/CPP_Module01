#include "Zombie.hpp"
#include <iostream>

int main()
{
    Zombie *newz;
    std::cout << "|||||||||HEAP|||||||||||" << std::endl;
    newz = newZombie("abdelkodos");
    newz->announce();
    delete newz;
    std::cout << "|||||||||||||||||||||||||" << std::endl << std::endl;



    std::cout << "||||||||randomChump||||||||||" << std::endl;
    randomChump("stack");

}