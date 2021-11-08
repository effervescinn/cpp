#include "AMateria.hpp"

AMateria::AMateria(std::string const & type)
{
    std::cout << "AMateria constructor called" << std::endl;
    this->type = type;
}

AMateria::AMateria(AMateria &src)
{
    *this = src;
}

std::string const & AMateria::getType() const
{
    return this->type;
}

void AMateria::use(ICharacter& target)
{
    (void)(target);
}

AMateria &AMateria::operator=(AMateria const &rhs)
{
    this->type = rhs.getType();
    return *this;
}
