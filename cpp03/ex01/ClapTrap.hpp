#ifndef CLAPTRAP_H
#define CLAPTRAP_H

#include <iostream>

class ClapTrap
{
    
public:
    ClapTrap();
    ClapTrap(std::string name);
    ClapTrap(ClapTrap const &src);
    ~ClapTrap();
    void attack(std::string const &target);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);
    ClapTrap &operator=(ClapTrap const &rhs);

protected:
    std::string name;
    int hitPoints;
    int energyPoints;
    int attackDamage;
};

#endif
