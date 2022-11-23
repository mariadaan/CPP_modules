#include <iostream>

template <typename T>
void iter(T *array, int array_len, void (*func)(T &var))
{
	if (!array)
		return;
	for (int i = 0; i < array_len; i++)
		func(array[i]);
}

template <typename T>
void increase(T &var)
{
	var++;
}

template <typename T>
void decrease(T &var)
{
	var--;
}

template <typename T>
void printElem(T &var)
{
	std::cout << var;
}

template <typename T>
void printElemSep(T &var)
{
	std::cout << var << ", ";
}
