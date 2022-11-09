#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed
{
public:
	Fixed(void);
	Fixed(const int);
	Fixed(const float);
	Fixed(Fixed const &fixedNumber);
	Fixed &operator=(Fixed const &fixedNumber);
	~Fixed(void);
	int		getRawBits(void) const;
	void	setRawBits(int const raw);
	float	toFloat(void) const;
	int		toInt(void) const;

	bool operator==(const Fixed &fixedNumber2) const;
	bool operator!=(const Fixed &fixedNumber2) const;
	bool operator<(const Fixed &fixedNumber2) const;
	bool operator>(const Fixed &fixedNumber2) const;
	bool operator>=(const Fixed &fixedNumber2) const;
	bool operator<=(const Fixed &fixedNumber2) const;

	Fixed operator+(const Fixed &fixedNumber2) const;
	Fixed operator-(const Fixed &fixedNumber2) const;
	Fixed operator*(const Fixed &fixedNumber2) const;
	Fixed operator/(const Fixed &fixedNumber2) const;

	Fixed &operator++(void);
	Fixed operator++(int);
	Fixed &operator--(void);
	Fixed operator--(int);

	static Fixed max(Fixed &fixedNumber1, Fixed &fixedNumber2);
	static Fixed max(const Fixed &fixedNumber1, const Fixed &fixedNumber2);
	static Fixed min(Fixed &fixedNumber1, Fixed &fixedNumber2);
	static Fixed min(const Fixed &fixedNumber1, const Fixed &fixedNumber2);
	

	// static Fixed	max( Fixed &fixed1, Fixed &fixed2);
	// static Fixed	max( const Fixed &fixed1, const Fixed &fixed2);




private:
	int _fixedPointValue;
	static const int _fractionalBits = 8;
};

std::ostream &operator<<(std::ostream &os, const Fixed &fixedNumber);



void randomChump(std::string name);

#endif
