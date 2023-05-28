/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhattaki <hhattaki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/28 22:14:06 by hhattaki          #+#    #+#             */
/*   Updated: 2023/05/28 23:11:35 by hhattaki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Animal.hpp"

class	Cat: public Animal
{
public:
	Cat();
	Cat(const Cat& copy);
	Cat&	operator=(const Cat& other);
	~Cat();

	void	makeSound() const;
};

class	WrongCat: public WrongAnimal
{
public:
	WrongCat();
	WrongCat(const WrongCat& copy);
	WrongCat&	operator=(const WrongCat& other);
	~WrongCat();

	void	makeSound() const;
};
