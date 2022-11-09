#include "Fixed.hpp"

Fixed Fixed::max(Fixed &fixedNumber1, Fixed &fixedNumber2)
{
	if (fixedNumber1 > fixedNumber2)
		return (Fixed(fixedNumber1));
	else
		return (Fixed(fixedNumber2));
}

Fixed Fixed::max(const Fixed &fixedNumber1, const Fixed &fixedNumber2)
{
	if (fixedNumber1 > fixedNumber2)
		return (Fixed(fixedNumber1));
	else
		return (Fixed(fixedNumber2));
}

Fixed Fixed::min(Fixed &fixedNumber1, Fixed &fixedNumber2)
{
	if (fixedNumber1 < fixedNumber2)
		return (Fixed(fixedNumber1));
	else
		return (Fixed(fixedNumber2));
}

Fixed Fixed::min(const Fixed &fixedNumber1, const Fixed &fixedNumber2)
{
	if (fixedNumber1 < fixedNumber2)
		return (Fixed(fixedNumber1));
	else
		return (Fixed(fixedNumber2));
}
