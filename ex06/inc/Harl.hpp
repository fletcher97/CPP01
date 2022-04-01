#include <string>

class Harl
{
private:
	int _lvl;
	std::string _lvls[4];
	void (Harl::*_fp[4])() const;
	void _debug() const;
	void _info() const;
	void _warning() const;
	void _error() const;
public:
	Harl(std::string lvl);
	~Harl();
	void complain(std::string lvl);
};
