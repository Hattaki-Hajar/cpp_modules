#pragma once

#include <iostream>
#include <fstream>
#include <limits.h>
#include <map>
#include <cstdlib>
#include <algorithm>

#define DATE 0
#define NB 1
#define VALID 1
#define INVALID 0
#define NL 2

typedef struct Bitcoin
{
	double	elements_nb;
	long	year;
	long	month;
	long	day;
	int		valid;
	double	value;
	std::string date;
} Bitcoin;

class Btc
{
	std::ifstream in_file;
	std::map<std::string, double> DB;
public:
	/*  Canonical form  */
	Btc();
	Btc(const Btc &copy);
	Btc &operator=(const Btc &other);
	~Btc();
	/*  Additional func  */
	void	file_parser(const char *name);
	std::string	check_store_date(Bitcoin &store);
	void	DB_parser(void);
	void	exchange_bitcoins(Bitcoin &store);
};

int	no_alpha(std::string str, int mode);

