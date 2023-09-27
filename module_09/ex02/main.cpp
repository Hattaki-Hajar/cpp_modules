#include "PmergeMe.hpp"

void	print_time(clock_t time, int mode, int size)
{
	double	final_time = (double)(time * CLOCKS_PER_SEC) / 1000000.0;
	std::cout << "Time to process a range of " << size << " elements with ";
	if (mode == VECTOR)
		std::cout << "std::vector : ";
	else
		std::cout << "std::deque : ";
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
		p.l_print();
		start = clock();
		p.v_sort(0, p.getVsize());
		end = clock();
		p.v_print();
		print_time(end - start, VECTOR, p.getVsize());
		start = clock();
		p.d_sort(0, p.getDQsize());
		end = clock();
		print_time(end - start, DEQUE, p.getVsize());
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	return 0;
}

