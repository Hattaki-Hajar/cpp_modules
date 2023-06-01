/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhattaki <hhattaki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/28 22:16:45 by hhattaki          #+#    #+#             */
/*   Updated: 2023/05/29 17:30:13 by hhattaki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal():type("Default")
{
	std::cout << "Animal default constructor called." << std::endl;
}

Animal::Animal(std::string name)
{
	std::cout << "Animal parametric constructor called." << std::endl;
	type = name;
}

Animal::Animal(const Animal& copy)
{
	std::cout << "Animal copy constructor called." << std::endl;
	*this = copy;
}

Animal&	Animal::operator=(const Animal& other)
{
	std::cout << "Animal assignment operator called." << std::endl;
	if (this == &other)
		return *this;
	type = other.type;
	return *this;
}

std::string	Animal::getType() const
{
	return (type);
}

void	Animal::makeSound() const
{
	std::cout << "'some noise'" << std::endl;
}

Animal::~Animal()
{
	std::cout << "Animal destructor called." << std::endl;
}
