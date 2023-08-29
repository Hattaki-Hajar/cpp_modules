#pragma once

#include <iostream>
#include <stdlib.h>
#include <cmath>

# define INT 1
# define FLOAT 2
# define DOUBLE 3
# define CHAR 0
class ScalarConverter
{
	static int		i;
	static float	f;
	static double	d;
	static char		c;
	static long double	store;
	static std::string	str;
	static int		type;
	ScalarConverter();
	ScalarConverter(const ScalarConverter &copy);
	ScalarConverter	operator=(const ScalarConverter &other);

public:
	/*  Canonical form  */
	~ScalarConverter();
	/*  Setter  */
	// void	SetStr(std::string &s);
	/*  Additional  */
	static void	convert(std::string const &str);
	static int	parser(std::string const &str);
	static void	from_char(void);
	static void	from_int(void);
	static void	from_float(void);
	static void	from_double(void);
	static void	print_char(void);
	static void	print_int(void);
	static void	print_float(void);
	static void	print_double(void);
	/*  Converters  */
};

int	isalldigit(const std::string &s);
