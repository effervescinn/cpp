#include "Fixed.hpp"

Fixed::Fixed(void)
{
    std::cout << "Default constructor called" << std::endl;
    this->rawBits = 0;
}

Fixed::Fixed(Fixed const &src)
{
    std::cout << "Copy constructor called" << std::endl;
    *this = src;
}

Fixed::~Fixed(void)
{
    std::cout << "Destructor called" << std::endl;
}

int Fixed::getRawBits(void) const
{
    std::cout << "getRawBits member function called" << std::endl;
    return this->rawBits;
}

void Fixed::setRawBits(int const raw)
{
    this->rawBits = raw;
}

Fixed & Fixed::operator=(Fixed const &rhs) {
    std::cout << "Assignation operator called " << std::endl;
    this->rawBits = rhs.getRawBits();
    return *this;
}
