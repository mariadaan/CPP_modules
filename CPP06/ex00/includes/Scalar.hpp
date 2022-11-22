#include <iostream>
#include <sstream>

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

	std::string getLiteral(void) const;
	int getScalarType(void) const;
	int		getIntValue(void) const;
	float	getFloatValue(void) const;
	double	getDoubleValue(void) const;
	char	getCharValue(void) const;

	void	convertLiteral(void);
private:
	const std::string _literal;
	const int	_scalarType;
	int			_intValue;
	float		_floatValue;
	double		_doubleValue;
	char		_charValue;
};

std::ostream &operator<<(std::ostream &os, const Scalar &scalar);

int detectType(const std::string literal);
bool isIntLiteral(const std::string literal);
bool isFloatLiteral(const std::string literal);
bool isDoubleLiteral(const std::string literal);
bool isCharLiteral(const std::string literal);


/* utils */
const std::string itoa(int num);
float atof(std::string str);
double atod(std::string str);
char atoc(std::string str);
