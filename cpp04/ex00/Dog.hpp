#ifndef DOG_H
#define DOG_H

#include "Animal.hpp"

class Dog : public Animal
{
public:
    Dog();
    virtual ~Dog();
    virtual void makeSound() const;
};

class WrongDog : public WrongAnimal
{
public:
    WrongDog();
    ~WrongDog();
    void makeSound() const;
};

#endif
