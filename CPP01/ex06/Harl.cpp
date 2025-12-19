#include "Harl.hpp"

void Harl::debug(void)
{
    std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!\n\n";
}

void Harl::info(void)
{
    std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!\n\n";
}

void Harl::warning(void)
{
    std::cout << "I think I deserve to have some extra bacon for free.\nI’ve been coming for years, whereas you started working here just last month.\n\n";
}

void Harl::error(void)
{
    std::cout << "This is unacceptable! I want to speak to the manager now.\n";
}

e_level Take_lvl(std::string level)
{
    if (level == "DEBUG")
        return (DEBUG);
    if (level == "INFO")
        return (INFO);
    if (level == "WARNING")
        return (WARNING);
    if (level == "ERROR")
        return (ERROR);
    return (NOONE);
}


void Harl::complain(std::string level)
{
    switch (Take_lvl(level))
    {
        case DEBUG:
            std::cout << "[ DEBUG ]\n";
            debug();
        case INFO:
            std::cout << "[ INFO ]\n";
            info();
        case WARNING:
            std::cout << "[ WARNING ]\n";
            warning();
        case ERROR:
            std::cout << "[ ERROR ]\n";
            error();
            break;
        default:
            std::cout << "[ Probably complaining about insignificant problems ]\n";
    }
}

