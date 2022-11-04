#include "Zombie.hpp"


std::string Zombie::getName(void)
{
	return (this->_name);
}

void Zombie::setName(std::string name)
{
	this->_name = name;
}

void Zombie::announce(void)
{
	std::cout << _name;
	std::cout << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie::Zombie(void)
{
	return;
}

Zombie::~Zombie(void)
{
	std::cout << _name << " is destroyed." << std::endl;
	return;
}
