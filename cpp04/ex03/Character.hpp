#ifndef CHARACTER_H
#define CHARACTER_H

#include "ICharacter.hpp"
#include "AMateria.hpp"

class Character : virtual public ICharacter
{
private:
    std::string name;
    AMateria *items[4];

public:
    virtual ~Character();
    Character(std::string name);
    Character(Character const &src);
    virtual std::string const &getName() const;
    virtual void equip(AMateria *m);
    virtual void unequip(int idx);
    virtual void use(int idx, ICharacter &target);
    Character &operator=(Character const &rhs);
};

#endif