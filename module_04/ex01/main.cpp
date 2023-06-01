/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhattaki <hhattaki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/29 15:23:48 by hhattaki          #+#    #+#             */
/*   Updated: 2023/05/31 14:51:17 by hhattaki         ###   ########.fr       */
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

void	func2()
{
	Cat a;
	Cat b(a);
	
	a.setIdeas();
	std::cout << "***************" << b.getIdeas() << std::endl;
	std::cout << "***************" << a.getIdeas() << std::endl;
}

int main()
{
	func1();
	func2();
	system("leaks Brain");	
}
