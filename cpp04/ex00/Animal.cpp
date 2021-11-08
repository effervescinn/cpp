#include "Animal.hpp"

Animal::Animal()
{
    std::cout << "Animal constructor called" << std::endl;
}

Animal &Animal::operator=(Animal const &rhs)
{
    this->type = rhs.type;
    return *this;
}

Animal::Animal(Animal &src)
{
    *this = src;
}

Animal::~Animal()
{
    std::cout << "Animal destructor called" << std::endl;
}

std::string Animal::getType() const
{
    return this->type;
}

void Animal::makeSound() const
{
    std::cout << "Grrraaaaaa!" << std::endl;
}

void Animal::setType(std::string type)
{
    this->type = type;
}

/********************************************************************/

WrongAnimal::WrongAnimal()
{
    std::cout << "Animal constructor called" << std::endl;
}

WrongAnimal &WrongAnimal::operator=(WrongAnimal const &rhs)
{
    this->type = rhs.type;
    return *this;
}

WrongAnimal::WrongAnimal(WrongAnimal &src)
{
    *this = src;
}

WrongAnimal::~WrongAnimal()
{
    std::cout << "Animal destructor called" << std::endl;
}

std::string WrongAnimal::getType() const
{
    return this->type;
}

void WrongAnimal::makeSound() const
{
    std::cout << "Grrraaaaaa!" << std::endl;
}

void WrongAnimal::setType(std::string type)
{
    this->type = type;
}