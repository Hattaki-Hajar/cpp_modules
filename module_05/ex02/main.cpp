#include "Bureaucrat.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"

void test1()
{
	ShrubberyCreationForm form1("490");
	Bureaucrat Bob("Bob" , 130);
	Bureaucrat Akira("Akira" , 140);
	std::cout << std::endl;
	Bob.signForm(form1);
	Akira.signForm(form1);
	Akira.executeForm(form1);
	Bob.executeForm(form1);
	std::cout << std::endl;
}

void	test2()
{
	RobotomyRequestForm form2;
	RobotomyRequestForm form1(form2);
	Bureaucrat Rick("Rick" , 1);
	Bureaucrat Morty("Morty" , 130);
	Bureaucrat Summer("Summer", 40);
	std::cout << std::endl;
	std::cout << form2;
	Morty.signForm(form1);
	Rick.signForm(form1);
	Morty.executeForm(form1);
	Rick.executeForm(form1);
	Summer.signForm(form1);
	std::cout << std::endl;
}

int main(void)
{
	try
	{
		test1();
		std::cout << "***********test 1 done***********" << std::endl;
		test2();
		std::cout << "***********test 2 done***********" << std::endl;
	}
	catch(std::exception &exp)
	{
		std::cerr << exp.what() << std::endl;
	}
}