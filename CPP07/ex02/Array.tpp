#ifndef ARRAY_TPP
#define ARRAY_TPP
#include "Array.hpp"

template <typename T>
Array<T>::Array(void) : _array(new T[0]), _size(0) {}

template <typename T>
Array<T>::Array(unsigned int n) : _array(new T[n]), _size(n)
{
	this->_array[3] = 24;
}

template <typename T>
Array<T>::Array(const Array<T> &other)
{
	*this = other;
}

template <typename T>
Array<T>	&Array<T>::operator=(const Array<T> &other)
{
	int n = other.size();
	this->_array = new T[n];
	for (int i = 0; i < n; i++)
		this->_array[i] = other.getArray()[i];
	return (*this);
}

template <typename T>
Array<T>::~Array() {}

template <typename T>
T * Array<T>::getArray(void) const
{
	return this->_array;
}

template <typename T>
int Array<T>::size(void) const
{
	return this->_size;
}

template <typename T>
T	&Array<T>::operator[](int index)
{
	if (index < 0 || index > this->_size)
		throw OutOfBounds();
	return this->_array[index];
}

#endif
