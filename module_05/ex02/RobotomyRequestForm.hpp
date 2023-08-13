/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhattaki <hhattaki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/12 15:56:44 by hhattaki          #+#    #+#             */
/*   Updated: 2023/08/13 13:42:52 by hhattaki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "AForm.hpp"

class	RobotomyRequestForm: public AForm
{
	const	std::string	target;
public:
	/* Canonical form */
	RobotomyRequestForm();
	RobotomyRequestForm(std::string Target);
	RobotomyRequestForm(RobotomyRequestForm &copy);
	RobotomyRequestForm	&operator=(RobotomyRequestForm &other);
	~RobotomyRequestForm();
	/* getter */
	const std::string	&getTarget(void) const;
	/* Additional func */
	void	execute(Bureaucrat const & executor) const;
};
