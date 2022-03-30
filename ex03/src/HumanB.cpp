#include "HumanB.hpp"

#include <iostream>

HumanB::HumanB(std::string name)
	: _name(name){
		this->_weapon = NULL;
}

HumanB::~HumanB(){}

void HumanB::attack() const{
	std::cout << this->_name << " attacks with their " << _weapon->getType() << std::endl;
}

void HumanB::setWeapon(Weapon& w){
	this->_weapon = &w;
}
