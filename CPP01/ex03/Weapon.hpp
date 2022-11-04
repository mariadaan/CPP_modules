#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <iostream>

class Weapon
{
public:
	Weapon(void);
	~Weapon(void);
	void setType(std::string type);
	const std::string &getType(void);

private:
	std::string _type;
};

#endif
