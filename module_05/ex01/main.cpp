/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhattaki <hhattaki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/05 14:34:58 by hhattaki          #+#    #+#             */
/*   Updated: 2023/08/10 18:05:55 by hhattaki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int main()
{
	try
	{
		Form	F("whatever", 5, 10);
		Form	N("whatever", 5, 10);
		Bureaucrat	B("jonas", 4);
		
		std::cout << B;		
		std::cout << F;		
		std::cout << N;
		F.beSigned(B);
		std::cout << F;
		B.decrement_grade();		
		B.decrement_grade();
		B.signForm(N);
		B.signForm(F);
		// N.beSigned(B);
	}
    catch(std::exception &exp)
	{
		std::cerr << exp.what() << std::endl;
		return 1;
	}
}
