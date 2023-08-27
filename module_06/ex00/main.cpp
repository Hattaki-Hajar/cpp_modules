#include "converter.hpp"

int main(int ac, char *av[])
{
	if (ac == 2)
	{
		ScalarConverter	c(av[1]);
		if (!c.parser())
		{
			std::cout << "Wrong argument" << std::endl;
			return -1;
		}
		// std::cout << ScalarConverter::type << std::endl;
		c.convert(av[1]);
	}
	else
		std::cout << "Wrong number of arguments" << std::endl;
}
