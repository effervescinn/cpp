#include "Cure.hpp"

Cure::Cure() : AMateria("cure")
{
}

AMateria *Cure::clone() const
{
    Cure *newCure = new Cure;
    return newCure;
}

void Cure::use(ICharacter& target)
{
    std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}
