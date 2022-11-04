#ifndef HUMANB_HPP
#define HUMANB_HPP

#include <iostream>
#include "Weapon.hpp"

class HumanB
{
public:
	HumanB(void);
	~HumanB(void);
	void attack(void);
	void setName(std::string name);
	std::string getName(void);
	void setWeapon(Weapon &weapon);
	Weapon &getWeapon(void);

private:
	std::string _name;
	Weapon *_weapon;
};

#endif
