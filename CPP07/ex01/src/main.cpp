#include "iter.hpp"

int main(void)
{
	/* test with int array */
	int int_array [] = { 16, 2, 77, 40, 12071 };
	iter(int_array, 5, &increase);
	iter(int_array, 5, &printElemSep);
	std::cout << std::endl;

	/* test with char array */
	char char_array [] = "EJU!JT!FFO!HFIFJNF!CPPETDIBQ\"";
	iter(char_array, 29, &decrease);
	iter(char_array, 29, &printElem);
	std::cout << std::endl;

	/* test with float array */
	float float_array [] = { 16.8f, 2.203f, 77.0002, 40.12f, 1.2071f };
	iter(float_array, 5, &increase);
	iter(float_array, 5, &printElemSep);
	std::cout << std::endl;

	return 0;
}
