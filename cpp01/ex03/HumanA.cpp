#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon) : weapon(weapon) {
    this->_name = name;
    this->weapon = weapon;
}

void HumanA::attack(void) {
    std::cout << this->_name << " attacks with his " << this->weapon.getType() << std::endl;
}
