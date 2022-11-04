#include "Zombie.hpp"

/*
	Create a zombie, name it, and the zombie announces itself.
*/
void randomChump(std::string name)
{
	Zombie stackZombie;
	stackZombie.setName(name);
	stackZombie.announce();
}
