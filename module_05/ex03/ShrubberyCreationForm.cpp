/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhattaki <hhattaki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/11 18:46:39 by hhattaki          #+#    #+#             */
/*   Updated: 2023/08/13 15:05:17 by hhattaki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm()
:AForm("ShrubberyCreationForm", 145, 137), target("home")
{
	SetSign(false);
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string Target)
:AForm("ShrubberyCreationForm", 145, 137), target(Target)
{
	SetSign(false);
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm &copy)
:AForm("ShrubberyCreationForm", 145, 137)
{
	target = copy.target;
}

ShrubberyCreationForm	&ShrubberyCreationForm::operator=(ShrubberyCreationForm &other)
{
	target = other.getTarget();
	return (*this);
}

const std::string	&ShrubberyCreationForm::getTarget(void) const
{
	return (target);
}

void	ShrubberyCreationForm::execute(Bureaucrat const & executor) const
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
	std::string	file = target, tree;
	std::ofstream	out;

	out.open(file.append("_Shrubbery").c_str(), std::ios::out);
	tree =
	"                       ,@@@@@@@,      \n"
    "   ,,,.   ,@@@@@@/@@,  .oo8888o.      \n"
    ",&%%&%&&%,@@@@@/@@@@@@,8888\\88/8o    \n"
	",%&\\%&&%&&%,@@@\\@@@/@@@88\\88888/88'\n"
	"%&&%&%&/%&&%@@\\@@/ /@@@88888\\88888' \n"
	"%&&%/ %&%%&&@@\\ V /@@' `88\\8 `/88'  \n"
	"`&%\\ ` /%&'  |.|       \\ '|8'       \n"
	"   |o|        | |         | |         \n"
    "   |.|        | |         | |         \n"
	"\\/ ._\\//_/__/  ,\\_//__\\/.  \\_//__/_";
	out << tree;
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
}
