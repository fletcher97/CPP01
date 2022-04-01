#include <iostream>
#include "Harl.hpp"

void
test_print(Harl h)
{
	h.complain("debug");
	h.complain("info");
	h.complain("warning");
	h.complain("error");
}

int main()
{
	std::cout << "------------------ DEBUG ------------------" << std::endl;
	test_print(Harl("debug"));
	std::cout << "------------------ INFO -------------------" << std::endl;
	test_print(Harl("info"));
	std::cout << "------------------ WARN -------------------" << std::endl;
	test_print(Harl("warning"));
	std::cout << "------------------ ERROR ------------------" << std::endl;
	test_print(Harl("error"));
	return 0;
}
