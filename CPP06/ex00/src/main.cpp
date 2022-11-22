#include "Scalar.hpp"

int main(void)
{
	Scalar test1("-15.02f");
	std::cout << test1;

	Scalar test2("15.0082f");
	std::cout << test2;

	Scalar test3("48.089237");
	std::cout << test3;

	Scalar test4("42");
	std::cout << test4;

	Scalar test5("f");
	std::cout << test5;

	Scalar test6("nan");
	std::cout << test6;

	Scalar test7("-inff");
	std::cout << test7;
	
	Scalar test8("+inff");
	std::cout << test8;

	Scalar test9("nanf");
	std::cout << test9;

	Scalar test10("-inf");
	std::cout << test10;

	Scalar test11("+inf");
	std::cout << test11;

	Scalar test12("42.0");
	std::cout << test12;
}
