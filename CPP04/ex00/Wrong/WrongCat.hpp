#ifndef Wrongcat_HPP
#define Wrongcat_HPP

#include <iostream>
#include "Animal.hpp"

class Wrongcat : public Animal
{
public:
	Wrongcat(void);
	Wrongcat(Wrongcat &animal);
	~Wrongcat(void);

	void makeSound(void) const;
};

#endif
