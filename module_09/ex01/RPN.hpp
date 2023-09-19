#pragma once

#include <iostream>
#include <stack>
#include <exception>
#include <cstdlib>

class RPN
{
	double	res;
	std::stack<double> store;
public:
	/*  Canonical form  */
	RPN();
	RPN(const RPN &copy);
	RPN &operator=(const RPN &other);
	~RPN();
	/*  Additional func  */
	void	fill_stack(const char *str);
	void	do_op(const std::string& op);
	double	division(double one, double two);
	void	check_stack(void);
};
