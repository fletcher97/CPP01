#ifndef ZOMBIE_H
#define ZOMBIE_H

#include <string>

class Zombie
{
private:
	std::string _name;
public:
	Zombie();
	~Zombie();

	void announce();

	void set_name(std::string name);
};

Zombie *zombieHorde(int n, std::string name);

#endif // ZOMBIE_H
