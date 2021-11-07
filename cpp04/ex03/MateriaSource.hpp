#ifndef AMATERIASOURCE_H
#define AMATERIASOURCE_H

#include <iostream>
#include "IMateriaSource.hpp"
#include "AMateria.hpp"

class MateriaSource : virtual public IMateriaSource
{
private:
    AMateria *materias[4];
public:
    // MateriaSource();
    // virtual ~MateriaSource() {};
    // virtual void learnMateria(AMateria *);
    // virtual AMateria *createMateria(std::string const &type);
};

#endif
