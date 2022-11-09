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
	std::cout << "Default constructor called" << std::endl;
	this->_fixedPointValue = 0;
	return;
}

/* Constructor with int parameter */
Fixed::Fixed(const int intValue)
{
	std::cout << "Int constructor called" << std::endl;
	this->_fixedPointValue = intValue << this->_fractionalBits;
	return;
}

/* Constructor with float parameter */
Fixed::Fixed(const float floatValue)
{
	std::cout << "Float constructor called" << std::endl;
	this->_fixedPointValue = (int)roundf(floatValue * (1 << _fractionalBits));
	return;
}

/* Copy constructor */
Fixed::Fixed(Fixed const &fixedNumber)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = fixedNumber;
	return;
}

/* Copy assignment operator */
Fixed &Fixed::operator=(Fixed const &fixedNumber)
{
	std::cout << "Copy assignment operator called" << std::endl;
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
	std::cout << "Destructor called" << std::endl;
	return;
}
