#include "Fixed.hpp"

float Fixed::toFloat(void) const
{
	return((float)this->_fixedPointValue / (1 << this->_fractionalBits));
}

int Fixed::toInt(void) const
{
	return ((int)(roundf((float)this->_fixedPointValue / (1 << this->_fractionalBits))));
}

int Fixed::getRawBits(void) const
{
	return (this->_fixedPointValue);
}

void Fixed::setRawBits(int const fixedPointValue)
{
	this->_fixedPointValue = fixedPointValue;
}

/* Constructor */
Fixed::Fixed(void)
{
	this->_fixedPointValue = 0;
	return;
}

/* Constructor with int parameter */
Fixed::Fixed(const int intValue)
{
	this->_fixedPointValue = intValue << this->_fractionalBits;
	return;
}

/* Constructor with float parameter */
Fixed::Fixed(const float floatValue)
{
	this->_fixedPointValue = (int)roundf(floatValue * (1 << _fractionalBits));
	return;
}

/* Copy constructor */
Fixed::Fixed(Fixed const &fixedNumber)
{
	*this = fixedNumber;
	return;
}

/* Copy assignment operator */
Fixed &Fixed::operator=(Fixed const &fixedNumber)
{
	_fixedPointValue = fixedNumber.getRawBits();
	return *this;
}

/* Fixed to output stream operator */
std::ostream &operator<<(std::ostream &os, const Fixed &fixedNumber)
{
	os << fixedNumber.toFloat();
	return os;
}

/* Destructor */
Fixed::~Fixed(void)
{
	return;
}
