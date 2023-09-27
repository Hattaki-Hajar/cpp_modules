#include "PmergeMe.hpp"

PmergeMe::PmergeMe()
{}

PmergeMe::PmergeMe(const PmergeMe &copy)
{
	*this = copy;
}

PmergeMe &PmergeMe::operator=(const PmergeMe &other)
{
	v_store = other.v_store;
	l_store = other.l_store;
	return *this;
}

PmergeMe::~PmergeMe()
{}

int PmergeMe::getVsize(void)
{
	return (v_store.size());
}

int PmergeMe::getDQsize(void)
{
	return (d_store.size());
}

void	PmergeMe::check_duplicates(int nb)
{
	unsigned int i = 0;
	while (i < v_store.size())
	{
		if (v_store[i] == nb)
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
		v_store.push_back(nb);
		d_store.push_back(nb);
		l_store.push_back(nb);
	}
}

void	PmergeMe::v_print(void)
{
	std::cout << "After: ";
	for (unsigned int i = 0; i < v_store.size(); i++)
		std::cout << v_store[i] << " ";
	std::cout << std::endl;
}

void	PmergeMe::v_merge(int start, int mid, int end)
{
	int i = start, j = mid;
	std::vector<int> temp;
	temp.clear();

	while (i < mid && j < end)
	{
		if (v_store[i] < v_store[j])
			temp.push_back(v_store[i++]);
		else
			temp.push_back(v_store[j++]);
	}
	while (i < mid)
		temp.push_back(v_store[i++]);
	while (j < end)
		temp.push_back(v_store[j++]);
	i = start;
	while (i < end)
	{
		v_store[i] = temp[i - start];
		i++;
	}
}
void	PmergeMe::v_insert(int start, int end)
{
	int tmp, j;

	for (int i = start + 1; i < end; i++)
	{
		tmp = v_store[i];
		j = i - 1;
		while (j >= start && v_store[j] > tmp)
		{
			v_store[j + 1] = v_store[j];
			j--;
		}
		v_store[j + 1] = tmp;
	}
}

void	PmergeMe::v_sort(int start, int end)
{
	int mid;
	if (end - start > 16)
	{
		mid = (end + start) / 2;
		v_sort(start, mid);
		v_sort(mid, end);
		v_merge(start, mid, end);
	}
	else
		v_insert(start, end);
}

/* deque */

void	PmergeMe::d_merge(int start, int mid, int end)
{
	int i = start, j = mid;
	std::vector<int> temp;
	temp.clear();

	while (i < mid && j < end)
	{
		if (d_store[i] < d_store[j])
			temp.push_back(d_store[i++]);
		else
			temp.push_back(d_store[j++]);
	}
	while (i < mid)
		temp.push_back(d_store[i++]);
	while (j < end)
		temp.push_back(d_store[j++]);
	i = start;
	while (i < end)
	{
		d_store[i] = temp[i - start];
		i++;
	}
}
void	PmergeMe::d_insert(int start, int end)
{
	int tmp, j;

	for (int i = start + 1; i < end; i++)
	{
		tmp = d_store[i];
		j = i - 1;
		while (j >= start && d_store[j] > tmp)
		{
			d_store[j + 1] = d_store[j];
			j--;
		}
		d_store[j + 1] = tmp;
	}
}

void	PmergeMe::d_sort(int start, int end)
{
	int mid;
	if (end - start > 16)
	{
		mid = (end + start) / 2;
		d_sort(start, mid);
		d_sort(mid, end);
		d_merge(start, mid, end);
	}
	else
		d_insert(start, end);
}

void	PmergeMe::d_print(void)
{
	size_t i = 0;
	std::cout << "After: ";
	while (i < d_store.size())
	{
		std::cout  << d_store[i] << " ";
		i++;
	}
	std::cout << std::endl;
}

void PmergeMe::l_print(void)
{
	std::list<int>::iterator start = l_store.begin(),
	end = l_store.end();

	std::cout << "Before: ";
	while (start != end)
	{
		std::cout << *start << " ";
		start++;
	}
	std::cout << std::endl;
}
