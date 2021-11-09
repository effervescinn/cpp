#include "Ice.hpp"

Ice::Ice() : AMateria("ice")
{
}

AMateria* Ice::clone() const
{
    Ice *newIce = new Ice;
    return newIce;
}

void Ice::use(ICharacter& target)
{
    std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}
