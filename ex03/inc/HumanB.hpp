#ifndef HUMANB_HPP
#define HUMANB_HPP

#include <string>
#include "Weapon.hpp"

class HumanB
{
private:
	Weapon* _weapon;
	std::string _name;
public:
	HumanB(std::string name);
	~HumanB();

	void attack() const;

	void setWeapon(Weapon& w);
};

#endif // HUMANB_HPP
