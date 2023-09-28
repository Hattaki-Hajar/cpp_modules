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

std::string trim(std::string str, int index)
{
	std::string s = str.substr(index + 1, str.size());
	return s;
}

std::string	Btc::check_store_date(Bitcoin &store)
{
	std::string line, date;
	size_t found;

	getline(in_file, line);
	if (line.empty())
	{
		store.valid = NL;
		return line;
	}
	found = line.find("-");
	if (found == std::string::npos)
		store.valid = INVALID;
	date = line.substr(0, found);
	if (!no_alpha(date, DATE))
		store.valid = INVALID;
	store.year = atol(date.c_str());
	store.date = line.substr(0, found + 1);
	line = trim(line, found);
	found = line.find("-");
	if (found == std::string::npos)
		return line;
	date = line.substr(0, found);
	if (!no_alpha(date, DATE))
		store.valid = INVALID;
	store.month = atol(date.c_str());
	if (store.month < 9 && date[0] != '0')
		date = "0" + date;
	store.date += date + "-";
	line = trim(line, found);
	found = line.find(" ");
	if (found == std::string::npos)
		return line;
	date = line.substr(0, found);
	line = trim(line, found);
	if (!no_alpha(date, DATE))
		store.valid = INVALID;
	store.day = atol(date.c_str());
	if (store.day < 9 && date[0] != '0')
		date = "0" + date;
	store.date += date;
	return line;
}

void	Btc::file_parser(const char *name)
{
	std::string	line;
	in_file.open(name);
	getline(in_file, line);
	if (line != "date | value")
		std::cerr << "Error: Invalid header" << std::endl;
	unsigned int i;
	Bitcoin	store;
	while (!in_file.eof())
	{
		store.valid = VALID;
		line = check_store_date(store);
		if (store.valid == NL)
			continue ;
		i = 0;
		if ((line[i] != '|' || line[i + 1] != ' '))
			store.valid = INVALID;
		i++;
		if (!isspace(line[i++]))
			store.valid = INVALID;
		store.elements_nb = atof(line.c_str() + i);
		if (!no_alpha(line.c_str() + i, NB))
			store.valid = INVALID;
		exchange_bitcoins(store);
	}
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

void	Btc::exchange_bitcoins(Bitcoin &store)
{
	if (store.valid == NL)
		return ;
	if (store.date < "2009-01-02")
	{
		std::cerr << "Error: huh?! what is a bitcoin? => " << store.date << std::endl;
		return ;
	}
	if (store.month < 1 || store.month > 12)
	{
		std::cerr << "Error: bad input1 => " << store.date << std::endl;
		return ; 
	}
	if (check_day(store))
	{
		std::cerr << "Error: bad input2 => " << store.date << std::endl;
		return ;
	}
	if (store.elements_nb < 0)
	{
		std::cerr << "Error: not a positive number" << std::endl;
		return ;
	}
	if (store.elements_nb > INT_MAX)
	{
		std::cerr << "Error: too large a number" << std::endl;
		return ;
	}
	if (store.valid == INVALID)
	{
		std::cerr << "Error: bad input3 => " << store.date << std::endl;
		return ;
	}
	std::map<std::string, double>::iterator iter = DB.begin();
	while (++iter != DB.end())
	{
		std::map<std::string, double>::iterator i = iter;
		i++;
		if (store.date == iter->first || store.date < i->first)
		{
			store.value = store.elements_nb * iter->second;
			std::cout << store.date << " => " << store.elements_nb
			<< " = " << store.value << std::endl;
			break;
		}
	}
}

Btc::~Btc()
{}
