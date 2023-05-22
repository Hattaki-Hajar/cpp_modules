/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhattaki <hhattaki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/22 19:44:34 by hhattaki          #+#    #+#             */
/*   Updated: 2023/05/22 22:48:31 by hhattaki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"
int main()
{
    // Define the vertices of the triangle
    Point a(1.0f, 1.0f);
    Point b(3.0f, 1.0f);
    Point c(2.0f, 3.0f);
    // Define a point inside the triangle
    Point insidePoint(2.0f, 2.0f);

    // Define a point outside the triangle
    Point outsidePoint(4.0f, 4.0f);

    // Check if the insidePoint is inside the triangle
    // std::cout << "A :" << a.getX() << ", " << a.getY() << std::endl
	//  << "b :" << b.getX() << ", " << b.getY() << std::endl
	//  << "c :" << c.getX() << ", " << c.getY() << std::endl;
    bool isInside = bsp(a, b, c, insidePoint);
    std::cout << "Point (" << insidePoint.getX().toFloat() 
        << ", " << insidePoint.getY().toFloat() 
        << ") is inside the triangle: " << isInside << std::endl;

    // Check if the outsidePoint is inside the triangle
    isInside = bsp(a, b, c, outsidePoint);
    std::cout << "Point (" << outsidePoint.getX().toFloat()
         << ", " << outsidePoint.getY().toFloat() 
         << ") is inside the triangle: " << isInside << std::endl;

    // Define a point on the edge of the triangle
    Point edgePoint(4.0f, 1.0f);

    // Check if the edgePoint is inside the triangle
    isInside = bsp(a, b, c, edgePoint);
    std::cout << "Point (" << edgePoint.getX().toFloat() 
    << ", "  << edgePoint.getY().toFloat() 
    << ") is inside the triangle: " << isInside << std::endl;

    return 0;
}