#include "Point.hpp"

Point::Point(void) {
    this->x = Fixed(0);
    this->y = Fixed(0);
}

Point::Point(Point const &src) {
    this->x = src.x;
    this->y = src.y;
}

Point::Point(float const x, float const y) {
    this->x = Fixed(x);
    this->y = Fixed(y);
}

Point::~Point(void) {

}

Point & Point::operator=(Point const &rhs) {
    this->x = rhs.x;
    this->y = rhs.y;
    return *this;
}

Fixed Point::getX(void) const {
    return this->x;
}

Fixed Point::getY(void) const {
    return this->y;
}

bool bsp( Point const a, Point const b, Point const c, Point const point) {
    int first =
    (a.getX().getRawBits() - point.getX().getRawBits())
    * (b.getY().getRawBits() - a.getY().getRawBits())
    - (b.getX().getRawBits() - a.getX().getRawBits())
    * (a.getY().getRawBits() - point.getY().getRawBits());

    int second = 
    (b.getX().getRawBits() - point.getX().getRawBits())
    * (c.getY().getRawBits() - b.getY().getRawBits())
    - (c.getX().getRawBits() - b.getX().getRawBits())
    * (b.getY().getRawBits() - point.getY().getRawBits());

    int third = 
    (c.getX().getRawBits() - point.getX().getRawBits())
    * (a.getY().getRawBits() - c.getY().getRawBits())
    - (a.getX().getRawBits() - c.getX().getRawBits())
    * (c.getY().getRawBits() - point.getY().getRawBits());

    if ((first >= 0 && second >= 0 && third >= 0) || (first <= 0 && second <= 0 && third <= 0))
    {
        std::cout << "Yems, it's inside" << std::endl;
        return true;
    }
    else
    {
        std::cout << "Noooooo" << std::endl;
        return false;
    }
}
    