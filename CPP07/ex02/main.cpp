// #include "Array.hpp"

// int main(void)
// {
// 	Array<int> *nameArray = new Array<int>(3);
// 	(*nameArray)[0] = 8;
// 	std::cout << (*nameArray)[0] << std::endl;
// 	// delete nameArray;

// 	std::cout << "\n-------------------------------------------------" << std::endl;
// 	std::cout << "            Testing with empty array            " << std::endl;
// 	std::cout << "-------------------------------------------------" << std::endl;

// 	Array<int> myEmptyIntArray;
// 	try
// 	{
// 		myEmptyIntArray[1];
// 	}
// 	catch(const std::exception& e)
// 	{
// 		std::cerr << "Exception thrown: " << e.what() << '\n';
// 	}
// 	Array<char> myEmptyCharArray;
// 	try
// 	{
// 		myEmptyCharArray[3];
// 	}
// 	catch(const std::exception& e)
// 	{
// 		std::cerr << "Exception thrown: " << e.what() << '\n';
// 	}

// 	std::cout << "\n-------------------------------------------------" << std::endl;
// 	std::cout << "             Testing with int array             " << std::endl;
// 	std::cout << "-------------------------------------------------" << std::endl;

// 	Array<int> myIntArray(8);
// 	myIntArray[3] = 180;
// 	std::cout << "size: " << myIntArray.size() << std::endl;
// 	std::cout << "array[3]: " << myIntArray[3] << std::endl;
// 	try
// 	{
// 		myIntArray[9];
// 	}
// 	catch(const std::exception& e)
// 	{
// 		std::cerr << "Exception thrown: " << e.what() << '\n';
// 	}

// 	std::cout << "\n-------------------------------------------------" << std::endl;
// 	std::cout << "            Testing with char array            " << std::endl;
// 	std::cout << "-------------------------------------------------" << std::endl;

// 	Array<char> myCharArray(300);
// 	try
// 	{
// 		myCharArray[-1];
// 	}
// 	catch(const std::exception& e)
// 	{
// 		std::cerr << "Exception thrown: " << e.what() << '\n';
// 	}
// 	try
// 	{
// 		myCharArray[250] = 'w';
// 		std::cout << "size: " << myCharArray.size() << std::endl;
// 		std::cout << "array[250]: " << myCharArray[250] << std::endl;
// 	}
// 	catch(const std::exception& e)
// 	{
// 		std::cerr << "Exception thrown: " << e.what() << '\n';
// 	}

// 	std::cout << "\n-------------------------------------------------" << std::endl;
// 	std::cout << "            Testing with char* array            " << std::endl;
// 	std::cout << "-------------------------------------------------" << std::endl;

// 	Array<const char *> myStringArray(20);
// 	try
// 	{
// 		std::string myString = "Nou dat was hem weer!";
// 		myStringArray[10] = myString.c_str();
// 		std::cout << "size: " << myStringArray.size() << std::endl;
// 		std::cout << "array[10]: " << myStringArray[10] << std::endl;
// 	}
// 	catch(const std::exception& e)
// 	{
// 		std::cerr << "Exception thrown: " << e.what() << '\n';
// 	}

// 	std::cout << "\n-------------------------------------------------" << std::endl;
// 	std::cout << "                Testing deep copy                " << std::endl;
// 	std::cout << "-------------------------------------------------" << std::endl;

// 	Array<int> myIntArrayCopy(myIntArray);
// 	Array<int> myIntArrayCopy2 = myIntArray;
// 	try
// 	{
// 		myIntArrayCopy[3] = 5000;
// 		std::cout << "size: " << myIntArrayCopy.size() << std::endl;
// 		std::cout << "  copied array[3]: " << myIntArrayCopy[3] << std::endl;
// 		std::cout << "  copied array[3]: " << myIntArrayCopy2[3] << std::endl;
// 		std::cout << "original array[3]: " << myIntArray[3] << std::endl;
// 	}
// 	catch(const std::exception& e)
// 	{
// 		std::cerr << "Exception thrown: " << e.what() << '\n';
// 	}

// 	return 0;
// }

#include <iostream>
#include "Array.hpp"

#define MAX_VAL 750
int main(int, char**)
{
    Array<int> numbers(MAX_VAL);
    int* mirror = new int[MAX_VAL];
    srand(time(NULL));
    for (int i = 0; i < MAX_VAL; i++)
    {
        const int value = rand();
        numbers[i] = value;
        mirror[i] = value;
    }
    //SCOPE
    {
        Array<int> tmp = numbers;
        Array<int> test(tmp);
    }

    for (int i = 0; i < MAX_VAL; i++)
    {
        if (mirror[i] != numbers[i])
        {
            std::cerr << "didn't save the same value!!" << std::endl;
            return 1;
        }
    }
    try
    {
        numbers[-2] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    try
    {
        numbers[MAX_VAL] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

    for (int i = 0; i < MAX_VAL; i++)
    {
        numbers[i] = rand();
    }
    delete [] mirror;//
    return 0;
}