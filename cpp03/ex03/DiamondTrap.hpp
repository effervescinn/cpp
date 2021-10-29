#ifndef DIAMONDTRAP_H
# define DIAMONDTRAP_H

#include "ScavTrap.hpp"
#include "FlagTrap.hpp"

class DiamondTrap: public ScavTrap, public FlagTrap {

public:

    DiamondTrap(std::string name);
    ~DiamondTrap();
    void attack(std::string const &target);
    void whoAmI();

private:

    std::string name;
};

#endif