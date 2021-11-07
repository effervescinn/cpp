#ifndef CURE_H
#define CURE_H

#include "AMateria.hpp"

class Cure : virtual public AMateria
{

public:
    Cure();
    virtual AMateria *clone() const;
    virtual void use(ICharacter& target);
};

#endif
