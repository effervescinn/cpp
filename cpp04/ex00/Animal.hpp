#ifndef ANIMAL_H
#define ANIMAL_H

#include <iostream>

class Animal
{
public:
    Animal();
    virtual ~Animal();
    std::string getType() const;
    void setType(std::string type);
    virtual void makeSound() const;

protected:
    std::string type;
};

class WrongAnimal
{
public:
    WrongAnimal();
    ~WrongAnimal();
    std::string getType() const;
    void setType(std::string type);
    void makeSound() const;

protected:
    std::string type;
};

#endif