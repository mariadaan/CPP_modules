#include "Fixed.hpp"

Fixed &Fixed::max(Fixed &fixedNumber1, Fixed &fixedNumber2)
{
	if (fixedNumber1 > fixedNumber2)
		return (fixedNumber1);
	else
		return (fixedNumber2);
}

Fixed Fixed::max(const Fixed &fixedNumber1, const Fixed &fixedNumber2)
{
	if (fixedNumber1 > fixedNumber2)
		return (fixedNumber1);
	else
		return (fixedNumber2);
}
