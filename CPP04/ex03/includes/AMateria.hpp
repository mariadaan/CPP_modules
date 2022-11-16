#ifndef AMATERIA_HPP
#define AMATERIA_HPP

#include <iostream>

class AMateria
{
public:
	AMateria(void);
	AMateria(std::string const &type);
	AMateria(const AMateria &other);
	AMateria &operator=(const AMateria &other);
	virtual ~AMateria(void);
	// [...]
	std::string const &getType() const;	  // Returns the materia type
	virtual AMateria *clone() const = 0;  // will return a new instance of the same type (i.e., if you clone an Ice Materia, you will get a new Ice Materia).
	virtual void use(ICharacter &target); // will display: • Ice: "* shoots an ice bolt at <name> *" • Cure: "* heals <name>’s wounds *" name is name of character

	// moeten deze hier??
	virtual void equip(AMateria *m);
	virtual void unequip(int idx);

protected:
	std::string _type;
	// [...]
};

#endif
