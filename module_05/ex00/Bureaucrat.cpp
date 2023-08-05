/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhattaki <hhattaki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/04 16:47:36 by hhattaki          #+#    #+#             */
/*   Updated: 2023/08/04 21:35:58 by hhattaki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(void):name("Mjhol lhawiya")
{
	std::cout << "Default constructor called" << std::endl;
	grade = 150;
}

Bureaucrat::Bureaucrat(std::string Name, int grade):name(Name)
{
	std::cout << "Parameterized constructor called" << std::endl;
	grade = grade;
}

const std::string&	Bureaucrat::getName(void)
{
	return (name);
}

int	Bureaucrat::getGrade(void)
{
	return (grade);
}
