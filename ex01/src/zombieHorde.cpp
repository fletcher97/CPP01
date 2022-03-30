#include "Zombie.hpp"

Zombie* zombieHorde(int n, std::string name) {
	Zombie *ret = new Zombie[n];
	for (int i = 0; i < n; i++)
	{
		ret[i].set_name(name);
	}
	return ret;
}
