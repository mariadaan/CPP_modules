#include "Fixed.hpp"

int main( void )
{
	Fixed a;
	Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;
	std::cout << b << std::endl;
	std::cout << Fixed::max( a, b ) << std::endl;

	// extra tests:
	Fixed c(12);
	Fixed d(16);
	std::cout << "\nvalue of c:	" << c << std::endl;
	std::cout << "value of d:	" << d << std::endl;
	std::cout << "\nComparison operator tests:" << std::endl;
	std::cout << "(c > d):	" << (c > d) << std::endl;
	std::cout << "(c < d):	" << (c < d) << std::endl;
	std::cout << "(c == d):	" << (c == d) << std::endl;
	std::cout << "(c != d):	" << (c != d) << std::endl;

	std::cout << "\nArethmetic operator tests:" << std::endl;
	std::cout << "(c + d):	" << (c + d) << std::endl;
	std::cout << "(c - d):	" << (c - d) << std::endl;
	std::cout << "(c * d):	" << (c * d) << std::endl;
	std::cout << "(c / d):	" << (c / d) << std::endl;


	






	return 0;
}

/*

0
0.00390625
0.00390625
0.00390625
0.0078125
10.1016
10.1016

*/
