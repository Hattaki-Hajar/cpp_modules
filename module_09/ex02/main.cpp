#include "PmergeMe.hpp"

void	PmergeMe::print_time(clock_t time, int mode)
{
	double	final_time = (double)(time * CLOCKS_PER_SEC) / 1000000.0;
	std::cout << "Time to process a range of ";
	if (mode == VECTOR)
		std::cout << v_unsorted.size() << " elements with " << "std::vector : ";
	else
		std::cout << d_unsorted.size() << " elements with " << "std::deque : ";
	std::cout << std::fixed << std::setprecision(5);
	std::cout << final_time << " us" << std::endl;
}

int main(int ac, char *av[])
{
	if (ac < 2)
		std::cerr << "Error" << std::endl;
	try
	{
		PmergeMe p;
		clock_t start, end;
		p.parser(ac, av);
		p.unsorted_print();
		start = clock();
		p.v_sort();
		end = clock();
		p.v_print();
		p.print_time(end - start, VECTOR);
		start = clock();
		p.d_sort();
		end = clock();
		p.d_print();
		p.print_time(end - start, DEQUE);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	return 0;
}

