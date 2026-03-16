#include "Zombie.hpp"

Zombie* newZombie(std::string name)
{
	Zombie* zumbi = new Zombie(name); 
	return (zumbi);
}