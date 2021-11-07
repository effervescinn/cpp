#ifndef ICHARACTER_H
#define ICHARACTER_H

#include <iostream>
#include "AMateria.hpp"

class AMateria;

class ICharacter
{
private:
    std::string name;

public:
    virtual ~ICharacter(){};
    virtual std::string const &getName() const = 0;
    virtual void equip(AMateria *m) = 0;
    virtual void unequip(int idx) = 0;
    virtual void use(int idx, ICharacter &target) = 0;
};

#endif
