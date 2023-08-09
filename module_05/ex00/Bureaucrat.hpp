/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhattaki <hhattaki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/04 16:37:48 by hhattaki          #+#    #+#             */
/*   Updated: 2023/08/09 14:43:01 by hhattaki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

class	Bureaucrat
{
	const std::string name;
	int	grade;

public:
	Bureaucrat(void);
	Bureaucrat(std::string Name, int Grade);
	~Bureaucrat(void);
	const std::string&	getName(void); 
	int	getGrade(void);
	void	increment_grade(void);
	void	decrement_grade(void);
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
