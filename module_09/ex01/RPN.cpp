#include "RPN.hpp"

RPN::RPN()
{
	res = 0;
}

RPN &RPN::operator=(const RPN &other)
{
	store = other.store;
	res = other.res;
	return *this;
}

RPN::RPN(const RPN &copy)
{
	*this = copy;
}

RPN::~RPN()
{}

double	RPN::division(double one, double two)
{
	if (two)
		return (one / two);
	throw std::runtime_error("Error: attempting division by 0");
}

void	RPN::do_op(const std::string& op)
{
	std::cout << "f do-op " << store.size() << std::endl;
	if (store.size() < 2)
		throw std::runtime_error("Error 8");
	double one = store.top();
	store.pop();
	double two = store.top();
	store.pop();

	if (op == "+")
		store.push(one + two);
	if (op == "-")
		store.push(two - one);
	if (op == "*")
		store.push(one * two);
	if (op == "/")
		store.push(division(two, one));
}

int	check_nb(const std::string &s)
{
	unsigned int i = 0;
	if (!isdigit(s[0]) && s[0] != '+' && s[0] != '-'
		&& s[0] != '*' && s[0] != '/')
		throw std::runtime_error("Error1");
	if ((s[0] == '*' || s[0] == '/') && s[1])
		throw std::runtime_error("Error2");
	if (!s[1] && (s[0] == '+' ||
		s[0] == '*' || s[0] == '-' || s[0] == '/'))
		return 2 ;
	while (++i < s.size())
	{
		if (!isdigit(s[i]))
			throw std::runtime_error("Error3");
	}
	return 1;
}

void	RPN::fill_stack(const char *str)
{
	std::string nb;
	std::string	s = str;
	long		n;
	unsigned int i = 0, j;

	while (s[i])
	{
		j = 0;
		while (s[i] && s[i] != ' ')
		{
			nb[j] = s[i];
			i++;
			j++;
		}
		if (check_nb(nb) == 2)
			do_op(nb);
		else
		{
			n = atof(nb.c_str());
			if (n > 9)
				throw std::runtime_error("Error0");
		}
		i++;
	}
}

void	RPN::check_stack(void)
{
	if (store.size() != 1)
		throw std::runtime_error("Error");
	res = store.top();
	std::cout << "Result: " << res << std::endl;
}
