#include "Dog.hpp"

Dog::Dog()
{
    std::cout << "Dog constructor called" << std::endl;
    this->type = "Dog";
    this->brain = new Brain;
}

Dog &Dog::operator=(Dog const &rhs)
{
    delete this->brain;
    this->type = rhs.type;
    this->brain = new Brain;
    *this->brain = *rhs.brain;
    return *this;
}

Dog::Dog(Dog &src)
{
    *this = src;
}

Dog::~Dog()
{
    std::cout << "Dog destructor called" << std::endl;
    delete this->brain;
}

void Dog::makeSound() const
{
    std::cout << "Woof!" << std::endl;
}

Brain Dog::getBrain()
{
    return *this->brain;
}
    
void Dog::setBrain(Brain brain)
{
    *this->brain = brain;
}
