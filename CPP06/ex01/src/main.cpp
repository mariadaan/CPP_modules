#include "Data.hpp"

int main(void)
{
	Data originalData;
	Data *serializedData;
	uintptr_t ptr;

	originalData.value = 42;
	std::cout << "originalData address:	" << &originalData << std::endl;
	ptr = serialize(&originalData);
	std::cout << "ptr address:		" << &ptr << std::endl;
	serializedData = deserialize(ptr);
	std::cout << "serializedData address:	" << serializedData << std::endl;
	std::cout << "serializedData value:	" << serializedData->value << std::endl;
}
