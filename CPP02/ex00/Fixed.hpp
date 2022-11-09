#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class Fixed
{
public:
	Fixed(void);
	Fixed(Fixed &fixedNumber);
	Fixed& operator=(Fixed &fixedNumber);
	~Fixed(void);
	int getRawBits(void) const;
	void setRawBits(int const raw);

private:
	int _fixedPointValue;
	static const int _binaryPoint = 8;
};

void randomChump(std::string name);

#endif
