#include "Zombie.hpp"

#include <string>
#include <iostream>

Zombie::Zombie(){}

Zombie::~Zombie() {
	std::cout << this->_name << std::endl;
}

void Zombie::announce() {
	std::cout << this->_name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

void Zombie::set_name(std::string name) {
	this->_name = name;
}
