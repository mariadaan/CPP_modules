#include "Zombie.hpp"

int main(void)
{
	Zombie *kawish = NULL;

	kawish = kawish->newZombie("Kawish");
	kawish->announce();
	delete kawish;

	randomChump("Nicky");
	return (0);
}
