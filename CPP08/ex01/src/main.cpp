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

int main()
{
	std::cout << -5 - -6;
	Span sp = Span(7);
	sp.addNumber(-1);
	sp.addNumber(0);
	sp.addNumber(6);
	sp.addNumber(3);
	sp.addNumber(-17);
	sp.addNumber(9);
	sp.addNumber(11);
	printContainer(sp.getValues());
	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;


	std::cout << "\n-------------------------------------------------" << std::endl;
	std::cout << "                Testing exceptions                " << std::endl;
	std::cout << "-------------------------------------------------" << std::endl;
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

	Span myBigSpan = Span(1004);
	myBigSpan.addNumber(5);
	myBigSpan.addMany(100);
	myBigSpan.addNumber(50);
	// printContainer(myBigSpan.getValues());

	try
	{
		myBigSpan.addMany(8000);
	}
	catch(const std::exception& e)
	{
		std::cerr << "Exception thrown: " << e.what() << '\n';
	}

	std::cout << "\n-------------------------------------------------" << std::endl;
	std::cout << "                Testing with 10                " << std::endl;
	std::cout << "-------------------------------------------------" << std::endl;
	try
	{
		Span myMediumSpan = Span(10);
		myMediumSpan.addMany(10);
		// printContainer(myMediumSpan.getValues());
		std::cout << "successfully created!" << std::endl;
		std::cout << "shortest span: " << myMediumSpan.shortestSpan() << std::endl;
		std::cout << "longest span: " << myMediumSpan.longestSpan() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << "Exception thrown: " << e.what() << '\n';
	}

	std::cout << "\n-------------------------------------------------" << std::endl;
	std::cout << "                Testing with 100                " << std::endl;
	std::cout << "-------------------------------------------------" << std::endl;
	try
	{
		Span myMediumSpan = Span(100);
		myMediumSpan.addMany(100);
		// printContainer(myMediumSpan.getValues());
		std::cout << "successfully created!" << std::endl;
		std::cout << "shortest span: " << myMediumSpan.shortestSpan() << std::endl;
		std::cout << "longest span: " << myMediumSpan.longestSpan() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << "Exception thrown: " << e.what() << '\n';
	}

	std::cout << "\n-------------------------------------------------" << std::endl;
	std::cout << "               Testing with 100.000               " << std::endl;
	std::cout << "-------------------------------------------------" << std::endl;
	try
	{
		Span myEnormousSpan = Span(100000);
		myEnormousSpan.addMany(100000);
		std::cout << "successfully created!" << std::endl;
		std::cout << "shortest span: " << myEnormousSpan.shortestSpan() << std::endl;
		std::cout << "longest span: " << myEnormousSpan.longestSpan() << std::endl;
	// printContainer(myEnormousSpan.getValues());
	}
	catch(const std::exception& e)
	{
		std::cerr << "Exception thrown: " << e.what() << '\n';
	}
	
	std::cout << "\n-------------------------------------------------" << std::endl;
	std::cout << "  Testing with 100.000.000 (be a little patient)  " << std::endl;
	std::cout << "-------------------------------------------------" << std::endl;
	try
	{
		Span myHugeSpan = Span(100000000);
		myHugeSpan.addMany(100000000);
		std::cout << "successfully created!" << std::endl;
		std::cout << "shortest span: " << myHugeSpan.shortestSpan() << std::endl;
		std::cout << "longest span: " << myHugeSpan.longestSpan() << std::endl;
	// printContainer(myHugeSpan.getValues());

	}
	catch(const std::exception& e)
	{
		std::cerr << "Exception thrown: " << e.what() << '\n';
	}


	return 0;
}
