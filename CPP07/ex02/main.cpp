#include "Array.hpp"

int main(void)
{
	std::cout << "\n-------------------------------------------------" << std::endl;
	std::cout << "            Testing with empty array            " << std::endl;
	std::cout << "-------------------------------------------------" << std::endl;

	Array<int> myEmptyIntArray;
	try
	{
		myEmptyIntArray[1];
	}
	catch(const std::exception& e)
	{
		std::cerr << "Exception thrown: " << e.what() << '\n';
	}
	Array<char> myEmptyCharArray;
	try
	{
		myEmptyCharArray[3];
	}
	catch(const std::exception& e)
	{
		std::cerr << "Exception thrown: " << e.what() << '\n';
	}

	std::cout << "\n-------------------------------------------------" << std::endl;
	std::cout << "             Testing with int array             " << std::endl;
	std::cout << "-------------------------------------------------" << std::endl;

	Array<int> myIntArray(8);
	myIntArray[3] = 180;
	std::cout << "size: " << myIntArray.size() << std::endl;
	std::cout << "array[3]: " << myIntArray[3] << std::endl;
	try
	{
		myIntArray[9];
	}
	catch(const std::exception& e)
	{
		std::cerr << "Exception thrown: " << e.what() << '\n';
	}

	std::cout << "\n-------------------------------------------------" << std::endl;
	std::cout << "            Testing with char array            " << std::endl;
	std::cout << "-------------------------------------------------" << std::endl;

	Array<char> myCharArray(300);
	try
	{
		myCharArray[-1];
	}
	catch(const std::exception& e)
	{
		std::cerr << "Exception thrown: " << e.what() << '\n';
	}
	try
	{
		myCharArray[250] = 'w';
		std::cout << "size: " << myCharArray.size() << std::endl;
		std::cout << "array[250]: " << myCharArray[250] << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << "Exception thrown: " << e.what() << '\n';
	}

	std::cout << "\n-------------------------------------------------" << std::endl;
	std::cout << "            Testing with char* array            " << std::endl;
	std::cout << "-------------------------------------------------" << std::endl;

	Array<const char *> myStringArray(20);
	try
	{
		std::string myString = "Nou dat was hem weer!";
		myStringArray[10] = myString.c_str();
		std::cout << "size: " << myStringArray.size() << std::endl;
		std::cout << "array[10]: " << myStringArray[10] << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << "Exception thrown: " << e.what() << '\n';
	}

	std::cout << "\n-------------------------------------------------" << std::endl;
	std::cout << "                Testing deep copy                " << std::endl;
	std::cout << "-------------------------------------------------" << std::endl;

	Array<int> myIntArrayCopy(myIntArray);
	Array<int> myIntArrayCopy2 = myIntArray;
	try
	{
		myIntArrayCopy[3] = 5000;
		std::cout << "size: " << myIntArrayCopy.size() << std::endl;
		std::cout << "  copied array[3]: " << myIntArrayCopy[3] << std::endl;
		std::cout << "  copied array[3]: " << myIntArrayCopy2[3] << std::endl;
		std::cout << "original array[3]: " << myIntArray[3] << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << "Exception thrown: " << e.what() << '\n';
	}

	return 0;
}
