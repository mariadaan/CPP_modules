#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP

#include <iostream>
#include "IMateriaSource.hpp"
#include "AMateria.hpp"

class MateriaSource : public IMateriaSource
{
public:
	MateriaSource(void);
	MateriaSource(MateriaSource &other);
	MateriaSource &operator=(const MateriaSource &other); 
	virtual ~MateriaSource();

	void learnMateria(AMateria*);
	AMateria* createMateria(std::string const & type);

private:
	AMateria *_memory[4]; // memory of 4 Materias
};

#endif
