#include "HumanB.hpp"

HumanB::HumanB(std::string name) {
    this->_name = name;
}

HumanB::HumanB(void) {

}

HumanB::~HumanB(void) {

}

void HumanB::attack(void) {
    std::cout << this->_name << " attacks with his " << this->weapon->getType() << std::endl;
}

void HumanB::setWeapon(Weapon &weapon) {
    this->weapon = &weapon;
}
