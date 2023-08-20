/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhattaki <hhattaki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/05 14:34:58 by hhattaki          #+#    #+#             */
/*   Updated: 2023/08/20 14:32:04 by hhattaki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main()
{
    try
    {
        Bureaucrat  B("john", 1);
        Bureaucrat  C(B);
        std::cout << "name: " << B.getName() << std::endl;
        std::cout << "grade: " << B.getGrade() << std::endl;

        std::cout << "name: " << C.getName() << std::endl;
        std::cout << "grade: " << C.getGrade() << std::endl;
        std::cout << B;
        std::cout << C;
        B.decrement_grade();
        B.decrement_grade();
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
