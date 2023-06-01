/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhattaki <hhattaki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/28 22:14:06 by hhattaki          #+#    #+#             */
/*   Updated: 2023/05/29 20:36:49 by hhattaki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Animal.hpp"
#include "Brain.hpp"

class	Cat: public Animal
{
	Brain	*brain;

public:
	Cat();
	Cat(const Cat& copy);
	Cat&	operator=(const Cat& other);
	~Cat();

	void	setIdeas(void);
	std::string	getIdeas(void);
	void	makeSound() const;
};
