/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhattaki <hhattaki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/04 16:47:36 by hhattaki          #+#    #+#             */
/*   Updated: 2023/08/10 16:45:40 by hhattaki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

Bureaucrat::Bureaucrat(void):name("Mjhol lhawiya")
{
	std::cout << "Default constructor called" << std::endl;
	grade = 150;
}

Bureaucrat::Bureaucrat(std::string Name, int Grade):name(Name)
{
	std::cout << "Parameterized constructor called" << std::endl;
	if (Grade < 1)
		throw Bureaucrat::GradeTooHighException();
	else if (Grade > 150)
		throw Bureaucrat::GradeTooLowException();
	grade = Grade;
}

Bureaucrat::Bureaucrat(const Bureaucrat &copy): name(copy.getName())
{
	*this = copy;
	std::cout << "copy constructor called" << std::endl;
}

Bureaucrat	&Bureaucrat::operator=(const Bureaucrat &other)
{
	if (this != &other)
		grade = other.getGrade();
	return (*this);
}

const std::string&	Bureaucrat::getName(void) const
{
	return (name);
}

int	Bureaucrat::getGrade(void) const
{
	return (grade);
}

void	Bureaucrat::increment_grade(void)
{
	if (grade <= 1)
	{
		throw Bureaucrat::GradeTooHighException();
		return ;
	}
	this->grade--;
}

void	Bureaucrat::decrement_grade(void)
{
	if (grade >= 150)
	{
		throw Bureaucrat::GradeTooLowException();
		return ;
	}
	this->grade++;
}

void	Bureaucrat::signForm(Form &F)
{
	if (F.GetSign() == true)
	{
		std::cout << name << " couldn't sign " << F.GetName()
		<< " because the form is already signed" << std::endl;
		return ;
	}
	if (this->grade > F.GetSignGrade())
	{
		std::cout << name << " couldn't sign " << F.GetName()
		<< " because the grade is too low" << std::endl;
		return ;
	}
	F.beSigned(*this);
	std::cout << name << " signed " << F.GetName() << std::endl;
}

const char*Bureaucrat::GradeTooHighException::what() const throw()
{
	return ("Bureaucrat::GradeTooHighException");
}

const char*Bureaucrat::GradeTooLowException::what() const throw()
{
	return ("Bureaucrat::GradeTooLowException");
}

std::ostream&	operator<<(std::ostream &os, const Bureaucrat& B)
{
	std::cout << B.getName() << ", bureaucrat grade " << B.getGrade() << std::endl;
	return (os);
}

Bureaucrat::~Bureaucrat(void)
{
	std::cout << "Destructor called" << std::endl;
}
