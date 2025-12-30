#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed
{
    private:
        int value;
        static const int frac_bits = 8;
    public:
        Fixed();
        Fixed(const float val2);
        Fixed& operator=(const Fixed &cpy);
        ~Fixed();
        int getRawBits(void) const;
        void setRawBits(int const raw_b);

        float toFloat(void) const;
        int toInt(void) const;
};

#endif