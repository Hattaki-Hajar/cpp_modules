/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhattaki <hhattaki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/05 14:34:58 by hhattaki          #+#    #+#             */
/*   Updated: 2023/08/09 15:53:54 by hhattaki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

std::ostream&	operator<<(std::ostream &os, Bureaucrat& B)
{
	std::cout << B.getName() << ", bureaucrat grade " << B.getGrade() << std::endl;
	return (os);
}

int main()
{
    try
    {
        Bureaucrat  C;
        Bureaucrat  B("john", 1);
        std::cout << "name: " << B.getName() << std::endl;
        std::cout << "grade: " << B.getGrade() << std::endl;

        std::cout << "name: " << C.getName() << std::endl;
        std::cout << "grade: " << C.getGrade() << std::endl;
        std::cout << B;
        std::cout << C;
        B.increment_grade();
        std::cout << B;
        std::cout << "grade: " << B.getGrade() << std::endl;
        
        C.increment_grade();
        std::cout << "grade: " << C.getGrade() << std::endl;
    }
    catch(std::exception &exp)
    {
        std::cerr << exp.what() << std::endl;
        return 1;
    }
}
