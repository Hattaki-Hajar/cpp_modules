/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhattaki <hhattaki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/31 20:33:39 by hhattaki          #+#    #+#             */
/*   Updated: 2023/06/01 17:50:30 by hhattaki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria()
{
	std::cout << "Materia constructor called." << std::endl;
}

AMateria::AMateria(std::string const & type)
{
	std::cout << "Materia copy cnstructor called." << std::endl;
	Type = type;
}

AMateria::AMateria(const AMateria& copy)
{
	(void)copy;
}

AMateria&	AMateria::operator=(const AMateria& other)
{
	(void)other;
	return *this;
}

std::string const & AMateria::getType() const
{
	return Type;
}

void AMateria::use(ICharacter& target)
{
	(void)target;
}

AMateria::~AMateria()
{
	std::cout << "Materia destructor called." << std::endl;
}
