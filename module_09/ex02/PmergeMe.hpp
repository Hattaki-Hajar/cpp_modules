#pragma once

#include <iostream>
#include <iomanip>
#include <exception>
#include <cstdlib>
#include <limits.h>
#include <time.h>
#include <vector>
#include <list>
#include <deque>

#define VECTOR 0
#define DEQUE 1

class PmergeMe
{
	std::vector<int>	v_store;
	std::list<int>		l_store;
	std::deque<int>		d_store;
public:
	/*  Canonical form  */
	PmergeMe();
	PmergeMe(const PmergeMe &copy);
	PmergeMe &operator=(const PmergeMe &other);
	~PmergeMe();
	/*  Getters  */
	int getVsize(void);
	int getDQsize(void);
	/*  Additional func  */
	void	parser(int ac, char *av[]);
	void	check_duplicates(int nb);
	void	v_print(void);
	void	d_print(void);
	void	l_print(void);
	/*  Vector sort  */
	void	v_sort(int start, int end);
	void	v_merge(int start, int mid, int end);
	void	v_insert(int start, int end);
	/*  deque sort  */
	void	d_sort(int start, int end);
	void	d_merge(int start, int mid, int end);
	void	d_insert(int start, int end);
};
