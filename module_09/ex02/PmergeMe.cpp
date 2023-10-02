#include "PmergeMe.hpp"

PmergeMe::PmergeMe()
{}

PmergeMe::PmergeMe(const PmergeMe &copy)
{
	*this = copy;
}

PmergeMe &PmergeMe::operator=(const PmergeMe &other)
{
	(void)other;
	return *this;
}

void	PmergeMe::check_duplicates(int nb)
{
	unsigned int i = 0;
	while (i < v_sorted.size())
	{
		if (v_sorted[i] == nb)
			throw std::runtime_error("Error: found duplicates");
		i++;
	}
}

void	check_int(std::string &nb)
{
	for (unsigned int i = 0; i < nb.size(); i++)
	{
		if (!i && !isdigit(nb[i]) && nb[i] != '+')
			throw std::runtime_error("Error: Invalid input");
		if (i && !isdigit(nb[i]))
			throw std::runtime_error("Error: Invalid input");
	}
}

void	PmergeMe::parser(int ac, char *av[])
{
	long nb;
	std::string s;
	for (int a = 1; a < ac; a++)
	{
		s = av[a];
		check_int(s);
		nb = atol(s.c_str());
		if (nb < INT_MIN || nb > INT_MAX)
			throw std::runtime_error("Error: not an int");
		check_duplicates(nb);
		v_unsorted.push_back(nb);
		d_unsorted.push_back(nb);
	}
}
void	PmergeMe::unsorted_print(void)
{
	std::cout << "Before: ";
	for (size_t i = 0; i < v_unsorted.size(); i++)
		std::cout << v_unsorted[i] << " ";
	std::cout << std::endl;
}
/*  Vector  */
void	PmergeMe::v_print(void)
{
	std::cout << "After: ";
	for (unsigned int i = 0; i < v_sorted.size(); i++)
		std::cout << v_sorted[i] << " ";
	std::cout << std::endl;
}

void	PmergeMe::v_sort(void)
{
	for (size_t i = 0; i < v_unsorted.size(); i++)
	{
		if (!i && v_unsorted.size() % 2)
			v_pairs.push_back(std::make_pair(-1, v_unsorted[i]));
		else
		{
			v_pairs.push_back(std::make_pair(v_unsorted[i], v_unsorted[i + 1]));
			i++;
		}
	}
	for (size_t i = 0; i < v_pairs.size(); i++)
	{
		if (v_pairs[i].first > v_pairs[i].second)
			std::swap(v_pairs[i].first, v_pairs[i].second);
	}
	for (std::vector<std::pair<int, int> >::iterator i = v_pairs.begin(); i != v_pairs.end() - 1; i++)
	{
		std::vector<std::pair<int, int> >::iterator actual = i;
		std::vector<std::pair<int, int> >::iterator after = i + 1;
		while ((*actual).first > (*after).first)
		{
			std::swap(*actual, *after);
			if (actual != v_pairs.begin())
			{
				after = actual;
				actual -= 1;
			}
		}
	}
	for (size_t i = 0; i < v_pairs.size(); i++)
	{
		if (v_pairs[i].first != -1)
			v_sorted.push_back(v_pairs[i].first);
	}
	for (size_t i = 0; i < v_pairs.size(); i++)
	{
		std::vector<int>::iterator it;

		it = std::upper_bound(v_sorted.begin(), v_sorted.end(), v_pairs[i].second);
		v_sorted.insert(it, v_pairs[i].second);
	}
}
/* deque */
void	PmergeMe::d_sort(void)
{
	for (size_t i = 0; i < d_unsorted.size(); i++)
	{
		if (!i && d_unsorted.size() % 2)
			d_pairs.push_back(std::make_pair(-1, d_unsorted[i]));
		else
		{
			d_pairs.push_back(std::make_pair(d_unsorted[i], d_unsorted[i + 1]));
			i++;
		}
	}
	for (size_t i = 0; i < d_pairs.size(); i++)
	{
		if (d_pairs[i].first > d_pairs[i].second)
			std::swap(d_pairs[i].first, d_pairs[i].second);
	}
	for (std::deque<std::pair<int, int> >::iterator i = d_pairs.begin(); i != d_pairs.end() - 1; i++)
	{
		std::deque<std::pair<int, int> >::iterator actual = i;
		std::deque<std::pair<int, int> >::iterator after = i + 1;
		while ((*actual).first > (*after).first)
		{
			std::swap(*actual, *after);
			if (actual != d_pairs.begin())
			{
				after = actual;
				actual -= 1;
			}
		}
	}
	for (size_t i = 0; i < d_pairs.size(); i++)
	{
		if (d_pairs[i].first != -1)
			d_sorted.push_back(d_pairs[i].first);
	}
	for (size_t i = 0; i < d_pairs.size(); i++)
	{
		std::deque<int>::iterator it;

		it = std::upper_bound(d_sorted.begin(), d_sorted.end(), d_pairs[i].second);
		d_sorted.insert(it, d_pairs[i].second);
	}
}

void	PmergeMe::d_print(void)
{
	std::cout << "After: ";
	for (size_t i = 0; i < d_sorted.size(); i++)
		std::cout << d_sorted[i] << " ";
	std::cout << std::endl;
}

PmergeMe::~PmergeMe(){}