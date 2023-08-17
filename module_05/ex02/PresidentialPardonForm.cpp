/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhattaki <hhattaki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/12 16:00:04 by hhattaki          #+#    #+#             */
/*   Updated: 2023/08/13 13:44:02 by hhattaki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm()
:AForm("PresidentialPardonForm", 25, 5), target("home")
{
	SetSign(false);
}

PresidentialPardonForm::PresidentialPardonForm(std::string Target)
:AForm("PresidentialPardonForm", 25, 5), target(Target)
{
	SetSign(false);
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm &copy)
:AForm("PresidentialPardonForm", 25, 5)
{
	target = copy.getTarget();
}

PresidentialPardonForm	&PresidentialPardonForm::operator=(PresidentialPardonForm &other)
{
	target = other.getTarget();
	return (*this);
}

const std::string	&PresidentialPardonForm::getTarget(void) const
{
	return (target);
}

void	PresidentialPardonForm::execute(Bureaucrat const & executor) const
{
	if (!GetSign())
	{
		throw AForm::not_signed();
		return ;
	}
	if (executor.getGrade() > GetSignGrade() || executor.getGrade() > GetExecGrade())
	{
		throw Bureaucrat::GradeTooLowException();
		return ;
	}
	std::cout << target << " has been pardoned by Zaphod Beeblebrox." << std::endl;
}

PresidentialPardonForm::~PresidentialPardonForm()
{
	std::cout << "PresidentialPardonForm destructor called" << std::endl;
}
