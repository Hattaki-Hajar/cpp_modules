/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhattaki <hhattaki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/11 15:25:03 by hhattaki          #+#    #+#             */
/*   Updated: 2023/08/13 14:25:59 by hhattaki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "AForm.hpp"
#include <fstream>

class	ShrubberyCreationForm: public AForm
{
	std::string	target;
public:
	/* Canonical form */
	ShrubberyCreationForm();
	ShrubberyCreationForm(std::string Target);
	ShrubberyCreationForm(ShrubberyCreationForm &copy);
	ShrubberyCreationForm	&operator=(ShrubberyCreationForm &other);
	~ShrubberyCreationForm();
	/* getter */
	const std::string	&getTarget(void) const;
	/* Additional func */
	void	execute(Bureaucrat const & executor) const;
	
};
