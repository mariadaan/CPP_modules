#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>

class ClapTrap
{
public:
	ClapTrap(void);
	ClapTrap(std::string name);
	ClapTrap(ClapTrap &clapTrapper);
	ClapTrap& operator=(ClapTrap &clapTrapper);
	~ClapTrap(void);

	void	attack(const std::string& target);
	void	takeDamage(unsigned int amount);
	void	beRepaired(unsigned int amount);
	
	std::string		getName(void);
	unsigned int	getHitPoints(void);
	unsigned int	getEnergyPoints(void);
	unsigned int	getAttackDamage(void);

private:
	std::string		_name;
	unsigned int	_hitPoints;
	unsigned int	_energyPoints;
	unsigned int	_attackDamage;
};

#endif
