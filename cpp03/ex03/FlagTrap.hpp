#ifndef FLAGTRAP_H
#define FLAGTRAP_H
#include "ClapTrap.hpp"

class FlagTrap : virtual public ClapTrap
{

public:
    FlagTrap(std::string name);
    ~FlagTrap();
    void highFivesGuy();
};

#endif