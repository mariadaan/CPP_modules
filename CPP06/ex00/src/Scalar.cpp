#include "Scalar.hpp"

Scalar::Scalar() : _literal("") {}

Scalar::Scalar(std::string literal) : _literal(literal)
{
	this->convertLiteral();
}

Scalar::Scalar(const Scalar &other) : _literal(other.literal)
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

std::string Scalar::getIntValue(void) const
{
	return this->_intValue;
}
std::string Scalar::getFloatValue(void) const
{
	return this->_floatValue;
}
std::string Scalar::getDoubleValue(void) const
{
	return this->_doubleValue;
}
std::string Scalar::getCharValue(void) const
{
	return this->_charValue;
}

std::ostream &operator<<(std::ostream &os, const Scalar &scalar)
{
	os << "char: " << scalar.getCharValue();
	os << "\nint: " << scalar.getIntValue();
	os << "\nfloat: " << scalar.getFloatValue();
	os << "\ndouble: " << scalar.getDoubleValue() << "\n";
	return os;
}

/* check special values and whether i should have actual types in 
attributes or keep it all strings */
void convertLiteral(void)
{
	switch (detectType(this->_literal))
	{
	case INT:
	{
		this->_intValue = this->_literal;
		int value = std::atoi(this->_literal.c_str());
		float asFloat = static_cast<float>(value);
		double asDouble = static_cast<double>(value);
		if (isprint(value))
			char asChar = static_cast<char>(value);
		else
			this->_charValue = "Non displayable";
		break;
	}
	case FLOAT:
	{
		break;
	}
	case DOUBLE:
	{
		break;
	}
	case CHAR:
	{
		break;
	}
	default:
		break;
	}
	
}