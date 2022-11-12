#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <iostream>
#include "Animal.hpp"

class Brain
{
public:
	Brain(void);
	Brain(Brain &brain);
	Brain &operator=(Brain &brain);
	virtual ~Brain(void);

private:
	std::string _ideas[100];
};

#endif
