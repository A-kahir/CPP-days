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
        Fixed(const int val);
        Fixed(const float val2);
        Fixed(const Fixed &cpy);
        Fixed& operator=(const Fixed &cpy);
        ~Fixed();

        float toFloat(void) const;
        int toInt(void) const;
        int getRawBits(void) const;
        void setRawBits(int const raw_b);

        Fixed operator+(const Fixed &val) const;
        Fixed operator*(const Fixed &val) const;
        Fixed operator-(const Fixed &val) const;
        Fixed operator/(const Fixed &val) const;

        bool operator<(const Fixed &val) const;
        bool operator>(const Fixed &val) const;
        bool operator<=(const Fixed &val) const;
        bool operator>=(const Fixed &val) const;
        bool operator!=(const Fixed &val) const;
        bool operator==(const Fixed &val) const;
        Fixed& operator++();
        Fixed operator++(int);
};

#endif
