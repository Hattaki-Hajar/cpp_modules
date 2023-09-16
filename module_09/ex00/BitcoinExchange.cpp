#include "BitcoinExchange.hpp"

Btc::Btc()
{}

Btc::Btc(const Btc &copy)
{
	*this = copy;
}

Btc &Btc::operator=(const Btc &other)
{
	*this = other;
	return (*this);
}

int	Btc::file_parser(const char *name)
{
	std::string	line;
	in_file.open(name);
	getline(in_file, line);
	if (line != "date | value")
	{
		std::cerr << "Error: Invalid header" << std::endl;
		return -1;
	}
	unsigned int j = 0, i;
	while (!in_file.eof())
	{
		store[j].valid = VALID;
		getline(in_file, line, '-');
		if (!no_alpha(line, DATE))
			store[j].valid = INVALID;
		store[j].year = atol(line.c_str());
		store[j].date = line + "-";
		getline(in_file, line, '-');
		if (!no_alpha(line, DATE))
			store[j].valid = INVALID;
		store[j].month = atol(line.c_str());
		store[j].date += line + "-";
		getline(in_file, line, ' ');
		if (!no_alpha(line, DATE))
			store[j].valid = INVALID;
		store[j].day = atol(line.c_str());
		store[j].date += line;
		getline(in_file, line);
		i = 0;
		while (i < line.length())
		{
			if (!isspace(line[i]))
				break;
			i++;
		}
		if ((line[i] != '|' || !isspace(line[i + 1])) && line[i])
		{
			std::cout << "Error: invalid character" << std::endl;
			store[j].valid = INVALID;
			return -1;
		}
		while (++i < line.length())
		{
			if (!isspace(line[i]))
				break;
		}
		store[j].elements_nb = atof(line.c_str() + i);
		if (!no_alpha(line.c_str() + i, NB))
			store[j].valid = INVALID;
		j++;
	}
	return 0;
}

void	Btc::DB_parser(void)
{
	std::ifstream	file;
	std::string		line, nb;
	file.open("data.csv");
	if (!file.good())
	{
		std::cerr << "Error: couldn't open data base file" << std::endl;
		return ; 
	}
	getline(file, line);
	while (!file.eof())
	{
		getline(file, line, ',');
		getline(file, nb);
		DB[line] = atof(nb.c_str());
	}
}

int	check_day(const Bitcoin &btc)
{
	if (btc.day > 31 || btc.day < 0)
		return -1;
	if (btc.month == 4 || btc.month == 6 ||btc.month == 9 ||btc.month == 11)
	{
		if (btc.day > 30)
			return -1;
	}
	else if (btc.month == 2)
	{
		if (btc.day > 29)
			return -1;
		if ((btc.year % 4) || (!(btc.year % 100) && (btc.year % 400)))
		{
			if (btc.day > 28)
				return -1;
		}
	}
	return 0;
}

void	Btc::exchange_bitcoins(void)
{
	for (std::map<int, Bitcoin>::iterator it = store.begin(); it != store.end(); it++)
	{
		if (it->second.date < "2009-01-02")
		{
			std::cerr << "Error: huh?! what is a bitcoin? => " << it->second.date << std::endl;
			continue ;
		}
		if (it->second.month < 1 || it->second.month > 12)
		{
			std::cerr << "Error: bad input1 => " << it->second.date << std::endl;
			continue ; 
		}
		if (check_day(it->second))
		{
			std::cerr << "Error: bad input2 => " << it->second.date << std::endl;
			continue ;
		}
		if (it->second.elements_nb < 0)
		{
			std::cerr << "Error: not a positive number" << std::endl;
			continue ;
		}
		if (it->second.elements_nb > INT_MAX)
		{
			std::cerr << "Error: too large a number" << std::endl;
			continue ;
		}
		if (it->second.valid == INVALID)
		{
			std::cerr << "Error: bad input3 => " << it->second.date << std::endl;
			continue ;
		}
	}
}

Btc::~Btc()
{}
