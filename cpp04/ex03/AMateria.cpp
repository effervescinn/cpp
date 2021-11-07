#include "AMateria.hpp"

AMateria::AMateria(std::string const & type)
{
    std::cout << "AMateria constructor called" << std::endl;
    this->type = type;
}

std::string const & AMateria::getType() const
{
    return this->type;
}

void AMateria::use(ICharacter& target)
{
    (void)(target);
}
