#include "Fixed.hpp"

Fixed::Fixed(void)
{
    this->rawBits = 0;
}

Fixed::Fixed(int const num)
{
    this->rawBits = num << this->fractionalBits;
}

Fixed::Fixed(float const num)
{
    int i = 0;
    float tmp = num;
    while (i++ < this->fractionalBits)
        tmp *= 2;
    this->rawBits = roundf(tmp);
}

Fixed::Fixed(Fixed const &src)
{
    *this = src;
}

Fixed::~Fixed(void)
{

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

// Math operators

Fixed & Fixed::operator=(Fixed const &rhs) {
    this->rawBits = rhs.getRawBits();
    return *this;
}

Fixed Fixed::operator+(Fixed const &rhs) {
    Fixed ret(*this);
    ret.rawBits += rhs.getRawBits();
    return ret;
}

Fixed Fixed::operator-(Fixed const &rhs) {
    Fixed ret(*this);
    ret.rawBits -= rhs.getRawBits();
    return ret;
}

Fixed Fixed::operator*(Fixed const &rhs) {
    Fixed ret(*this);
    ret.rawBits *= rhs.getRawBits();
    ret.rawBits >>= rhs.fractionalBits;
    return ret;
}

Fixed Fixed::operator/(Fixed const &rhs) {
    Fixed ret(*this);
    ret.rawBits /= rhs.getRawBits();
    return ret;
}

// Prefix
Fixed &Fixed::operator++() {
    ++this->rawBits;
    return *this;
}

Fixed &Fixed::operator--() {
    --this->rawBits;
    return *this;
}

// Postfix

Fixed Fixed::operator++(int) {
    Fixed ret = *this;
    ++*this;
    return ret;
}

Fixed Fixed::operator--(int) {
    Fixed ret = *this;
    --*this;
    return ret;
}

// Comparison

bool Fixed::operator>(Fixed const &rhs) {
    return (this->rawBits > rhs.getRawBits());
}

bool Fixed::operator>=(Fixed const &rhs) {
    return (this->rawBits >= rhs.getRawBits());
}

bool Fixed::operator<(Fixed const &rhs) {
    return (this->rawBits < rhs.getRawBits());
}

bool Fixed::operator<=(Fixed const &rhs) {
    return (this->rawBits <= rhs.getRawBits());
}

bool Fixed::operator==(Fixed const &rhs) {
    return (this->rawBits == rhs.getRawBits());
}

bool Fixed::operator!=(Fixed const &rhs) {
    return (this->rawBits == rhs.getRawBits());
}

// Min-max

Fixed &Fixed::min(Fixed &a, Fixed &b) {
    return (a.getRawBits() >= b.getRawBits() ? b : a);
}

Fixed const &Fixed::min(Fixed const &a, Fixed const &b) {
    return (a.getRawBits() >= b.getRawBits() ? b : a);
}

Fixed &Fixed::max(Fixed &a, Fixed &b) {
    return (a.getRawBits() >= b.getRawBits() ? a : b);
}

Fixed const &Fixed::max(Fixed const &a, Fixed const &b) {
    return (a.getRawBits() >= b.getRawBits() ? a : b);
}

// Output

std::ostream & operator<<(std::ostream &o, Fixed const &rhs) {
    o << rhs.toFloat();
    return o;
}
