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
	copy.setRawBits(copy.getRawBits() + 1);
	return (copy);
}

// Fixed Fixed::operator--(const Fixed &fixedNumber2) const
// {
// 	return (Fixed(fixedNumber2.toFloat() - this->toFloat()));
// }

// Fixed Fixed::operator(const Fixed &fixedNumber2) const
// {
// 	return (Fixed(fixedNumber2.toFloat() * this->toFloat()));
// }

// Fixed Fixed::operator/(const Fixed &fixedNumber2) const
// {
// 	return (Fixed(fixedNumber2.toFloat() / this->toFloat()));
// }


// struct X {
//   ...
//   // pre-increment
//   X& operator++() { ...; return *this; }

//   // post-increment
//   X operator++(int) {
//     X copy(*this);
//     operator++();
//     return copy;
//   }
// };
