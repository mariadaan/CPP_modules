#include "AMateria.hpp"
#include "Character.hpp"
#include "ICharacter.hpp"


Character::Character(void)
{
	;
}

Character::Character(std::string name) : _name(name)
{
	;
}

Character::Character(Character &other)
{
	*this = other;
} // During copy, the Materias of a Character must be deleted before the new ones are added to their inventory. 

Character::Character &operator=(const Character &other)
{
	this->_name = other.getName();
	this->_inventory = other.getInventory(); // copy contents
}

virtual Character::~Character()
{
	;
} // the Materias must be deleted when a Character is destroyed.

std::string const &Character::getName() const
{
	return this->_name;
}

AMateria *Character::getInventory() const
{
	;
}

void Character::equip(AMateria *m)
{
	;
} // equip the Materias in the first empty slot they find.

void Character::unequip(int idx)
{
	;
} // NOT delete the materia, but remove from inventory

void Character::use(int idx, ICharacter &target)
{
	;
} // use the Materia at the slot[idx], and pass the target parameter to the AMateria::use function.
