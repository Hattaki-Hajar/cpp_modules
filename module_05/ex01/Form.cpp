/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhattaki <hhattaki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/09 16:17:35 by hhattaki          #+#    #+#             */
/*   Updated: 2023/08/10 18:20:54 by hhattaki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form(): name("7osn sira"),sign_grade(150),exec_grade(150)
{
	sign = false;
	std::cout << "Default constructor called" << std::endl;
}

Form::Form(std::string Name, int Sign, int exec)
:name(Name), sign_grade(Sign), exec_grade(exec)
{
	if (Sign < 1 || exec < 1)
		throw Bureaucrat::GradeTooHighException();
	if (Sign > 150 || exec > 150)
		throw Bureaucrat::GradeTooLowException();
	sign = false;
	std::cout << "Parameterized constructor called" << std::endl;
}

Form::Form(const Form &copy)
:name(copy.name), sign_grade(copy.sign_grade), exec_grade(copy.exec_grade)
{
	*this = copy;
	std::cout << "Copy constructor called" << std::endl; 
}

Form &Form::operator=(const Form &other)
{
	sign = copy.sign;
	return (*this);
}

bool Form::GetSign() const
{
	return (sign);
}

int Form::GetSignGrade() const
{
	return (sign_grade);
}

int Form::GetExecGrade() const
{
	return (exec_grade);
}

const std::string &Form::GetName() const
{
	return (name);
}

void	Form::beSigned(Bureaucrat &B)
{
	if (B.getGrade() > this->sign_grade)
	{
		throw Bureaucrat::GradeTooLowException();
		return ;
	}
	this->sign = true;
}

Form::~Form()
{
	std::cout << "Destructor called" << std::endl;
}

std::ostream& operator<<(std::ostream &os, const Form& F)
{
	std::cout << F.GetName() << " Form, signed: " << F.GetSign()
	<< ", can be signed with grade " << F.GetSignGrade()
	<< " and can be executed by grade " << F.GetExecGrade() << std::endl;
	return (os);
}
