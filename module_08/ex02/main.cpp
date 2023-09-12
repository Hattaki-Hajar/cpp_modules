#include "MutantStack.hpp"

void	func1(void)
{
	MutantStack<int> mstack;
	mstack.push(5);
	mstack.push(17);
	std::cout << mstack.top() << std::endl;
	mstack.pop();
	std::cout << mstack.size() << std::endl;
	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	//[...]
	mstack.push(0);
	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();
	++it;
	--it;
	while (it != ite)
	{
		std::cout << *it << std::endl;
		++it;
	}
	std::stack<int> s(mstack);
	std::cout << std::endl;
}

void	func2(void)
{
	MutantStack<int> istack;

	for (int i = 0; i < 10; i++)
		istack.push(i * 2);
	MutantStack<int>::iterator iter_s = istack.begin();
	MutantStack<int>::iterator iter_e = istack.end();
	while (iter_s != iter_e)
	{
		std::cout << *iter_s << ". ";
		iter_s++;
	}
	std::cout << std::endl;
	std::cout << "size: " << istack.size() << std::endl;
	istack.pop();
	std::cout << "after poping one element" << std::endl;
	std::cout << "size: " << istack.size() << std::endl << std::endl;
}

void	func3(void)
{
	MutantStack<char> istack;

	for (int i = 0; i < 10; i++)
		istack.push(i + 97);
	MutantStack<char>::iterator iter_s = istack.begin();
	MutantStack<char>::iterator iter_e = istack.end();
	while (iter_s != iter_e)
	{
		std::cout << *iter_s << ". ";
		iter_s++;
	}
	std::cout << std::endl;
	std::cout << "size: " << istack.size() << std::endl;
	istack.pop();
	std::cout << "after poping one element" << std::endl;
	std::cout << "size: " << istack.size() << std::endl;
}

int main()
{
	std::cout << "****** test1 ******" << std::endl;
	func1();
	std::cout << "****** test2 ******" << std::endl;
	func2();
	std::cout << "****** test3 ******" << std::endl;
	func3();
}