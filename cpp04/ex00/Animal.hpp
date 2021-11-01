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
    virtual void makeSound() const;
    Animal &operator=(Animal const &rhs);

protected:
    std::string type;
};

class WrongAnimal
{
public:
    WrongAnimal();
    WrongAnimal(WrongAnimal &src);
    ~WrongAnimal();
    std::string getType() const;
    void setType(std::string type);
    void makeSound() const;
    WrongAnimal &operator=(WrongAnimal const &rhs);

protected:
    std::string type;
};

#endif