/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhattaki <hhattaki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/28 22:26:03 by hhattaki          #+#    #+#             */
/*   Updated: 2023/05/30 13:51:43 by hhattaki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog():Animal(), brain(NULL)
{
	std::cout << "Dog default constructor called." << std::endl;
	type = "Dog";
	brain = new Brain();
}

Dog::Dog(const Dog& copy): brain(NULL)
{
	std::cout << "Dog copy constructor called." << std::endl;
	*this = copy;
	brain = new Brain();
}

Dog&	Dog::operator=(const Dog& other)
{
	std::cout << "Dog assignment operator called." << std::endl;
	if (this == &other)
		return *this;
	type = other.type;
	if(brain && other.brain)
		*brain = *(other.brain);
	else
		brain = 0;
	return *this;
}

void	Dog::makeSound() const
{
	std::cout << "Woof Woof" << std::endl;
}

void	Dog::setIdeas(void)
{
	if (brain)
		brain->setIdea("No thoughts, head empty!");
}

std::string	Dog::getIdeas(void)
{
	return brain->getIdea();
}

Dog::~Dog()
{
	std::cout << "Dog destructor called." << std::endl;
	if (brain)
		delete brain;
	brain = 0;
}
