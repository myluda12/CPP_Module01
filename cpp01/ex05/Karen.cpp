#include "Karen.hpp"


void      Karen::debug(void)
{
    std::cout << "I love to get extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I just love it!" << std::endl;
}

void      Karen::info(void)
{
    std::cout << "I cannot believe adding extra bacon cost more money. You don’t put enough! If you did I would not have to ask for it!" << std::endl;
}

void      Karen::warning(void)
{
    std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming here for years and you just started working here last month." << std::endl;
}

void      Karen::error(void)
{
    std::cout << "This is unacceptable, I want to speak to the manager now." << std::endl;
}

void        Karen::complain(std::string level)
{
    void (Karen::*fun_ptr[4])(void);
    
        fun_ptr[0] = &Karen::debug;
        fun_ptr[1] = &Karen::info;
        fun_ptr[2] = &Karen::warning;
        fun_ptr[3] = &Karen::error;
        std::string list[4] = {"debug","info","warning","error"};
        for(int i = 0; i < 4 ; i++)
        {
            if (list[i] == level)
                (this->*fun_ptr[i])();
        }       
        
    
    
}