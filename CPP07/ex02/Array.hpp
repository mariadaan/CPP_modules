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

	class OutOfBounds : public std::exception
	{
	public:
		const char *what() const throw() { return "index out of bounds"; }
	};

private:
	T	*_array;
	const int	_size;
};

#include "Array.tpp"

// template <typename T>
// int arrayLen(T *array)
// {
// 	if (!array)
// 		return 0;
// 	return sizeof(array)/sizeof(array[0]);
// }

#endif
