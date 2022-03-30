#include "Zombie.hpp"

int main() {
	const int zcount = 5;
	Zombie *z = zombieHorde(zcount, "fletcher");
	for (int i = 0; i < zcount; i++)
		z[i].announce();
	delete[] z;
}
