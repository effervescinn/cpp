#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name + "_clap_name"), ScavTrap(name), FlagTrap(name)
{
    std::cout << "DiamondTrap constructor called" << std::endl;
    this->hitPoints = FlagTrap::hitPoints;
    this->energyPoints = ScavTrap::energyPoints;
    this->attackDamage = FlagTrap::attackDamage;
    this->name = name;
}

DiamondTrap::~DiamondTrap()
{
    std::cout << "DiamondTrap destructor called" << std::endl;
}

void DiamondTrap::attack(std::string const &target)
{
    ScavTrap::attack(target);
}

void DiamondTrap::whoAmI()
{
    std::cout <<"Hi, my DiamondTrap name is " << this->name << std::endl;
    std::cout <<"And my ClapTrap name is " << this->ClapTrap::name << std::endl;
}
