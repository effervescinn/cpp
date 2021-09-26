#include "Weapon.hpp"

Weapon::Weapon(std::string type) {
    this->_type = type;
}

Weapon::Weapon(void) {
}

Weapon::~Weapon(void) {
}

std::string const &Weapon::getType(void) {
    std::string const &typeRef = this->_type;
    return typeRef;
}

void Weapon::setType(std::string type) {
    this->_type = type;
}