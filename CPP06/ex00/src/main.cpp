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
	
	Scalar test13("239044345672389.0");
	std::cout << test13;

	Scalar test14("239044345672389.02489744894");
	std::cout << test14;

	Scalar test15("23904434567238902489");
	std::cout << test15;

	Scalar test16("87658844636342356457457567563839443456723.0344");
	std::cout << test16;

	Scalar test17("42.0f");
	std::cout << test17;

	Scalar test18("42.0457f");
	std::cout << test18;

	Scalar test19("7460457");
	std::cout << test19;

}
