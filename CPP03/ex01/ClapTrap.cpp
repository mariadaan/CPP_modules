#include "ClapTrap.hpp"

/* Default constructor */
ClapTrap::ClapTrap(void)
{
	std::cout << "ClapTrap default constructed" << std::endl;
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
	std::cout << "ClapTrap copy constructor called" << std::endl;
	*this = clapTrapper;
}

/* Copy assignment constructor */
ClapTrap& ClapTrap::operator=(ClapTrap &clapTrapper)
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
	std::string str;

	if (this->_energyPoints > 0)
	{
		str = "ClapTrap <name> attacks <target>, causing <damage> points of damage.\n";
		str.replace(str.find("<name>"), 6, this->_name);
		str.replace(str.find("<target>"), 8, target);
		str.replace(str.find("<damage>"), 8, std::to_string(this->_attackDamage));
		std::cout << str;
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
	std::string str;

	this->_hitPoints -= amount;
	if (this->_hitPoints < 0)
		this->_hitPoints = 0;

	str = "ClapTrap <name> takes damage, loses <amount> hitpoints.\n";
	str.replace(str.find("<name>"), 6, this->_name);
	str.replace(str.find("<amount>"), 8, std::to_string(amount));
	std::cout << str;
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
