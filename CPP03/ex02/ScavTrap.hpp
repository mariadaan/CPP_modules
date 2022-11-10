#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include <iostream>
#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
public:
	ScavTrap(void);
	ScavTrap(std::string name);
	ScavTrap(ScavTrap &scavTrapper);
	ScavTrap& operator=(ScavTrap &scavTrapper);
	~ScavTrap(void);

	bool	getGateKeeperMode(void);

	void	attack(const std::string& target);
	void	guardGate(void);

private:
	bool	_gateKeeperMode;
};

#endif
