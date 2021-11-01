#include "Cat.hpp"

Cat::Cat()
{
    std::cout << "Cat constructor called" << std::endl;
    this->type = "Cat";
}

Cat::~Cat()
{
    std::cout << "Cat destructor called" << std::endl;
}

void Cat::makeSound() const
{
    std::cout << "Meow!" << std::endl;
}

WrongCat::WrongCat()
{
    std::cout << "Cat constructor called" << std::endl;
    this->type = "Cat";
}

WrongCat::~WrongCat()
{
    std::cout << "Cat destructor called" << std::endl;
}

void WrongCat::makeSound() const
{
    std::cout << "Meow!" << std::endl;
}