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
}

RobotomyRequestForm::RobotomyRequestForm(std::string Target)
:AForm("RobotomyRequestForm", 72, 45), target(Target)
{
	SetSign(false);
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm &copy)
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

RobotomyRequestForm::~RobotomyRequestForm()
{
	std::cout << "RobotomyRequestForm destructor called" << std::endl;
}
