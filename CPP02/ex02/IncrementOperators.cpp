#include "Fixed.hpp"

/* pre-increment */
Fixed &Fixed::operator++(void)
{
	this->setRawBits(this->getRawBits() + 1);
	return (*this);
}

/* post-increment */
Fixed Fixed::operator++(int)
{
	Fixed copy(*this);
	operator++();
	return (copy);
}

/* pre-increment */
Fixed &Fixed::operator--(void)
{
	this->setRawBits(this->getRawBits() - 1);
	return (*this);
}

/* post-increment */
Fixed Fixed::operator--(int)
{
	Fixed copy(*this);
	operator--();
	return (copy);
}
