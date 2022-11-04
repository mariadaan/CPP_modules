#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>

class Zombie
{
public:
	Zombie(void);
	~Zombie(void);
	void announce(void);
	std::string getName(void);
	void setName(std::string);
	Zombie *newZombie(std::string name);

private:
	std::string _name;
};

void randomChump(std::string name);

#endif
