#ifndef FIXED_H
# define FIXED_H

# include <iostream>
# include <cmath>

class Fixed {
    public:

        static Fixed &min(Fixed &a, Fixed &b);
        static const Fixed &min(Fixed const &a, Fixed const &b);
        static Fixed &max(Fixed &a, Fixed &b);
        static const Fixed &max(Fixed const &a, Fixed const &b);

        Fixed(void);
        Fixed(int const num);
        Fixed(float const num);
        Fixed(Fixed const &src);
        ~Fixed(void);
        Fixed & operator=(Fixed const &rhs);
        Fixed operator+(Fixed const &rhs);
        Fixed operator-(Fixed const &rhs);
        Fixed operator*(Fixed const &rhs);
        Fixed operator/(Fixed const &rhs);
        bool operator>(Fixed const &rhs);
        bool operator<(Fixed const &rhs);
        bool operator<=(Fixed const &rhs);
        bool operator>=(Fixed const &rhs);
        bool operator==(Fixed const &rhs);
        bool operator!=(Fixed const &rhs);
        Fixed &operator++();
        Fixed &operator--();
        Fixed operator++(int);
        Fixed operator--(int);

        int getRawBits(void) const;
        void setRawBits(int const raw);
        int toInt(void) const;
        float toFloat( void ) const;

    private:

        static int const fractionalBits = 8;
        int rawBits;
};

std::ostream & operator<<(std::ostream &o, Fixed const &rhs);

#endif
