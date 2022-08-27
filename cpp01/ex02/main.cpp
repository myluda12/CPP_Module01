#include <iostream>

int main()
{
    std::string str = "HI THIS IS BRAIN";;
    std::string *stringPTR = &str;
    std::string& stringREF = str;

    std::cout << "Adress of string : " << &str << std::endl;
    std::cout << "Adress of StringPTR : " << stringPTR << std::endl;
    std::cout << "Adress of stringREF : " << &stringREF << std::endl;
    std::cout << "________________________________" << std::endl << std::endl;
    std::cout << "Value of string : " << str << std::endl;
    std::cout << "Value of StringPTR : " << *stringPTR << std::endl;
    std::cout << "Value of stringREF : " << stringREF << std::endl;

}