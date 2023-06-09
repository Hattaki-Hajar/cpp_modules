/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhattaki <hhattaki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/31 20:49:41 by hhattaki          #+#    #+#             */
/*   Updated: 2023/06/09 16:27:43 by hhattaki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure():AMateria("cure")
{
	std::cout << "Cure constructor called." << std::endl;
}

Cure::Cure(const Cure& copy)
{
	(void)copy;
}

Cure&	Cure::operator=(const Cure& other)
{
	(void)other;
	return *this;
}

AMateria* Cure::clone() const
{
	return (new Cure());
}

void Cure::use(ICharacter& target)
{
	std::cout << "* heals " << target.getName() << "’s wounds *" << std::endl;
}

Cure::~Cure()
{
	std::cout << "Cure destructor called." << std::endl;
}