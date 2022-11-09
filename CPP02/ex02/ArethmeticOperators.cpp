#include "Fixed.hpp"

Fixed Fixed::operator+(const Fixed &fixedNumber2) const
{
	return (Fixed(this->toFloat() + fixedNumber2.toFloat()));
}

Fixed Fixed::operator-(const Fixed &fixedNumber2) const
{
	return (Fixed(this->toFloat() - fixedNumber2.toFloat()));
}

Fixed Fixed::operator*(const Fixed &fixedNumber2) const
{
	return (Fixed(this->toFloat() * fixedNumber2.toFloat()));
}

Fixed Fixed::operator/(const Fixed &fixedNumber2) const
{
	return (Fixed(this->toFloat() / fixedNumber2.toFloat()));
}
