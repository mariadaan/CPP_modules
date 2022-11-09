#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class Fixed
{
public:
	Fixed(void);
	Fixed(const int);
	Fixed(const float);
	Fixed(Fixed const &fixedNumber);
	Fixed &operator=(Fixed const &fixedNumber);
	~Fixed(void);
	int getRawBits(void) const;
	void setRawBits(int const raw);
	int getFractionalBits(void);
	float toFloat(void) const;
	int toInt(void) const;

	bool operator==(const Fixed &fixedNumber2);
	bool operator!=(const Fixed &fixedNumber2);
	bool operator<(const Fixed &fixedNumber2);
	bool operator>(const Fixed &fixedNumber2);
	bool operator>=(const Fixed &fixedNumber2);
	bool operator<=(const Fixed &fixedNumber2);

	Fixed operator+(const Fixed &fixedNumber2) const;
	Fixed operator-(const Fixed &fixedNumber2) const;
	Fixed operator*(const Fixed &fixedNumber2) const;
	Fixed operator/(const Fixed &fixedNumber2) const;

	Fixed &operator++(void);
	Fixed operator++(int);



private:
	int _fixedPointValue;
	static const int _fractionalBits = 8;
};

std::ostream &operator<<(std::ostream &os, const Fixed &fixedNumber);



void randomChump(std::string name);

#endif
