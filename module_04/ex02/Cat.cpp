/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhattaki <hhattaki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/28 22:24:19 by hhattaki          #+#    #+#             */
/*   Updated: 2023/05/30 14:05:13 by hhattaki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat():Animal(), brain(NULL)
{
	std::cout << "Cat default constructor called." << std::endl;
	type = "Cat";
	brain = new Brain();
}

Cat::Cat(const Cat& copy): brain(NULL)
{
	std::cout << "Cat copy constructor called." << std::endl;
	*this = copy;
	brain = new Brain();
}

Cat&	Cat::operator=(const Cat& other)
{
	std::cout << "Cat assignment operator called." << std::endl;
	if (this == &other)
		return *this;
	type = other.type;
	if(brain && other.brain)
		*brain = *(other.brain);
	else
		brain = 0;
	return *this;
}

void	Cat::makeSound() const
{
	std::cout << "Meow Meow :3" << std::endl;
}

void	Cat::setIdeas(void)
{
	if (brain)
		brain->setIdea("No thoughts, head empty!");
}

std::string	Cat::getIdeas(void)
{
	return brain->getIdea();
}

Cat::~Cat()
{
	std::cout << "Cat destructor called." << std::endl;
	if (brain)
		delete brain;
	brain = 0;
}
