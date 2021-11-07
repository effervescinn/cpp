#ifndef ANIMAL_H
#define ANIMAL_H

#include <iostream>

class Animal
{
public:
    Animal();
    Animal(Animal &src);
    virtual ~Animal();
    std::string getType() const;
    void setType(std::string type);
    virtual void makeSound() const = 0;
    Animal &operator=(Animal const &rhs);

protected:
    std::string type;
};

#endif