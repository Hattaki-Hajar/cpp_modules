/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhattaki <hhattaki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/31 22:27:51 by hhattaki          #+#    #+#             */
/*   Updated: 2023/06/09 18:35:11 by hhattaki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice():AMateria("ice")
{
	std::cout << "Ice constructor called." << std::endl;
}

Ice::Ice(const Ice& copy)
{
	(void)copy;
}

Ice&	Ice::operator=(const Ice& other)
{
	(void)other;
	return *this;
}

AMateria* Ice::clone() const
{
	return (new Ice());
}

void Ice::use(ICharacter& target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}

Ice::~Ice()
{
	std::cout << "Ice destructor called." << std::endl;
}