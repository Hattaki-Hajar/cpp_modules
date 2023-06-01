/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhattaki <hhattaki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/29 14:34:10 by hhattaki          #+#    #+#             */
/*   Updated: 2023/05/29 20:38:08 by hhattaki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
	std::cout << "Brain default constructor called" << std::endl;
}

Brain::Brain(const Brain& copy)
{
	*this = copy;
	std::cout << "Brain copy constructor called" << std::endl;
}

Brain&	Brain::operator=(const Brain&	other)
{
	std::cout << "Brain assignment operator called." << std::endl;
	if (this == &other)
		return *this;
	int i = -1;
	while (++i < 100)
		ideas[i] = other.ideas[i];
	return *this;
}

void	Brain::setIdea(std::string add)
{
	ideas[0] = add;
}

std::string	Brain::getIdea(void)
{
	return (ideas[0]);
}

Brain::~Brain()
{
	std::cout << "Brain destructor called" << std::endl;
}
