#ifndef CLAPTRAP_H
# define CLAPTRAP_H
# include "ClapTrap.hpp"

class ScavTrap: public ClapTrap {
public:

    ScavTrap(std::string name);
    ~ScavTrap();
    void guardGate();

private:
};

#endif