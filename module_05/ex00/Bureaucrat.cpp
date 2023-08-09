/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhattaki <hhattaki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/04 16:47:36 by hhattaki          #+#    #+#             */
/*   Updated: 2023/08/09 15:51:07 by hhattaki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

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

const std::string&	Bureaucrat::getName(void)
{
	return (name);
}

int	Bureaucrat::getGrade(void)
{
	return (grade);
}

Bureaucrat::~Bureaucrat(void)
{
	std::cout << "Destructor called" << std::endl;
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

const char*Bureaucrat::GradeTooHighException::what() const throw()
{
	return ("Bureaucrat::GradeTooHighException");
}

const char*Bureaucrat::GradeTooLowException::what() const throw()
{
	return ("Bureaucrat::GradeTooLowException");
}
