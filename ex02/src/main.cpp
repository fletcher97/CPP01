#include <iostream>
#include <string>

int main()
{
	std::string s = "HI THIS IS BRAIN";
	std::string *sPTR = &s;
	std::string &sREF = s;

	std::cout << "string   : " << &s << std::endl;
	std::cout << "pointer  : " << sPTR << std::endl;
	std::cout << "reference: " << &sREF << std::endl;

	std::cout << "string   : " << s << std::endl;
	std::cout << "pointer  : " << *sPTR << std::endl;
	std::cout << "reference: " << sREF << std::endl;

}
