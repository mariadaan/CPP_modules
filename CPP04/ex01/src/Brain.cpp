#include "Brain.hpp"

/* Default constructor */
Brain::Brain(void)
{
	std::cout << "Brain constructed" << std::endl;
}

/* Copy constructor */
Brain::Brain(Brain &brain)
{
	std::cout << "Brain copy constructor called" << std::endl;
	*this = brain;
}

/* Copy assignment constructor */
Brain &Brain::operator=(Brain &brain)
{
	std::cout << "Brain copy assignment operator copied " << std::endl;
	// copy all values
	return brain;
}

/* Destructor */
Brain::~Brain(void)
{
	std::cout << "Brain destructed: " << std::endl;
}
