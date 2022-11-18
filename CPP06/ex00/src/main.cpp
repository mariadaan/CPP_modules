#include <sstream>
// #include <string>

#include <stdlib.h>

#include <iostream>
#include "convert.hpp"

bool isNumber(const std::string str)
{
	for (size_t i = 0; i < str.length(); i++)
	{
		if (std::isdigit(str[i]) == 0)
			return false;
	}
	return true;
}

/* check whether str consists only chars from the charSet and digits*/
bool charSet(const std::string str, const std::string charSet)
{
	for (size_t i = 0; i < str.length(); i++)
	{
		if (charSet.find(str[i]) == std::string::npos && !std::isdigit(str[i]))
			return false;
	}
	return true;
}

bool isCharLiteral(const std::string literal)
{
	if (literal.length() != 1)
		return false;
	for (size_t i = 0; i < literal.length(); i++)
	{
		if (!isprint(literal[i]))
			return false;
	}
	return true;
}

const std::string itoa(int num)
{
	std::ostringstream s;
	s << num;
	const std::string int_as_string(s.str());
	return (int_as_string);
}

bool isIntLiteral(const std::string literal)
{
	int intValue = std::atoi(literal.c_str());
	// std::cout << "intValue: " << intValue << "\n";
	const std::string toCompare = itoa(intValue);
	// std::cout << "toCompare: " << toCompare << "\n";
	if (literal != toCompare)
		return false;
	// std::cout << "is int value\n";
	return true;
}

bool isFloatLiteral(const std::string literal)
{
	std::cout << "literal: " << literal << "\n";
	if (!charSet(literal, "-.f")
		|| literal.back() != 'f'
		|| literal.find(".") == std::string::npos)
		return false;
	std::cout << "is float value\n";
}

int detectType(const std::string literal)
{
	/*
	int:
	only digits or '-'
	*/
	if (isIntLiteral(literal))
		return INT;
	else if (isFloatLiteral(literal))
		return FLOAT;
	/*
	float:      
	(-inff or +inff or nanf)
	len > 1
	last char is 'f'
	without the f, same as double
	*/

	/*
	double:
	(-inf or +inf or nan)
	only digits, '-', or '.'
	*/
	isNumber("500");
	int intnum = std::atoi("-50.0");
	std::cout << intnum << std::endl;
	/*
	char: 
	len = 1
	printable ascii
	*/
	std::cout << isCharLiteral("7") << std::endl;

}

void convertAll(const std::string literal)
{
	int type;
	std::cout << literal << std::endl;
	type = detectType(literal);
}

int main(int argc, char **argv)
{
	std::cout << .45f << std::endl;
	if (argc != 2)
		return (1);
	try
	{
		convertAll(argv[1]);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}
