#include "BitcoinExchange.hpp"

int	no_alpha(std::string str, int mode)
{
	unsigned int i = 0, size = str.size(), point = 0;
	for (i = 0; i < size; i++)
	{
		if (mode == NB && str[i] == '.')
			point++;
		if (!isdigit(str[i]) && mode == DATE)
			return 0;
		else if (mode == NB && ((!isdigit(str[i]) && str[i] != '.')
				|| (str[i] == '.' && (point > 1 || i == size -1 || !i))))
			return 0;
	}
	return 1;
}

int main(int ac, char *av[])
{
	if (ac > 2)
	{
		std::cout << "Wrong number of arguments" << std::endl;
		return -1;
	}
	std::ifstream in_file;
	Btc	m;
	in_file.open(av[1]);
	if (!in_file.good())
	{
		std::cerr << "Error: could not open file." << std::endl;
		return -1;
	}
	m.DB_parser();
	m.file_parser(av[1]);
}
