/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhattaki <hhattaki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/28 22:16:45 by hhattaki          #+#    #+#             */
/*   Updated: 2023/05/28 23:12:48 by hhattaki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal():type("Default")
{
	std::cout << "Animal default constructor called." << std::endl;
}

Animal::Animal(std::string name)
{
	type = name;
	std::cout << "Animal parametric constructor called." << std::endl;
}

Animal::Animal(const Animal& copy)
{
	std::cout << "Animal copy constructor called." << std::endl;
	*this = copy;
}

Animal&	Animal::operator=(const Animal& other)
{
	if (this == &other)
		return *this;
	type = other.type;
	std::cout << "Animal assignment operator called." << std::endl;
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
//////////////////////
WrongAnimal::WrongAnimal():type("Default")
{
	std::cout << "WrongAnimal default constructor called." << std::endl;
}

WrongAnimal::WrongAnimal(std::string name)
{
	type = name;
	std::cout << "WrongAnimal parametric constructor called." << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal& copy)
{
	std::cout << "WrongAnimal copy constructor called." << std::endl;
	*this = copy;
}

WrongAnimal&	WrongAnimal::operator=(const WrongAnimal& other)
{
	if (this == &other)
		return *this;
	type = other.type;
	std::cout << "WrongAnimal assignment operator called." << std::endl;
	return *this;
}

std::string	WrongAnimal::getType() const
{
	return (type);
}

void	WrongAnimal::makeSound() const
{
	std::cout << "'some noise'" << std::endl;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "WrongAnimal destructor called." << std::endl;
}
