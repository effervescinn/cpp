#ifndef ICE_H
#define ICE_H

#include "AMateria.hpp"

class Ice : virtual public AMateria
{

public:
    Ice();
    virtual AMateria *clone() const;
    virtual void use(ICharacter& target);
};

#endif
