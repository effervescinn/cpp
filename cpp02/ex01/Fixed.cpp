#include "Fixed.hpp"

Fixed::Fixed(void)
{
    std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(int const num)
{
    std::cout << "Int constructor called" << std::endl;
    this->rawBits = 10 << this->fractionalBits;
}

Fixed::Fixed(float const num)
{
    std::cout << "Float constructor called" << std::endl;
    int i = 0;
    float tmp = num;
    while (i++ < this->fractionalBits)
        tmp *= 2;
    this->rawBits = roundf(tmp);
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
    return this->rawBits;
}

void Fixed::setRawBits(int const raw)
{
    this->rawBits = raw;
}

int Fixed::toInt(void) const {
    return this->rawBits >> this->fractionalBits;
}

float Fixed::toFloat( void ) const {
    int i = 0;
    float ret;
    ret = this->rawBits;
    while (i++ < this->fractionalBits)
        ret /= 2;
    return ret;
}

Fixed & Fixed::operator=(Fixed const &rhs) {
    std::cout << "Assignation operator called " << std::endl;
    this->rawBits = rhs.getRawBits();
    return *this;
}

std::ostream & operator<<(std::ostream &o, Fixed const &rhs) {
    o << rhs.toFloat();
    return o;
}
