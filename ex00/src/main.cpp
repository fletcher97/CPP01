#include "Zombie.hpp"

int main() {
	Zombie *z = newZombie("fletcher");
	randomChump("mgueifao");
	z->announce();
	randomChump("mgueifao");
	delete z;
}
