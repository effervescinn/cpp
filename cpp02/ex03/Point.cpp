#include "Point.hpp"

Point::Point(void) {
    Fixed *x = const_cast<Fixed*>(&this->x);
    *x = Fixed(0);
    Fixed *y = const_cast<Fixed*>(&this->y);
    *y = Fixed(0);
}

Point::Point(Point const &src) {
    *this = src;
}

Point::Point(float const x, float const y) {
    Fixed *fX = const_cast<Fixed*>(&this->x);
    *fX = Fixed(x);
    Fixed *fY = const_cast<Fixed*>(&this->y);
    *fY = Fixed(y);
}

Point::~Point(void) {

}

Point & Point::operator=(Point const &rhs) {
    Fixed *x = const_cast<Fixed*>(&this->x);
    *x = rhs.getX();
    Fixed *y = const_cast<Fixed*>(&this->y);
    *y = rhs.getY();
    return *this;
}

Fixed Point::getX(void) const {
    return this->x;
}

Fixed Point::getY(void) const {
    return this->y;
}
    