#include "Karen.hpp"

void Karen::debug(void) {
    std::cout << "[ DEBUG ]" << std::endl;
    std::cout << "I love to get extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger." << std::endl << "I just love it!" << std::endl << std::endl;
}

void Karen::info(void) {
    std::cout << "[ INFO ]" << std::endl;
    std::cout << "I cannot believe adding extra bacon cost more money." << std::endl << "You don’t put enough!" << std::endl << "If you did I would not have to ask for it!" << std::endl << std::endl;
}

void Karen::warning(void) {
    std::cout << "[ WARNING ]" << std::endl;
    std::cout << "I think I deserve to have some extra bacon for free." << std::endl << "I’ve been coming here for years and you just started working here last month." << std::endl << std::endl;
}


void Karen::error(void) {
    std::cout << "[ ERROR ]" << std::endl;
    std::cout << "This is unacceptable, I want to speak to the manager now." << std::endl << std::endl;
}

void Karen::complain(std::string level) {
    int cmd;
    this->mode[0] = &Karen::debug;
    this->mode[1] = &Karen::info;
    this->mode[2] = &Karen::warning;
    this->mode[3] = &Karen::error;

    cmd = ((level == "DEBUG") * 1 ) + ((level == "INFO") * 2 ) + ((level == "WARNING") * 3 ) + ((level == "ERROR") * 4 );
    if (cmd == 0)
        std::cout << "[ Probably complaining about insignificant problems ]" << std::endl<< std::endl;
    else {
        for(int i = cmd; i <= 4; i++)
            (this->*mode[i - 1])(); 
    }
} 