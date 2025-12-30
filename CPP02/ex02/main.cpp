#include "Fixed.hpp"

std::ostream& operator<<(std::ostream &output, const Fixed &f);
Fixed max(const Fixed &a, const Fixed &b);

int main( void ) {
    Fixed a;
    Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
    std::cout << a << std::endl;
    std::cout << ++a << std::endl;
    std::cout << a << std::endl;
    std::cout << a++ << std::endl;
    std::cout << a << std::endl;
    std::cout << b << std::endl;
    std::cout << max( a, b ) << std::endl;
    return 0;
}
