#include "ClapTrap.hpp"

ClapTrap::ClapTrap() {
    std::cout << "ClapTrap constructor called" << std::endl;
    this->attackDamage = 0;
    this->energyPoints = 10;
    this->hitPoints = 10;
}

ClapTrap::ClapTrap(std::string name) {
    this->name = name;
    std::cout << this->name << " constructored" << std::endl;
    this->attackDamage = 0;
    this->energyPoints = 10;
    this->hitPoints = 10;
}

ClapTrap::~ClapTrap() {
    std::cout << "ClapTrap Desctructor called" << std::endl;
}

void ClapTrap::attack(std::string const &target) {
    std::cout << "ClapTrap " << this->name << " attacks " << target << ", causing " << this->hitPoints << " points of damage!" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount) {
    this->energyPoints -= amount;
    std::cout << "ClapTrap " << this->name << "damage: -" << amount << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount) {
    this->energyPoints += amount;
    std::cout << "ClapTrap " << this->name << "repaired: +" << amount << std::endl;
}
