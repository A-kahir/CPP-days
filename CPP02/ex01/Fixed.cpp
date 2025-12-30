#include "Fixed.hpp"

Fixed::Fixed()
{
    value = value << frac_bits;
    std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const float val2)
{
    value = roundf(val2 * (1 << frac_bits));
    std::cout << "Copy constructor called" << std::endl;
}

Fixed& Fixed::operator=(const Fixed &cpy)
{
    std::cout << "Copy assignment operator called" << std::endl;
    if (this != &cpy)
        value = cpy.value;
    return (*this);
}

Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
}

int Fixed::getRawBits(void) const
{
    std::cout << "getRawBits member function called" << std::endl;
    return (value);
}

void Fixed::setRawBits(int const raw_b)
{
    value = raw_b;
}

float Fixed::toFloat(void) const
{
    std::cout << "Float constructor called" << std::endl;
    return ((float)value / (1 << frac_bits));
}

int Fixed::toInt(void) const
{
    std::cout << "Int constructor called" << std::endl;
    return (value >> frac_bits);
}

std::ostream& operator<<(std::ostream &output, const Fixed &f)
{
    output << f.toFloat();
    return (output);
}
