#include "Fixed.hpp"

Fixed Fixed::operator+(const Fixed &fixedNumber2) const
{
	return (Fixed(fixedNumber2.toFloat() + this->toFloat()));
}

Fixed Fixed::operator-(const Fixed &fixedNumber2) const
{
	return (Fixed(fixedNumber2.toFloat() - this->toFloat()));
}

Fixed Fixed::operator*(const Fixed &fixedNumber2) const
{
	return (Fixed(fixedNumber2.toFloat() * this->toFloat()));
}

Fixed Fixed::operator/(const Fixed &fixedNumber2) const
{
	return (Fixed(fixedNumber2.toFloat() / this->toFloat()));
}
