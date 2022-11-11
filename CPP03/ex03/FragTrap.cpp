#include "FragTrap.hpp"

/* Default constructor */
FragTrap::FragTrap(void)
{
	std::cout << "FragTrap default constructed: " << std::endl;
	this->_name = "";
	this->_hitPoints = 100;
	this->_energyPoints = 100;
	this->_attackDamage = 30;
}

/* Constructor */
FragTrap::FragTrap(std::string name)
{
	std::cout << "FragTrap constructed: " << name << std::endl;
	this->_name = name;
	this->_hitPoints = 100;
	this->_energyPoints = 100;
	this->_attackDamage = 30;
}

/* Copy constructor */
FragTrap::FragTrap(FragTrap &fragTrapper) : ClapTrap(fragTrapper)
{
	std::cout << "FragTrap copy constructor called" << std::endl;
	*this = fragTrapper;
}

/* Copy assignment constructor */
FragTrap &FragTrap::operator=(FragTrap &fragTrapper)
{
	std::cout << "FragTrap copy assignment operator copied " << fragTrapper.getName() << std::endl;
	this->_name = fragTrapper.getName();
	this->_hitPoints = fragTrapper.getHitPoints();
	this->_energyPoints = fragTrapper.getEnergyPoints();
	this->_attackDamage = fragTrapper.getAttackDamage();
	return fragTrapper;
}

/* Destructor */
FragTrap::~FragTrap(void)
{
	std::cout << "FragTrap destructed: " << this->_name << std::endl;
}

/*
	target: (happens in takedamage)
	- loses attackDamage amount hitPoints (hitPoints - attackDamage)

	FragTrap (this):
	- loses 1 energy point
*/
void FragTrap::attack(const std::string &target)
{
	if (this->_energyPoints > 0)
	{
		std::cout << "Fragtrap " << this->_name << " attacks " << target;
		std::cout << ", causing " << this->_attackDamage << " points of damage.\n";
		this->_energyPoints--;
	}
	else
	{
		std::cout << "Fragtrap " << this->_name << " does not have enough energy points to attack";
	}
}

void FragTrap::highFivesGuys(void)
{
	std::cout << this->_name << " gives a high five!" << std::endl;
}
