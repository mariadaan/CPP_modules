#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <iostream>

#define NUM_IDEAS 100

class Brain
{
public:
	Brain(void);
	Brain(Brain &brain);
	Brain &operator=(Brain &brain);
	virtual ~Brain(void);

	std::string _ideas[NUM_IDEAS];
};

#endif
