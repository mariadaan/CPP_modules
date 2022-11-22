#include "Scalar.hpp"

Scalar::Scalar() : _literal(""), _scalarType(-1) {}

Scalar::Scalar(std::string literal) : _literal(literal), _scalarType(detectType(literal))
{
	// this->_scalarType = detectType(this->_literal)
	this->convertLiteral();
}

Scalar::Scalar(const Scalar &other) : _literal(other._literal), _scalarType(other._scalarType)
{
	*this = other;
}

Scalar	&Scalar::operator=(const Scalar &other)
{
	this->_intValue = other.getIntValue();
	this->_floatValue = other.getFloatValue();
	this->_doubleValue = other.getDoubleValue();
	this->_charValue = other.getCharValue();
	return (*this);
}

Scalar::~Scalar() {}

std::string Scalar::getLiteral(void) const
{
	return this->_literal;
}

int Scalar::getScalarType(void) const
{
	return this->_scalarType;
}

int Scalar::getIntValue(void) const
{
	return this->_intValue;
}
float Scalar::getFloatValue(void) const
{
	return this->_floatValue;
}
double Scalar::getDoubleValue(void) const
{
	return this->_doubleValue;
}
char Scalar::getCharValue(void) const
{
	return this->_charValue;
}

/* check special values and whether i should have actual types in 
attributes or keep it all strings */
void Scalar::convertLiteral(void)
{
	switch (this->_scalarType)
	{
	case INT:
	{
		this->_intValue = std::atoi(this->_literal.c_str());
		this->_floatValue = static_cast<float>(this->_intValue);
		this->_doubleValue = static_cast<double>(this->_intValue);
		this->_charValue = static_cast<char>(this->_intValue);
		break;
	}
	case FLOAT:
	{
		if (this->_literal == "inff")
			this->_floatValue = std::numeric_limits<float>::infinity();
		// else if (this->_literal == "-inff")

		// else if (this->_literal == "nanf")
		else
			this->_floatValue = atof(this->_literal);
		
		this->_intValue = static_cast<int>(this->_floatValue);
		this->_doubleValue = static_cast<double>(this->_floatValue);
		this->_charValue = static_cast<char>(this->_intValue);
		break;
	}
	case DOUBLE:
	{
		this->_doubleValue = atod(this->_literal);
		// if nan
		this->_intValue = static_cast<int>(this->_doubleValue);
		this->_floatValue = static_cast<float>(this->_doubleValue);
		this->_charValue = static_cast<char>(this->_intValue);
		break;
	}
	case CHAR:
	{
		this->_charValue = atoc(this->_literal);
		this->_intValue = static_cast<int>(this->_charValue);
		this->_floatValue = static_cast<float>(this->_intValue);
		this->_doubleValue = static_cast<double>(this->_intValue);
		break;
	}
	default:
		break;
	}
	
}

std::ostream &operator<<(std::ostream &os, const Scalar &scalar)
{
	os << "literal: " << scalar.getLiteral();
	os << "\nscalartype: " << scalar.getScalarType();

	// print char
	os << "\nchar: ";
	if (scalar.getCharValue() == -1)
		os << "impossible";
	else if (!isprint(scalar.getCharValue()))
		os << "Non displayable";
	else
		os << "\'" << scalar.getCharValue() << "\'";

	// print int
	os << "\nint: " << scalar.getIntValue();

	// print float
	os << "\nfloat: " ;
	if (scalar.getScalarType() == FLOAT)
		os << scalar.getLiteral();
	else if (scalar.getScalarType() == DOUBLE)
		os << (scalar.getLiteral()) << "f";
	else
	{
		os << scalar.getFloatValue();
		if (scalar.getScalarType() == INT || scalar.getScalarType() == CHAR)
			os << ".0";
		os << "f";
	}

	// print double
	os << "\ndouble: ";
	if (scalar.getScalarType() == DOUBLE)
		os << scalar.getLiteral();
	else if (scalar.getScalarType() == FLOAT)
	{
		std::string to_print = scalar.getLiteral();
		to_print.pop_back();
		os << to_print;
	}
	else
		os << scalar.getDoubleValue();
	if (scalar.getScalarType() == INT || scalar.getScalarType() == CHAR)
		os << ".0";
	os << "\n\n";
	return os;
}

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

const std::string itoa(int num)
{
	std::ostringstream s;
	s << num;
	const std::string int_as_string(s.str());
	return (int_as_string);
}

float atof(std::string str)
{
	float floatValue;
	if (str.back() == 'f')
		str.pop_back(); // remove 'f' from string
	std::stringstream ss;
	ss << str;
	ss >> floatValue;
	return (floatValue);
}

double atod(std::string str)
{
	double doubleValue;
	std::stringstream ss;
	ss << str;
	ss >> doubleValue;
	return (doubleValue);
}

char atoc(std::string str)
{
	char charValue;
	std::stringstream ss;
	ss << str;
	ss >> charValue;
	return (charValue);
}

bool isIntLiteral(const std::string literal)
{
	int intValue = std::atoi(literal.c_str());
	const std::string toCompare = itoa(intValue);
	if (literal != toCompare)
		return false;
	return true;
}

bool isFloatLiteral(const std::string literal)
{
	// (-inff or +inff or nanf)
	if (literal == "-inff"
		|| literal == "+inff"
		|| literal == "nanf")
		return true;
	if (!charSet(literal, "-.f")
		|| literal.back() != 'f'
		|| literal.find(".") == std::string::npos)
		return false;
	return true;
}

bool isDoubleLiteral(const std::string literal)
{
	// (-inf or +inf or nan)
	if (literal == "-inf"
		|| literal == "+inf"
		|| literal == "nan")
		return true;
	if (!charSet(literal, "-.")
		|| literal.find(".") == std::string::npos)
		return false;
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

int detectType(const std::string literal)
{
	if (isIntLiteral(literal))
		return INT;
	else if (isFloatLiteral(literal))
		return FLOAT;
	else if (isDoubleLiteral(literal))
		return DOUBLE;
	else if (isCharLiteral(literal))
		return CHAR;
	return (-1);
}
