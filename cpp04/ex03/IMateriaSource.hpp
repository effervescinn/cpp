#ifndef IAMATERIASOURCE_H
#define IAMATERIASOURCE_H

#include <iostream>
class AMateria;

class IMateriaSource
{
public:
    virtual ~IMateriaSource() {};
    virtual void learnMateria(AMateria *m) = 0;
    virtual AMateria *createMateria(std::string const &type) = 0;
};

#endif
