#ifndef FIXED_H
# define FIXED_H

# include <iostream>
# include <cmath>

class Fixed {
    public:

        Fixed(void);
        Fixed(int const num);
        Fixed(float const num);
        Fixed(Fixed const &src);
        ~Fixed(void);
        Fixed & operator=(Fixed const &rhs);

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
