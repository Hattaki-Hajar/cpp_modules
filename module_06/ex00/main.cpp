#include "converter.hpp"

int main(int ac, char *av[])
{
	if (ac == 2)
	{
		if (!ScalarConverter::parser(av[1]))
		{
			std::cout << "Invalid argument" << std::endl;
			return -1;
		}
		ScalarConverter::convert(av[1]);
	}
	else
		std::cout << "Invalid number of arguments" << std::endl;
}
