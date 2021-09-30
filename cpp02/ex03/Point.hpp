#ifndef POINT_H
# define POINT_H

#include "Fixed.hpp"

class Point {
    public:

        Point(void);
        Point(Point const &src);
        ~Point(void);

    private:

        Fixed x;
        Fixed y;
};

#endif