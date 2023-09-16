#pragma once

#include <iostream>
#include <fstream>
#include <limits.h>
#include <map>
#include <cstdlib>

#define DATE 0
#define NB 1
#define VALID 1
#define INVALID 0

typedef struct Bitcoin
{
	double	elements_nb;
	long	year;
	long	month;
	long	day;
	int		valid;
	std::string date;
} Bitcoin;

class Btc
{
	std::ifstream in_file;
	std::map<int, Bitcoin> store;
	std::map<std::string, double> DB;
public:
	/*  Canonical form  */
	Btc();
	Btc(const Btc &copy);
	Btc &operator=(const Btc &other);
	~Btc();
	/*  Additional func  */
	int		file_parser(const char *name);
	void	DB_parser(void);
	void	exchange_bitcoins(void);
};

int	no_alpha(std::string str, int mode);

