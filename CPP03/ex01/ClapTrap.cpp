#include "ClapTrap.hpp"

/* Constructor */
ClapTrap::ClapTrap(std::string name)
{
	std::cout << "Default constructor called" << std::endl;
	this->_name = name;
	this->_hitPoints = 10;
	this->_energyPoints = 10;
	this->_attackDamage = 0;
}

/* Copy constructor */
ClapTrap::ClapTrap(ClapTrap &clapTrapper)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = clapTrapper;
}

/* Copy assignment constructor */
ClapTrap& ClapTrap::operator=(ClapTrap &clapTrapper)
{
	std::cout << "Copy assignment operator called" << std::endl;
	this->_name = clapTrapper.getName();
	this->_hitPoints = clapTrapper.getHitPoints();
	this->_energyPoints = clapTrapper.getEnergyPoints();
	this->_attackDamage = clapTrapper.getAttackDamage();
	return clapTrapper;
}

ClapTrap::~ClapTrap(void)
{
	std::cout << "Destructor called" << std::endl;
}

/*
	target: (happens in takedamage)
	- loses attackDamage amount hitPoints (hitPoints - attackDamage)

	ClapTrap (this):
	- loses 1 energy point
*/
void	ClapTrap::attack(const std::string &target)
{
	std::string str;

	str = "ClapTrap <name> attacks <target>, causing <damage> points of damage.\n";
	str.replace(str.find("<name>"), 6, this->_name);
	str.replace(str.find("<target>"), 8, target);
	str.replace(str.find("<damage>"), 8, std::to_string(this->_attackDamage));
	std::cout << str;
	this->_energyPoints--;
}

/*
	- loses attackDamage amount hitPoints (hitPoints - attackDamage)
*/
void	ClapTrap::takeDamage(unsigned int amount)
{
	std::string str;

	str = "ClapTrap <name> takes damage, loses <amount> hitpoints.\n";
	str.replace(str.find("<name>"), 6, this->_name);
	str.replace(str.find("<amount>"), 8, std::to_string(amount));
	this->_hitPoints -= amount;
}

/*
	ClapTrap repairs itself
	- gains <amount> hitpoints back
	- loses 1 energy point
*/
void	ClapTrap::beRepaired(unsigned int amount)
{
	std::string str;

	str = "ClapTrap <name> repairs itself, gains <amount> hitpoints, loses 1 energy point.\n";
	str.replace(str.find("<name>"), 6, this->_name);
	str.replace(str.find("<amount>"), 8, std::to_string(amount));
	std::cout << str;
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
