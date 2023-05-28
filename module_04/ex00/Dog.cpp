/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhattaki <hhattaki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/28 22:26:03 by hhattaki          #+#    #+#             */
/*   Updated: 2023/05/28 22:49:18 by hhattaki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog():Animal("Dog")
{
	std::cout << "Dog default constructor called." << std::endl;
}

Dog::Dog(const Dog& copy)
{
	std::cout << "Dog copy constructor called." << std::endl;
	*this = copy;
}

Dog&	Dog::operator=(const Dog& other)
{
	if (this == &other)
		return *this;
	type = other.type;
	std::cout << "Dog assignment operator called." << std::endl;
	return *this;
}

void	Dog::makeSound() const
{
	std::cout << "Woof Woof" << std::endl;
}

Dog::~Dog()
{
	std::cout << "Dog destructor called." << std::endl;
}