#include "Cure.hpp"

Cure::Cure() : AMateria("ice")
{
}

AMateria *Cure::clone() const
{
    Cure *newCure = new Cure;
    return newCure;
}

void Cure::use(ICharacter& target)
{
    std::cout << this->type << ": \"* heals " << target.getName() << "'s wounds *\"" << std::endl;
}
