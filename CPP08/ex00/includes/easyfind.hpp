#ifndef EASYFIND_HPP
 #define EASYFIND_HPP

#include <iostream>

/*
Assuming T is a container of integers, this function has to find the first occurrence
of the second parameter in the first parameter. 

If no occurrence is found, you can either throw an exception or return an error value
of your choice. If you need some inspiration, analyze how standard containers behave
*/
template <typename T>
typename T::iterator easyfind(T container, const int toFind)
{
	return std::find(container.begin(), container.end(), toFind);
}

#endif
