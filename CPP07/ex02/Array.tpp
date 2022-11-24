#ifndef ARRAY_TPP
#define ARRAY_TPP
#include "Array.hpp"

template <typename T>
Array<T>::Array(void) : _array(new T[0]), _size(0) {}

template <typename T>
Array<T>::Array(unsigned int n) : _array(new T[n]), _size(n) {}

template <typename T>
Array<T>::Array(const Array<T> &other)
{
	*this = other;
}

template <typename T>
Array<T>	&Array<T>::operator=(const Array<T> &other)
{
	this->_size = other.size();
	if (this->_array)
		delete[] this->_array;
	this->_array = new T[this->_size];
	for (int i = 0; i < this->_size; i++)
		this->_array[i] = other.getArray()[i];
	return (*this);
}

template <typename T>
Array<T>::~Array()
{
	delete[] this->_array;
}

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
	if (index < 0 || index >= this->_size)
		throw OutOfBounds();
	return this->_array[index];
}

#endif
