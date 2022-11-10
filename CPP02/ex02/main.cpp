#include "Fixed.hpp"

int main(void)
{
	Fixed a;
	Fixed const b(Fixed(5.05f) * Fixed(2));
	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;
	std::cout << b << std::endl;
	std::cout << Fixed::max(a, b) << std::endl;

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

	std::cout << "\nPost-increment operator tests:" << std::endl;
	std::cout << "c value:	" << (c) << std::endl;
	std::cout << "c++ (haha):	" << (c++) << std::endl;
	std::cout << "c value:	" << (c) << std::endl;
	std::cout << "c--:		" << (c--) << std::endl;
	std::cout << "c value:	" << (c) << std::endl;

	std::cout << "\nPre-increment operator tests:" << std::endl;
	std::cout << "c value:	" << (c) << std::endl;
	std::cout << "++c:		" << (++c) << std::endl;
	std::cout << "c value:	" << (c) << std::endl;
	std::cout << "--c:		" << (--c) << std::endl;
	std::cout << "c value:	" << (c) << std::endl;

	std::cout << "\nMember functions min() and max() tests:" << std::endl;
	std::cout << "max(c, d):	" << Fixed::max(c, d) << std::endl;
	std::cout << "min(c, d):	" << Fixed::min(c, d) << std::endl;
	std::cout << "\nmin() and max() with const Fixed tests:" << std::endl;

	Fixed const e(4);
	Fixed const f(6.8f);
	std::cout << "e value:	" << (e) << std::endl;
	std::cout << "f value:	" << (f) << std::endl;
	std::cout << "max(e, f):	" << Fixed::max(e, f) << std::endl;
	std::cout << "min(e, f):	" << Fixed::min(e, f) << std::endl;

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
