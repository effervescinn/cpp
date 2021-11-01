#include "Dog.hpp"

Dog::Dog()
{
    std::cout << "Dog constructor called" << std::endl;
    this->type = "Dog";
}

Dog::~Dog()
{
    std::cout << "Dog destructor called" << std::endl;
}

void Dog::makeSound() const
{
    std::cout << "Woof!" << std::endl;
}

WrongDog::WrongDog()
{
    std::cout << "Dog constructor called" << std::endl;
    this->type = "Dog";
}

WrongDog::~WrongDog()
{
    std::cout << "Dog destructor called" << std::endl;
}

void WrongDog::makeSound() const
{
    std::cout << "Woof!" << std::endl;
}
