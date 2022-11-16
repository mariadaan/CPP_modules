#ifndef ICE_HPP
#define ICE_HPP

#include <iostream>
#include "AMateria.hpp"

class Ice : public AMateria
{
public:
	Ice(void);
	Ice(std::string name);
	Ice(Ice &other);
	Ice &operator=(const Ice &other);
	~Ice(void);

	AMateria *clone() const;
	void use(ICharacter &target);
};

#endif
