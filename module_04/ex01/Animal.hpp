/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhattaki <hhattaki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/28 22:11:43 by hhattaki          #+#    #+#             */
/*   Updated: 2023/05/29 17:14:13 by hhattaki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

class	Animal
{
protected:
	std::string type;

public:
	Animal();
	Animal(std::string name);
	Animal(const Animal& copy);
	Animal&	operator=(const Animal& other);
	virtual~Animal();

	std::string	getType() const;

	virtual void	makeSound() const;
};
