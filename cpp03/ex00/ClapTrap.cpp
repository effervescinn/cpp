#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
    std::cout << "Default ClapTrap constructor called" << std::endl;
    this->name = "Noname";
    this->attackDamage = 0;
    this->energyPoints = 10;
    this->hitPoints = 10;
}

ClapTrap::ClapTrap(std::string name)
{
    this->name = name;
    std::cout << "ClapTrap " << this->name << " constructor called" << std::endl;
    this->attackDamage = 0;
    this->energyPoints = 10;
    this->hitPoints = 10;
}

ClapTrap::ClapTrap(ClapTrap const &src)
{
    *this = src;
}

ClapTrap::~ClapTrap()
{
    std::cout << "ClapTrap " << this->name << " desctructor called" << std::endl;
}


ClapTrap & ClapTrap::operator=(ClapTrap const &rhs) {
    this->name = rhs.name;
    this->hitPoints = rhs.hitPoints;
    this->attackDamage = rhs.attackDamage;
    this->energyPoints = rhs.energyPoints;
    return *this;
}

void ClapTrap::attack(std::string const &target)
{
    if (this->energyPoints <= 0)
        std::cout << this->name << " can't attack, needs some energy" << std::endl;
    else
    {
        std::cout
            << "ClapTrap "
            << this->name
            << " attacks "
            << target
            << ", causing "
            << this->attackDamage
            << " points of damage!"
            << std::endl;
        this->energyPoints--;
    }
}

void ClapTrap::takeDamage(unsigned int amount)
{
    if (this->hitPoints <= 0)
        std::cout << this->name << " is already dead" << std::endl;
    else
    {
        std::cout << this->name << " loses HP: -" << amount << std::endl;
        this->hitPoints -= amount;
        if (this->hitPoints <= 0)
            std::cout << this->name << " is dead" << std::endl;
    }
}

void ClapTrap::beRepaired(unsigned int amount)
{
    if (this->hitPoints <= 0)
        std::cout << this->name << " is dead, can't be repaired" << std::endl;
    this->hitPoints += amount;
    std::cout << this->name << " gets HP: +" << amount << std::endl;
}
