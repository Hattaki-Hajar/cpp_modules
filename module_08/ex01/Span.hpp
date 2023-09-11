#pragma once

#include <iostream>
#include <vector>
#include <algorithm>

class Span
{
private:
	unsigned int	N;
	std::vector<int>	store;
public:
	/*  Canonical form  */
	Span();
	Span(unsigned int n);
	Span(const Span &copy);
	Span &operator=(const Span &other);
	~Span();

	/*  Additional func  */
	void	addNumber(int nb);
	void	print_elements(void);
	int		longestSpan(void);
	int		shortestSpan(void);
	template <typename T>
	void	SuperAdder(T start, T end)
	{
		unsigned int size = std::distance(start, end);

		if (size < store.size() + N)
			throw std::runtime_error("Range too big!");
		while (start < end)
		{
			addNumber(*start);
			start++;
		}
	}
};

