#include "Point.hpp"

int main( void ) {
    Point a;
    Point b(10, 30);
    Point c(20, 0);

    Point p(0, 0.1);
    bsp(a, b, c, p);
    return 0;
}
