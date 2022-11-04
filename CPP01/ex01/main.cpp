#include "Zombie.hpp"

int main(void)
{
	Zombie *zombies = NULL;
	int N;

	N = 5;
	zombies = zombieHorde(N, "Kawish");
	for (int i = 0; i < N; i++)
		zombies[i].announce();
	delete[] zombies;
	return (0);
}
