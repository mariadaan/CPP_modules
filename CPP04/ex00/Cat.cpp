#include "Cat.hpp"

/* Default constructor */
Cat::Cat(void)
{
	this->_type = "Cat";
	std::cout << "Cat constructed" << std::endl;
}

/* Copy constructor */
Cat::Cat(Cat &cat)
{
	std::cout << "Cat copy constructor called" << std::endl;
	*this = cat;
}

/* Destructor */
Cat::~Cat(void)
{
	std::cout << "Cat destructed: " << this->_type << std::endl;
}

void Cat::makeSound(void) const
{
	std::cout << "MIAUW" << std::endl;
}
