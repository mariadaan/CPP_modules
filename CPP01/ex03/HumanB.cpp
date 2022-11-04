#include "HumanB.hpp"

void HumanB::attack(void)
{
	std::cout << this->_name;
	std::cout << " attacks with their ";
	std::cout << this->getWeapon().getType() << std::endl;
}

void HumanB::setName(std::string name)
{
	this->_name = name;
}

std::string HumanB::getName(void)
{
	return (this->_name);
}

void HumanB::setWeapon(Weapon &weapon)
{
	this->_weapon = &weapon;
	weapon.setType("gun");
}

Weapon &HumanB::getWeapon(void)
{
	return *(this->_weapon);
}

HumanB::HumanB(void)
{
	std::cout << "Construct human B" << std::endl;
	return;
}

HumanB::~HumanB(void)
{
	std::cout << "Destruct human B" << std::endl;
	std::cout << _name << " is destroyed." << std::endl;
	return;
}
