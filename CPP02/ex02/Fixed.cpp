#include "Fixed.hpp"

Fixed::Fixed(): value(0)
{}

Fixed::Fixed(const int val)
{
    value = val * (1 << frac_bits);
}

Fixed::Fixed(const float val2)
{
    value = roundf(val2 * (1 << frac_bits));
}

Fixed::Fixed(const Fixed &cpy)
{
    value = cpy.value;
}

Fixed& Fixed::operator=(const Fixed &cpy)
{
    if (this != &cpy)
        value = cpy.value;
    return (*this);
}

Fixed::~Fixed()
{}

float Fixed::toFloat(void) const
{
    return ((float)value / (1 << frac_bits));
}

int Fixed::toInt(void) const
{
    return (value >> frac_bits);
}

int Fixed::getRawBits(void) const
{
    return (value);
}

void Fixed::setRawBits(int const raw_b)
{
    value = raw_b;
}

Fixed Fixed::operator+(const Fixed &val) const
{
    Fixed res;
    res.setRawBits(this->value + val.value);
    return (res);
}

Fixed Fixed::operator*(const Fixed &val) const
{
    Fixed res;
    res.setRawBits((this->value * val.value) / (1 << frac_bits));
    return (res);
}

Fixed Fixed::operator-(const Fixed &val) const
{
    Fixed res;
    res.setRawBits(this->value - val.value);
    return (res);
}

Fixed Fixed::operator/(const Fixed &val) const
{
    Fixed res;
    res.setRawBits((this->value * (1 << frac_bits)) / val.value);
    return (res);
}

bool Fixed::operator<(const Fixed &val) const
{
    return (this->value < val.value);
}

bool Fixed::operator>(const Fixed &val) const
{
    return (this->value > val.value);
}

bool Fixed::operator<=(const Fixed &val) const
{
    return (this->value <= val.value);
}

bool Fixed::operator>=(const Fixed &val) const
{
    return (this->value >= val.value);
}

bool Fixed::operator!=(const Fixed &val) const
{
    return (this->value != val.value);
}

bool Fixed::operator==(const Fixed &val) const
{
    return (this->value == val.value);
}

Fixed& Fixed::operator++()
{
    ++value;
    return (*this);
}

Fixed Fixed::operator++(int)
{
    Fixed tmp(*this);
    ++value;
    return (tmp);
}

std::ostream& operator<<(std::ostream &output, const Fixed &f)
{
    output << f.toFloat();
    return (output);
}

Fixed max(const Fixed &a, const Fixed &b)
{
    if (a > b)
        return (a);
    else
        return (b);
}
