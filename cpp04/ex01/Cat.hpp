#ifndef CAT_H
#define CAT_H

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : virtual public Animal
{
public:
    Cat();
    Cat(Cat &src);
    virtual ~Cat();
    virtual void makeSound() const;
    virtual Brain getBrain();
    virtual void setBrain(Brain brain);
    virtual Cat &operator=(Cat const &rhs);

private:
    Brain *brain;
};

#endif
