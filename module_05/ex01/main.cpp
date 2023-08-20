/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhattaki <hhattaki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/05 14:34:58 by hhattaki          #+#    #+#             */
/*   Updated: 2023/08/20 14:36:27 by hhattaki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int main()
{
	try
	{
		Form	F("whatever", 5, 10);
		Form	N;
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
	}
    catch(std::exception &exp)
	{
		std::cerr << exp.what() << std::endl;
		return 1;
	}
}
