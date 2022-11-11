#include "ClapTrap.hpp"

/* Default constructor */
ClapTrap::ClapTrap(void)
{
	std::cout << "ClapTrap default constructed: " << std::endl;
	this->_name = "";
	this->_hitPoints = 10;
	this->_energyPoints = 10;
	this->_attackDamage = 0;
}

/* Constructor */
ClapTrap::ClapTrap(std::string name)
{
	std::cout << "ClapTrap constructed: " << name << std::endl;
	this->_name = name;
	this->_hitPoints = 10;
	this->_energyPoints = 10;
	this->_attackDamage = 0;
}

/* Copy constructor */
ClapTrap::ClapTrap(ClapTrap &clapTrapper)
{
	std::cout << "ClapTrap copy constructor copied: " << this->_name << std::endl;
	*this = clapTrapper;
}

/* Copy assignment constructor */
ClapTrap &ClapTrap::operator=(ClapTrap &clapTrapper)
{
	std::cout << "ClapTrap copy assignment operator copied " << clapTrapper.getName() << std::endl;
	this->_name = clapTrapper.getName();
	this->_hitPoints = clapTrapper.getHitPoints();
	this->_energyPoints = clapTrapper.getEnergyPoints();
	this->_attackDamage = clapTrapper.getAttackDamage();
	return clapTrapper;
}

/* Destructor */
ClapTrap::~ClapTrap(void)
{
	std::cout << "ClapTrap destructed: " << this->_name << std::endl;
}

/*
	target: (happens in takedamage)
	- loses attackDamage amount hitPoints (hitPoints - attackDamage)

	ClapTrap (this):
	- loses 1 energy point
*/
void	ClapTrap::attack(const std::string &target)
{
	if (this->_energyPoints > 0)
	{
		std::cout << "Claptrap " << this->_name << " attacks " << target;
		std::cout << ", causing " << this->_attackDamage << " points of damage.\n";
		this->_energyPoints--;
	}
	else
	{
		std::cout << "Claptrap " << this->_name << " does not have enough energy points to attack";
	}
}

/*
	- loses attackDamage amount hitPoints (hitPoints - attackDamage)
*/
void	ClapTrap::takeDamage(unsigned int amount)
{
	if (amount > this->_hitPoints)
		amount = this->_hitPoints;
	this->_hitPoints -= amount;
	std::cout << "Claptrap " << this->_name << " takes damage, loses ";
	std::cout << amount << " hitpoints." << std::endl;
}

/*
	ClapTrap repairs itself
	- gains <amount> hitpoints back
	- loses 1 energy point
*/
void	ClapTrap::beRepaired(unsigned int amount)
{

	std::cout << "Claptrap " << this->_name << " repairs itself, gains ";
	std::cout << amount << " hitpoints, loses 1 energy point." << std::endl;
	this->_hitPoints += amount;
	this->_energyPoints--;
}


std::string ClapTrap::getName(void)
{
	return (this->_name);
}

unsigned int ClapTrap::getHitPoints(void)
{
	return (this->_hitPoints);
}

unsigned int ClapTrap::getEnergyPoints(void)
{
	return (this->_energyPoints);
}

unsigned int ClapTrap::getAttackDamage(void)
{
	return (this->_attackDamage);
}
