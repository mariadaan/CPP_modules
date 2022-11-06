#include "HumanA.hpp"

void HumanA::attack(void)
{
	std::cout << this->_name;
	std::cout << " attacks with their ";
	std::cout << this->getWeapon().getType() << std::endl;
}

void HumanA::setName(std::string name)
{
	this->_name = name;
}

std::string HumanA::getName(void)
{
	return (this->_name);
}

void HumanA::setWeapon(Weapon &weapon)
{
	this->_weapon = weapon;
}

Weapon &HumanA::getWeapon(void)
{
	return (this->_weapon);
}

HumanA::HumanA(std::string name, Weapon &weapon) : _weapon(weapon)
{
	std::cout << "Construct human A: " << name << std::endl;
	setName(name);
	setWeapon(weapon);
	return;
}

HumanA::~HumanA(void)
{
	std::cout << "Destruct human A: " << _name << std::endl;
	return;
}
