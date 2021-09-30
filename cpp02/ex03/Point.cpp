#include "Point.hpp"

Point::Point(void) {
    this->x.setRawBits(0);
    this->y.setRawBits(0);
}

Point::Point(Point const &src) {
    this->x.setRawBits(src.x.getRawBits());
    this->y.setRawBits(src.y.getRawBits());
}


Point::~Point(void) {

}
