#ifndef SCAVTRAP_H
# define SCAVTRAP_H
# include "ClapTrap.hpp"

class ScavTrap: virtual public ClapTrap
{
public:

    ScavTrap(std::string name);
    ~ScavTrap();
    void guardGate();
};

#endif