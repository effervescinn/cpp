#ifndef POINT_H
# define POINT_H

#include "Fixed.hpp"

class Point {
    public:

        Point(void);
        Point(Point const &src);
        Point(float const x, float const y);
        ~Point(void);
        Point &operator=(Point const &rhs);
        Fixed getX(void) const;
        Fixed getY(void) const;

    private:

        Fixed const x;
        Fixed const y;
};

bool bsp( Point const a, Point const b, Point const c, Point const point);

#endif