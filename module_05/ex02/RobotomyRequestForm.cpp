/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhattaki <hhattaki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/12 15:57:46 by hhattaki          #+#    #+#             */
/*   Updated: 2023/08/13 13:44:29 by hhattaki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm()
:AForm("RobotomyRequestForm", 72, 45), target("home")
{
	SetSign(false);
	i = 0;
}

RobotomyRequestForm::RobotomyRequestForm(std::string Target)
:AForm("RobotomyRequestForm", 72, 45), target(Target)
{
	SetSign(false);
	i = 0;
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm &copy)
:AForm("RobotomyRequestForm", 72, 45)
{
	(void)copy;
}

RobotomyRequestForm	&RobotomyRequestForm::operator=(RobotomyRequestForm &other)
{
	(void)other;
	return (*this);
}

const std::string	&RobotomyRequestForm::getTarget(void) const
{
	return (target);
}

void	RobotomyRequestForm::execute(Bureaucrat const & executor) const
{
	if (!GetSign())
	{
		std::cout << target << "'s robotomy has failed." << std::endl;
		throw AForm::not_signed();
		return ;
	}
	if (executor.getGrade() > GetSignGrade() || executor.getGrade() > GetExecGrade())
	{
		std::cout << target << "'s robotomy has failed." << std::endl;
		throw Bureaucrat::GradeTooLowException();
		return ;
	}
	std::cout << "*some drilling noise*" << std::endl;
	if (i % 2)
		std::cout << target
		<< " has been robotomized successfully." << std::endl;
	else
		std::cout << target
		<< "'s robotomy has failed." << std::endl;
}

RobotomyRequestForm::~RobotomyRequestForm()
{
	std::cout << "RobotomyRequestForm destructor called" << std::endl;
}
