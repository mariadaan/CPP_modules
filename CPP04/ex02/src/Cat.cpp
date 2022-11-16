#include "Cat.hpp"

/* Default constructor */
Cat::Cat(void) : Animal("Cat")
{
	std::cout << "Cat constructed" << std::endl;
	this->_brain = new Brain();
}

/* Copy constructor */
Cat::Cat(Cat &cat) : Animal(cat)
{
	std::cout << "Cat copy constructor called" << std::endl;
	*this = cat;
}

/* Copy assignment constructor */
Cat &Cat::operator=( const Cat &cat )
{
	std::cout << "Cat copy assignment called" << std::endl;
	this->_type = cat._type;
	this->_brain = new Brain(*cat._brain);
	return (*this);
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

Brain *Cat::getBrain(void) const
{
	return this->_brain;
}
