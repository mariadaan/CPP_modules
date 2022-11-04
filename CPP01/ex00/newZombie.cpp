#include "Zombie.hpp"

/*
	Create a zombie, name it, and return it so you can use it
	outside of the function scope.
*/
Zombie *Zombie::newZombie(std::string name)
{
	Zombie *heapZombie = new Zombie();
	heapZombie->setName(name);
	return (heapZombie);
}
