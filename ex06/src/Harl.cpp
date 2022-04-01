#include <iostream>

#include "Harl.hpp"

Harl::Harl(std::string lvl)
{
	this->_lvls[0] = "debug";
	this->_lvls[1] = "info";
	this->_lvls[2] = "warning";
	this->_lvls[3] = "error";
	this->_fp[0] = &Harl::_debug;
	this->_fp[1] = &Harl::_info;
	this->_fp[2] = &Harl::_warning;
	this->_fp[3] = &Harl::_error;
	for (int i = 0; i < 4; i++)
		if(!this->_lvls[i].compare(lvl))
			this->_lvl = i;
}

Harl::~Harl(){}

void
Harl::_debug() const
{
	std::cout << "[DEBUG] - I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << std::endl;
}

void
Harl::_info() const
{
	std::cout << "[INFO] - I cannot believe adding extra bacon costs more money. You didn't put enough bacon in my burger! If you did, I wouldn't be asking for more!" << std::endl;
}

void
Harl::_warning() const
{
	std::cout << "[WARNING] - I think I deserve to have some extra bacon for free. I've been coming for years whereas you started working here since last month." << std::endl;
}

void
Harl::_error() const
{
	std::cout << "[ERROR] - This is unacceptable! I want to speak to the manager now." << std::endl;
}

void
Harl::complain(std::string lvl)
{
	for (int i = this->_lvl; i < 4; i++)
		if(!this->_lvls[i].compare(lvl))
			(this->*_fp[i])();
}
