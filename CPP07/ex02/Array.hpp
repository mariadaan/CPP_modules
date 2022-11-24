#ifndef ARRAY_HPP
 #define ARRAY_HPP

#include <iostream>
#include <stdexcept>

template <typename T>
class Array
{
public:
	Array(void);
	Array(unsigned int n);
	Array(const Array<T> &other);
	Array<T> &operator=(const Array<T> &other);
	T &operator[](int index);
	~Array(void);

	T *getArray(void) const;
	int size(void) const;

private:
	T	*_array;
	int	_size;
};

#include "Array.tpp"

#endif
