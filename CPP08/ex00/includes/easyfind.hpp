#ifndef EASYFIND_HPP
 #define EASYFIND_HPP

#include <iostream>

/*
Assuming T is a container of integers, this function has to find the first occurrence
of toFind in container. 

If no occurrence is found, an exception is thrown.
*/
template <typename T>
typename T::iterator easyfind(T container, const int toFind)
{
	typename T::iterator itFound = std::find(container.begin(), container.end(), toFind);
	if (itFound ==  container.end())
		throw std::out_of_range("element not found");
	return itFound;
}

#endif
