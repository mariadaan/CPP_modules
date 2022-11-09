#include "Fixed.hpp"


int Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (this->_fixedPointValue);
}

void Fixed::setRawBits(int const fixedPointValue)
{
	std::cout << "setRawbits member function called" << std::endl;
	this->_fixedPointValue = fixedPointValue;
}


/* Constructor */
Fixed::Fixed(void)
{
	std::cout << "Default constructor called" << std::endl;
	this->_fixedPointValue = 0;
	return;
}

/* Copy constructor */
Fixed::Fixed(Fixed &fixedNumber)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = fixedNumber;
	// _fixedPointValue = fixedNumber.getRawBits();
	return;
}

/*
	Copy assignment operator
	This operator is called when an already initialized object is
	assigned a new value from another existing object. 
	It does not create a separate memory block or new memory space.
	It is a bitwise operator. 
	A bitwise copy gets created,
	if the Assignment operator is not overloaded. 
*/
Fixed& Fixed::operator=(Fixed &fixedNumber)
{
	std::cout << "Copy assignment operator called" << std::endl;
	_fixedPointValue = fixedNumber.getRawBits();
	return fixedNumber;
}

/* Destructor */
Fixed::~Fixed(void)
{
	std::cout << "Destructor called" << std::endl;
	return;
}
