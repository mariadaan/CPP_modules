#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include <iostream>
#include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
public:
	FragTrap(void);
	FragTrap(std::string name);
	FragTrap(FragTrap &scavTrapper);
	FragTrap &operator=(FragTrap &scavTrapper);
	~FragTrap(void);

	void attack(const std::string &target);
	void highFivesGuys(void);
};

#endif
