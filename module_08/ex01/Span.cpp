#include "Span.hpp"

Span::Span()
{
	N = 5;
}

Span::Span(unsigned int n)
{
	N = n;
}

Span &Span::operator=(const Span &other)
{
	store = other.store;
	N = other.N;
	return (*this);
}

Span::Span(const Span &copy)
{
	*this = copy;
}

Span::~Span()
{}

void	Span::addNumber(int nb)
{
	if (store.size() == N)
		throw std::runtime_error("Already full!");
	store.push_back(nb);
}

void	Span::print_elements(void)
{
	for (unsigned int i = 0; i < store.size(); i++)
		std::cout << store[i] << ". ";
	std::cout << std::endl;
}

int		Span::longestSpan(void)
{
	unsigned int size = store.size();

	if (size < 2)
		throw std::runtime_error("Not enough elements to form a span!");
	std::vector<int> temp = store;
	std::sort(temp.begin(), temp.end());
	return (temp[size - 1] - temp[0]);
}

int		Span::shortestSpan(void)
{
	unsigned int size = store.size();
	int	shortest, test;
	if (size < 2)
		throw std::runtime_error("Not enough elements to form a span!");
	std::vector<int> temp = store;
	std::sort(temp.begin(), temp.end());
	shortest = temp[1] - temp[0];
	for (unsigned int i = 0; i < size - 1; i++)
	{
		test = temp[i + 1] - temp[i];
		if (test < shortest)
			shortest = test;
		i++;
	}
	return (shortest);
}
