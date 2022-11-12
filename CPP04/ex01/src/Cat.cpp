#include "Cat.hpp"

/* Default constructor */
Cat::Cat(void)
{
	this->_type = "Cat";
	this->_brain = new Brain();
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
	delete this->_brain;
	std::cout << "Cat destructed: " << this->_type << std::endl;
}

void Cat::makeSound(void) const
{
	std::cout << "MIAUW" << std::endl;
}
