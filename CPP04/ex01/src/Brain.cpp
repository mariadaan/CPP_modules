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
	for (int i = 0; i < NUM_IDEAS; i++)
	{
		this->_ideas[i] = brain._ideas[i];
	}
	// copy all values
	return *this;
}

/* Destructor */
Brain::~Brain(void)
{
	std::cout << "Brain destructed" << std::endl;
}
