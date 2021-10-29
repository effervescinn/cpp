#ifndef CLAPTRAP_H
#define CLAPTRAP_H

#include <iostream>

class ClapTrap
{
public:

    ClapTrap();
    ClapTrap(std::string name);
    ~ClapTrap();
    void attack(std::string const &target);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);

protected:

    std::string name;
    int hitPoints;
    int energyPoints;
    int attackDamage;
};

#endif
