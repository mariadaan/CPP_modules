#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <iostream>
#include "Animal.hpp"

#define NUM_IDEAS 100

class Brain
{
public:
	Brain(void);
	Brain(Brain &brain);
	Brain &operator=(Brain &brain);
	virtual ~Brain(void);

private:
	std::string _ideas[NUM_IDEAS];
};

#endif
