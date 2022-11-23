#ifndef ARRAY_HPP
 #define ARRAY_HPP

#include <iostream>
template <class T>
class Array
{
public:
	Array(void);
	Array(uint n);
	Array(const Array &other);
	Array &operator=(const Array &other);
	~Array(void);

	T functionName(T arg);

private:
	T var;
};

#endif
