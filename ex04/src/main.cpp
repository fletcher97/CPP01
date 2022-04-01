#include <string>
#include <iostream>
#include <fstream>

std::string
replace(std::string s, std::string sOld, std::string sNew)
{
	std::string ret = s;
	size_t pos = 0;

	long i;
	while((i = ret.find(sOld, pos)) >= 0)
	{
		std::string tmp = ret.substr(0, i);
		tmp.append(sNew);
		pos = tmp.length();
		tmp.append(ret.substr(i + sOld.length(), ret.length()));
		ret = tmp;
	}
	return ret;
}

int main(int argc, char **argv) {
	if (argc != 4)
		return -1;
	std::ifstream ifs;
	std::ofstream ofs;

	ifs.open(argv[1], std::ifstream::in);
	ofs.open(static_cast<std::string>(argv[1]).append(".replace").c_str(), std::ifstream::out);

	if (ifs.is_open() && ofs.is_open())
	{
		std::string content = std::string(std::istreambuf_iterator<char>(ifs), std::istreambuf_iterator<char>());
		ofs << replace(content, static_cast<std::string>(argv[2]), static_cast<std::string>(argv[3]));
	}
	else
	{
		std::cerr << "Failed to open files" << std::endl;
	}

	ofs.close();
	ifs.close();
}
