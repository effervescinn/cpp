#ifndef DOG_H
#define DOG_H

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : virtual public Animal
{
public:
    Dog();
    Dog(Dog &src);
    virtual ~Dog();
    virtual void makeSound() const;
    virtual Brain getBrain();
    virtual void setBrain(Brain brain);
    virtual Dog &operator=(Dog const &rhs);

private:
    Brain *brain;
};

#endif
