/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhattaki <hhattaki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/12 15:57:46 by hhattaki          #+#    #+#             */
/*   Updated: 2023/08/19 15:22:52 by hhattaki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"
#include <stdlib.h>

RobotomyRequestForm::RobotomyRequestForm()
:AForm("RobotomyRequestForm", 72, 45), target("home")
{
	SetSign(false);
}

RobotomyRequestForm::RobotomyRequestForm(std::string Target)
:AForm("RobotomyRequestForm", 72, 45), target(Target)
{
	SetSign(false);
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm &copy)
:AForm("RobotomyRequestForm", 72, 45)
{
	// (void)copy;
	target = copy.getTarget();
}

RobotomyRequestForm	&RobotomyRequestForm::operator=(RobotomyRequestForm &other)
{
	target = other.getTarget();
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
		std::cout << target << "'s robotomy has failed: form not signed"
		<< std::endl;
		throw AForm::not_signed();
		return ;
	}
	if (executor.getGrade() > GetExecGrade())
	{
		std::cout << target << "'s robotomy has failed: grade too low."
		<< std::endl;
		throw Bureaucrat::GradeTooLowException();
		return ;
	}
	std::cout << "*some drilling noise*" << std::endl;
	std::srand(time(0));
	int i = rand();
	if (i % 2)
		std::cout << target
		<< " has been robotomized successfully." << std::endl;
	else
		std::cout << target
		<< "'s robotomy has failed." << std::endl;
}

RobotomyRequestForm::~RobotomyRequestForm()
{
}
