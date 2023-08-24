#include "converter.hpp"

int	isalldigit(std::string &s)
{
	int	i = 0;

	while (i < s.length())
	{
		if (!isdigit(s[i]) && s[i] != '.')
		{
			if (i == s.length() - 1 && s[i] == 'f')
				break ;
			return (0);
		}
		i++;
	}
	return (1);
}

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
	}
	else
		std::cout << "Wrong number of arguments" << std::endl;
}
