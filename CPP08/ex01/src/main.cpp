#include "Span.hpp"
#include <vector>

template <typename T>
void printContainer(T container)
{
	std::cout << "values: { ";
	for (typename T::const_iterator it = container.cbegin();
	it != container.cend(); it++)
	{
		std::cout << *it;
		std::cout << " ";
	}
	std::cout << "}" << std::endl;
}

// int main(void)
// {
// 	Span mySpan(3);

// 	try
// 	{
// 		mySpan.addNumber(72);
// 		mySpan.addNumber(72);
// 		mySpan.addNumber(72);
// 		mySpan.addNumber(72);
// 	}
// 	catch(const std::exception& e)
// 	{
// 		std::cerr << "Exception thrown: " << e.what() << '\n';
// 	}
// 	printContainer(mySpan.getValues());

// }

int main()
{
	Span sp = Span(5);
	sp.addNumber(6);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);
	printContainer(sp.getValues());
	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;

	try
	{
		sp.addNumber(666);
	}
	catch(const std::exception& e)
	{
		std::cerr << "Exception thrown: " << e.what() << '\n';
	}

	try
	{
		Span emptySpan;
		emptySpan.shortestSpan();
	}
	catch(const std::exception& e)
	{
		std::cerr << "Exception thrown: " << e.what() << '\n';
	}

	return 0;
}
