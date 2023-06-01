/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhattaki <hhattaki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/28 22:16:25 by hhattaki          #+#    #+#             */
/*   Updated: 2023/05/30 13:52:35 by hhattaki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Animal.hpp"
#include "Brain.hpp"

class	Dog: public Animal
{
	Brain	*brain;

public:
	Dog();
	Dog(const Dog& copy);
	Dog&	operator=(const Dog& other);
	~Dog();

	void	setIdeas(void);
	std::string	getIdeas(void);
	void	makeSound() const;
};