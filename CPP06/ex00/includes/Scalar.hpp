enum scalartypes 
{
	INT,
	FLOAT,
	DOUBLE,
	CHAR
};

class Scalar
{
public:
	Scalar(void);
	Scalar(const std::string _literal);
	Scalar(const Scalar &other);
	Scalar &operator=(const Scalar &other);
	~Scalar(void);

	std::string getIntValue(void) const;
	std::string getFloatValue(void) const;
	std::string getDoubleValue(void) const;
	std::string getCharValue(void) const;

	bool isIntLiteral(const std::string literal);
	bool isFloatLiteral(const std::string literal);
	bool isDoubleLiteral(const std::string literal);
	bool isCharLiteral(const std::string literal);

	void convertLiteral(void);
private:
	const std::string _literal;
	std::string _intValue;
	std::string _floatValue;
	std::string _doubleValue;
	std::string _charValue;
}

std::ostream &operator<<(std::ostream &os, const Scalar &scalar);
