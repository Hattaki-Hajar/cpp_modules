/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhattaki <hhattaki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/11 18:57:32 by hhattaki          #+#    #+#             */
/*   Updated: 2023/08/13 14:59:34 by hhattaki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

AForm::AForm():name("hosn sira"), sign_grade(150), exec_grade(150)
{
	sign = false;
}

AForm::AForm(std::string Name, int Sign, int exec): name(Name), sign_grade(Sign), exec_grade(exec)
{
	sign = false;
}

const char *AForm::not_signed::what() const throw()
{
	return ("Form not signed");
}

bool	AForm::GetSign(void) const
{
	return (sign);
}

int	AForm::GetSignGrade(void) const
{
	return (sign_grade);
}

int	AForm::GetExecGrade(void) const
{
	return (exec_grade);
}

const std::string &AForm::GetName() const
{
	return (name);
}

void	AForm::SetSign(bool b)
{
	sign = b;
}

void	AForm::beSigned(Bureaucrat &B)
{
	if (B.getGrade() > this->sign_grade)
	{
		throw Bureaucrat::GradeTooLowException();
		return ;
	}
	this->sign = true;
}

std::ostream& operator<<(std::ostream &os, const AForm& F)
{
	std::cout << F.GetName() << " Form, signed: " << F.GetSign()
	<< ", can be signed with grade " << F.GetSignGrade()
	<< " and can be executed by grade " << F.GetExecGrade() << std::endl;
	return (os);
}

AForm::~AForm()
{
}
