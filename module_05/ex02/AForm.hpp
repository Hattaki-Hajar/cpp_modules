/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhattaki <hhattaki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/10 18:47:43 by hhattaki          #+#    #+#             */
/*   Updated: 2023/08/13 16:14:55 by hhattaki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

class Bureaucrat;

class	AForm
{
	const std::string	name;
	bool				sign;
	const int			sign_grade;
	const int			exec_grade;

public:
	/* Canonical form */
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
// 	Form(const Form &copy);
// 	Form &operator=(const Form &other);
// 	~Form();
// 	/* getters */
// 	const std::string	&GetName() const;
// 	bool				GetSign() const;
// 	int					GetSignGrade() const;
// 	int					GetExecGrade() const;
// 	/* additional funcs */
// 	void	beSigned(Bureaucrat &B);
};

std::ostream& operator<<(std::ostream &os, const AForm& F);

#include "Bureaucrat.hpp"