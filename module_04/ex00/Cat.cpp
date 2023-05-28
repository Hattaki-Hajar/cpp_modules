/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhattaki <hhattaki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/28 22:24:19 by hhattaki          #+#    #+#             */
/*   Updated: 2023/05/28 23:13:30 by hhattaki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat():Animal("Cat")
{
	std::cout << "Cat default constructor called." << std::endl;
}

Cat::Cat(const Cat& copy)
{
	std::cout << "Cat copy constructor called." << std::endl;
	*this = copy;
}

Cat&	Cat::operator=(const Cat& other)
{
	if (this == &other)
		return *this;
	type = other.type;
	std::cout << "Cat assignment operator called." << std::endl;
	return *this;
}

void	Cat::makeSound() const
{
	std::cout << "Meow Meow :3" << std::endl;
}

Cat::~Cat()
{
	std::cout << "Cat destructor called." << std::endl;
}
//////////////////////////
WrongCat::WrongCat():WrongAnimal("WrongCat")
{
	std::cout << "WrongCat default constructor called." << std::endl;
}

WrongCat::WrongCat(const WrongCat& copy)
{
	std::cout << "WrongCat copy constructor called." << std::endl;
	*this = copy;
}

WrongCat&	WrongCat::operator=(const WrongCat& other)
{
	if (this == &other)
		return *this;
	type = other.type;
	std::cout << "WrongCat assignment operator called." << std::endl;
	return *this;
}

void	WrongCat::makeSound() const
{
	std::cout << "Meow Meow :3" << std::endl;
}

WrongCat::~WrongCat()
{
	std::cout << "WrongCat destructor called." << std::endl;
}