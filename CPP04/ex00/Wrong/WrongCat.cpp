#include "WrongCat.hpp"

/* Default constructor */
WrongCat::WrongCat(void)
{
	this->_type = "WrongCat";
	std::cout << "WrongCat constructed" << std::endl;
}

/* Copy constructor */
WrongCat::WrongCat(WrongCat &animal)
{
	std::cout << "WrongCat copy constructor called" << std::endl;
	*this = animal;
}

/* Destructor */
WrongCat::~WrongCat(void)
{
	std::cout << "WrongCat destructed: " << this->_type << std::endl;
}

void WrongCat::makeSound(void) const
{
	std::cout << "MIAUW" << std::endl;
}
