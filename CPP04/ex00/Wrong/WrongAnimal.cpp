#include "WrongAnimal.hpp"

/* Default constructor */
WrongAnimal::WrongAnimal(void)
{
	this->_type = "WrongAnimal base";
	std::cout << "WrongAnimal constructed" << std::endl;
}

/* Copy constructor */
WrongAnimal::WrongAnimal(WrongAnimal &animal)
{
	std::cout << "WrongAnimal copy constructor called" << std::endl;
	*this = animal;
}

/* Copy assignment constructor */
WrongAnimal &WrongAnimal::operator=(WrongAnimal &animal)
{
	std::cout << "WrongAnimal copy assignment operator copied " << animal.getType() << std::endl;
	// copy all values
	return animal;
}

/* Destructor */
WrongAnimal::~WrongAnimal(void)
{
	std::cout << "WrongAnimal destructed: " << this->_type << std::endl;
}

std::string WrongAnimal::getType(void) const
{
	return (this->_type);
}

void WrongAnimal::makeSound(void) const
{
	std::cout << "....." << std::endl;
}
