#include "Cat.hpp"

Cat::Cat()
{
    std::cout << "Cat constructor called" << std::endl;
    this->type = "Cat";
    this->brain = new Brain;
}

Cat &Cat::operator=(Cat const &rhs)
{
    delete this->brain;
    this->type = rhs.type;
    this->brain = new Brain;
    *this->brain = *rhs.brain;
    return *this;
}

Cat::Cat(Cat &src)
{
    *this = src;
}

Cat::~Cat()
{
    std::cout << "Cat destructor called" << std::endl;
    delete this->brain;
}

void Cat::makeSound() const
{
    std::cout << "Meow!" << std::endl;
}

Brain Cat::getBrain()
{
    return *this->brain;
}
    
void Cat::setBrain(Brain brain)
{
    *this->brain = brain;
}