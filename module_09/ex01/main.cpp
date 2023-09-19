#include "RPN.hpp"

int main(int ac, char *av[])
{
	if (ac != 2)
	{
		std::cerr << "Error: wrong number of arguments" << std::endl;
		return -1;
	}
	try
	{
		RPN	r;
		r.fill_stack(av[1]);
		r.check_stack();
	}
	catch (std::exception &exp)
	{
		std::cerr << exp.what() << std::endl;;
	}
}
