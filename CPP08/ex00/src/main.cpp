#include "easyfind.hpp"
#include <vector>
#include <array>

template <typename T>
void printContainer(T container)
{
	std::cout << "values: { ";
	for (typename T::iterator it = container.begin();
	it != container.end(); it++)
	{
		std::cout << *it;
		std::cout << " ";
	}
	std::cout << "}" << std::endl;
}


int main()
{

	std::cout << "\n-------------------------------------------------" << std::endl;
	std::cout << "               Testing with vector               " << std::endl;
	std::cout << "-------------------------------------------------" << std::endl;
	std::vector<int> valuesVector;
	for (int i = 0; i < 20; i+=2)
		valuesVector.push_back(i);
	printContainer(valuesVector);

	try
	{
		std::vector<int>::iterator itFound = ::easyfind(valuesVector, 16);
		std::cout << "found value " << *itFound << std::endl;
		std::vector<int>::iterator itFound2 = ::easyfind(valuesVector, 9);
		std::cout << "found value " << *itFound2 << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << "Exception thrown: " << e.what() << '\n';
	}

	std::cout << "\n-------------------------------------------------" << std::endl;
	std::cout << "               Testing with array               " << std::endl;
	std::cout << "-------------------------------------------------" << std::endl;
	std::array<int,6> valuesArray = {7, 77, 777, 7777, 77777, 777777};
	printContainer(valuesArray);
	try
	{
		std::array<int,6>::iterator itFound3 = ::easyfind(valuesArray, 777);
		std::cout << "found value " << *itFound3 << std::endl;
		std::array<int,6>::iterator itFound4 = ::easyfind(valuesArray, 9);
		std::cout << "found value " << *itFound4 << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << "Exception thrown: " << e.what() << '\n';
	}


}
