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


/* use switch statement to convert to the other types */
void convertLiteral(void)
{
	if (this->isIntLiteral(this->_literal))
	{
		this->_intValue = this->_literal;
	}

}