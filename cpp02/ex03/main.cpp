#include "Point.hpp"

int main( void ) {
    Point a;
    Point b(0, 10);
    Point c(5, 0);
  
    std::cout << "Triangle: " << std::endl;
    std::cout << "Point a(" << a.getX() << ", " << a.getY() << ")" << std::endl;
    std::cout << "Point b(" << b.getX() << ", " << b.getY() << ")" << std::endl;
    std::cout << "Point c(" << c.getX() << ", " << c.getY() << ")" << std::endl << std::endl;

    Point p(0.3f, 8);
    std::cout << "Point p(" << p.getX() << ", " << p.getY() << ")" << std::endl << std::endl;
    std::cout << "Result: " << std::endl;
    bsp(a, b, c, p);
    std::cout << std::endl;


    p = Point(-1, 8);
    std::cout << "Point p(" << p.getX() << ", " << p.getY() << ")" << std::endl << std::endl;
    std::cout << "Result: " << std::endl;
    bsp(a, b, c, p);
    std::cout << std::endl;


    p = Point(4.9f, 0);
    std::cout << "Point p(" << p.getX() << ", " << p.getY() << ")" << std::endl << std::endl;
    std::cout << "Result: " << std::endl;
    bsp(a, b, c, p);
    std::cout << std::endl;
    return 0;
}
