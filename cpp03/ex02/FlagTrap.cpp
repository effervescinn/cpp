#include "FlagTrap.hpp"

FlagTrap::FlagTrap(std::string name): ClapTrap(name)
{
    std::cout << "FlagTrap constructor called" << std::endl;
    this->hitPoints = 100;
    this->energyPoints = 100;
    this->attackDamage = 30;
}

FlagTrap::~FlagTrap()
{
    std::cout << "FlagTrap destructor called" << std::endl;
}

void FlagTrap::highFivesGuy()
{
    std::cout << this->name << " says: Give me a highfive (^.^)✋" << std::endl;
}
