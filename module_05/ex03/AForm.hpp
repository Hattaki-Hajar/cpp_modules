/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhattaki <hhattaki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/10 18:47:43 by hhattaki          #+#    #+#             */
/*   Updated: 2023/08/20 15:03:27 by hhattaki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <exception>

class Bureaucrat;

class	AForm
{
	const std::string	name;
	bool				sign;
	const int			sign_grade;
	const int			exec_grade;

public:
	/* Canonical form */ ///////////
	AForm();
	AForm(std::string Name, int Sign, int exec);
	AForm(const AForm &copy);
	AForm &operator=(const AForm &other);
	virtual ~AForm();
	/* Setters */
	void	SetSign(bool b);
	/* Getters */
	int		GetSignGrade(void) const;
	int		GetExecGrade(void) const;
	bool	GetSign(void) const;
	const std::string &GetName() const;
	/* Additional func */
	void	beSigned(Bureaucrat &B);
	virtual void execute(Bureaucrat const & executor) const = 0;
	/* exception */
	class not_signed: public std::exception
	{
		public:
			virtual const char *what() const throw(); 
	};
};

std::ostream& operator<<(std::ostream &os, const AForm& F);

#include "Bureaucrat.hpp"