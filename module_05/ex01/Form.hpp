/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhattaki <hhattaki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/09 16:01:38 by hhattaki          #+#    #+#             */
/*   Updated: 2023/08/10 16:50:28 by hhattaki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

class Bureaucrat;

class	Form
{
    const std::string	name;
    bool				sign;
    const int			sign_grade;
    const int			exec_grade;

public:
	/* Canonical form */
	Form();
	Form(std::string Name, int Sign, int exec);
	Form(const Form &copy);
	Form &operator=(const Form &other);
	~Form();
	/* getters */
	const std::string	&GetName() const;
	bool				GetSign() const;
	int					GetSignGrade() const;
	int					GetExecGrade() const;
	/* additional funcs */
	void	beSigned(Bureaucrat &B);
};

std::ostream& operator<<(std::ostream &os, const Form& F);

#include "Bureaucrat.hpp"