#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include <iostream>
#include "ICharacter.hpp"
#include "AMateria.hpp"


/* pure abstract class */

class Character : public ICharacter
{
public:
	Character(void);
	Character(std::string name);
	Character(Character &other); // During copy, the Materias of a Character must be deleted before the new ones are added to their inventory. 
	Character &operator=(const Character &other); 
	virtual ~Character() {} // the Materias must be deleted when a Character is destroyed.

	std::string const &getName() const;
	AMateria *getInventory() const;
	void equip(AMateria *m); // equip the Materias in the first empty slot they find.
	void unequip(int idx); // NOT delete the materia, but remove from inventory
	void use(int idx, ICharacter &target); // use the Materia at the slot[idx], and pass the target parameter to the AMateria::use function.

private:
	std::string _name; // const ?
	AMateria *_inventory[4]; // inventory of 4 slots, support any type of AMateria
};

#endif
