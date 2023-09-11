#pragma once

#include <iostream>
#include <stack>

template <typename T>
class	MutantStack: public stack
{
public:
	/*  Canonical form  */
	MutantStack();
	MutantStack(const MutantStack &copy);
	MutantStack &operator=(const MutantStack &other)
	~MutantStack();
	
}
