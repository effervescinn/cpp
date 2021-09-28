#include <iostream>

class Fixed {
    public:

        Fixed(void);
        Fixed(Fixed const &src);
        ~Fixed(void);
        Fixed & operator=(Fixed const &rhs);

        int getRawBits(void) const;
        void setRawBits(int const raw);

    private:

        static int const fractionalBits = 8;
        int rawBits;
};
