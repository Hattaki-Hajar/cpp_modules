#include "Base.hpp"

Base::Base()
{}

Base::~Base()
{}

A::A()
{}

A::~A()
{}

B::B()
{}

B::~B()
{}

C::C()
{}

C::~C()
{}

Base *generate(void)
{
	srand(time(0));
	int i = rand();

	if (!(i % 3))
	{
		std::cout << "returning A" << std::endl;
		return (new A);
	}
	if (!(i % 4))
	{
		std::cout << "returning B" << std::endl;
		return (new B);
	}
	std::cout << "returning C" << std::endl;
	return (new C);
}

void identify(Base* p)
{
	A	*a;
	B	*b;
	C	*c;

	a = dynamic_cast<A *>(p);
	if (a)
	{
		std::cout << "base type is: A" << std::endl;
		return ;
	}
	b = dynamic_cast<B *>(p);
	if (b)
	{
		std::cout << "base type is: B" << std::endl;
		return ;
	}
	c = dynamic_cast<C *>(p);
	if (c)
	{
		std::cout << "base type is: C" << std::endl;
		return ;
	}
	std::cout << "base type is unknown" << std::endl;
}

void identify(Base& p)
{
	try{
		A	a = dynamic_cast<A &>(p);
	}
	catch(const std::exception& e)
	{
		try{
			B	b = dynamic_cast<B &>(p);
		}
		catch(const std::exception& e)
		{
			try{
				C	c = dynamic_cast<C &>(p); 
			}
			catch(const std::exception& e)
			{
				std::cout << "base type is unknown" << std::endl;
				return ;
			}
			std::cout << "base type is: C" << std::endl;
			return;
		}
		std::cout << "base type is: B" << std::endl;
		return ;
	}
	std::cout << "base type is: A" << std::endl;
}

