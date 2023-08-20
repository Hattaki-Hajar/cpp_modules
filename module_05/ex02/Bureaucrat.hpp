/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhattaki <hhattaki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/04 16:37:48 by hhattaki          #+#    #+#             */
/*   Updated: 2023/08/20 14:26:30 by hhattaki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

class	AForm;

class	Bureaucrat
{
	const std::string name;
	int	grade;

public:
	/* Canonical form */
	Bureaucrat(void);
	Bureaucrat(std::string Name, int Grade);
	Bureaucrat(const Bureaucrat &copy);
	Bureaucrat	&operator=(const Bureaucrat &other);
	~Bureaucrat(void);
	/* getters */
	const std::string&	getName(void) const; 
	int					getGrade(void) const;
	/* Additional func */
	void	increment_grade(void);
	void	decrement_grade(void);
	void	signForm(AForm &F);
	void	executeForm(AForm const & form);

	class GradeTooHighException : public std::exception
	{
		public:
			virtual const char* what() const throw();
	};
	class GradeTooLowException : public std::exception
	{
		public:
			virtual const char* what() const throw();
	};
};

std::ostream& operator<<(std::ostream &os, const Bureaucrat& B);

#include "AForm.hpp"
