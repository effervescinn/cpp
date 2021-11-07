#include "Character.hpp"

Character::Character(std::string name)
{
    this->name = name;
    for(int i = 0; i < 4; i++)
        this->items[i] = NULL;
}

Character::~Character()
{
    for (int i = 0; this->items[i]; i++)
        delete this->items[i];
}

std::string const &Character::getName() const
{
    return this->name;
}

void Character::equip(AMateria *m)
{
    int i = 0;
    while (this->items[i] && i < 4)
        i++;
    if (i == 4)
        return;
    else
        this->items[i] = m;
}

void Character::unequip(int idx)
{
    if (!(idx >=0 && idx < 4) || !this->items[idx])
        return;
    else
        this->items[idx] = NULL;
}

void Character::use(int idx, ICharacter &target)
{
    if (!(idx >=0 && idx < 4) || !this->items[idx])
        return;
    else
        this->items[idx]->use(target);
}