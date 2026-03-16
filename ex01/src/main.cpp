#include "Zombie.hpp"

int main(void)
{
	int N = 5;
	Zombie* myHorde = zombieHorde(N, "Rage_Horde");
	for (int i = 0; i < N; i++)
		myHorde[i].announce();
	delete[] myHorde;
	return (0);
}