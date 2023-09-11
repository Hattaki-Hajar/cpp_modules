#include "Span.hpp"

void	func1(void)
{
	Span sp = Span(5);
	sp.addNumber(6);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);
	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;
	std::cout << std::endl;
}

void	func2(void)
{
	Span	n(4);

	n.addNumber(1);
	n.addNumber(2);
	n.addNumber(5);
	n.addNumber(6);
	n.print_elements();
	n.addNumber(6);
}

void	func3(void)
{
	std::vector<int> s;
	Span n(20);

	for (int i = 0; i < 20; i++)
	{
		s.push_back(i * 5);
	}
	n.SuperAdder(s.begin(), s.end());
	n.print_elements();
	std::cout << "shortest span: " << n.shortestSpan() << std::endl;
	std::cout << "longest span: " << n.longestSpan() << std::endl;
}

int main()
{
	try
	{
		std::cout << "****** test1 ******" << std::endl;
		func1();
		// std::cout << "****** test2 ******" << std::endl;
		// func2();
		std::cout << "****** test3 ******" << std::endl;
		func3();
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}