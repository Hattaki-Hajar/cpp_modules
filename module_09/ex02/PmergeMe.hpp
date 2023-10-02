#pragma once

#include <iostream>
#include <iomanip>
#include <exception>
#include <cstdlib>
#include <limits.h>
#include <time.h>
#include <vector>
#include <deque>
#include <algorithm>

#define VECTOR 0
#define DEQUE 1

class PmergeMe
{
	std::vector<int>	v_unsorted;
	std::vector<std::pair<int, int> >	v_pairs;
	std::vector<int>	v_sorted;
	std::deque<int>	d_unsorted;
	std::deque<std::pair<int, int> >	d_pairs;
	std::deque<int>		d_sorted;
	PmergeMe(const PmergeMe &copy);
	PmergeMe &operator=(const PmergeMe &other);
public:
	/*  Canonical form  */
	PmergeMe();
	~PmergeMe();
	/*  Additional func  */
	void	parser(int ac, char *av[]);
	void	check_duplicates(int nb);
	void	v_print(void);
	void	d_print(void);
	void	unsorted_print();
	void	print_time(clock_t time, int mode);
	/*  Vector sort  */
	void	v_sort(void);
	/*  deque sort  */
	void	d_sort(void);
};
