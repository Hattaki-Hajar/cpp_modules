/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhattaki <hhattaki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/28 22:16:25 by hhattaki          #+#    #+#             */
/*   Updated: 2023/05/28 22:49:23 by hhattaki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Animal.hpp"

class	Dog: public Animal
{
public:
	Dog();
	Dog(const Dog& copy);
	Dog&	operator=(const Dog& other);
	~Dog();

	void	makeSound() const;
};