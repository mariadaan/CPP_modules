#include "Weapon.hpp"

const std::string &Weapon::getType(void)
{
	return (this->_type);
}

void Weapon::setType(std::string type)
{
	this->_type = type;
}

Weapon::Weapon(std::string type)
{
	setType(type);
	std::cout << "Construct weapon" << std::endl;
	return;
}

Weapon::~Weapon(void)
{
	std::cout << "Destruct weapon" << std::endl;
	return;
}
