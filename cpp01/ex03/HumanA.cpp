#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon) {
    this->_name = name;
    this->weapon = weapon;
}

HumanA::HumanA(void) {

}

HumanA::~HumanA(void) {

}

void HumanA::attack(void) {
    std::cout << this->_name << " attacks with his " << this->weapon.getType() << std::endl;
}
