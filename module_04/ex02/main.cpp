/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhattaki <hhattaki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/29 15:23:48 by hhattaki          #+#    #+#             */
/*   Updated: 2023/05/31 16:58:46 by hhattaki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"

void	func1()
{
	int i;
	Animal* a[10];
	for(i = 0;  i < 5; i++)
		a[i] = new Cat();
	for(i = 5;  i < 10; i++)
		a[i] = new Dog();
	for (i = 0; i < 10; i++)
		delete a[i];
}

int main()
{
	// Animal	a;
	Cat	a;
	a.makeSound();
	// func1();
}
