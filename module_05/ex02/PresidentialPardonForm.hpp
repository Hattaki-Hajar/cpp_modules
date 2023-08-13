/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhattaki <hhattaki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/12 15:59:43 by hhattaki          #+#    #+#             */
/*   Updated: 2023/08/13 13:43:18 by hhattaki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "AForm.hpp"

class	PresidentialPardonForm: public AForm
{
	const	std::string	target;
public:
	/* Canonical form */
	PresidentialPardonForm();
	PresidentialPardonForm(std::string Target);
	PresidentialPardonForm(PresidentialPardonForm &copy);
	PresidentialPardonForm	&operator=(PresidentialPardonForm &other);
	~PresidentialPardonForm();
	/* getter */
	const std::string	&getTarget(void) const;
	/* Additional func */
	void	execute(Bureaucrat const & executor) const;
};
