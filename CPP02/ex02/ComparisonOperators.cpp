#include "Fixed.hpp"

bool Fixed::operator==(const Fixed &fixedNumber2) const
{
	return (this->getRawBits() == fixedNumber2.getRawBits());
}

bool Fixed::operator!=(const Fixed &fixedNumber2) const
{
	return (this->getRawBits() == fixedNumber2.getRawBits());
}

bool Fixed::operator>(const Fixed &fixedNumber2) const
{
	return (this->getRawBits() > fixedNumber2.getRawBits());
}

bool Fixed::operator<(const Fixed &fixedNumber2) const
{
	return (this->getRawBits() < fixedNumber2.getRawBits());
}

bool Fixed::operator<=(const Fixed &fixedNumber2) const
{
	return (this->getRawBits() <= fixedNumber2.getRawBits());
}

bool Fixed::operator>=(const Fixed &fixedNumber2) const
{
	return (this->getRawBits() <= fixedNumber2.getRawBits());
}
