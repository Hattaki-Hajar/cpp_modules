/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhattaki <hhattaki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/22 19:09:10 by hhattaki          #+#    #+#             */
/*   Updated: 2023/05/23 14:09:25 by hhattaki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Fixed	getArea(Point const a, Point const b, Point const c)
{
	Fixed div1, div2, div3 , half(0.5f);
	div1 = a.getX() * (b.getY() - c.getY());
	div2 = b.getX() * (c.getY() - a.getY());
	div3 = c.getX() * (a.getY() - b.getY());
	Fixed rslt , zero(0);
	rslt = div1 + div2 + div3;
	
	if (rslt < zero)
		rslt = rslt * Fixed(-1);
	return rslt;
	
}

bool bsp(Point const a, Point const b, Point const c, Point const point)
{
	Fixed At, a1, a2, a3, zero(0);

	At = getArea(a, b, c);
	a1 = getArea(point, b, c);
	a2 = getArea(a, point, c);
	a3 = getArea(a, b, point);
	if (a1 == zero || a2 == zero || a3 == zero)
		return false;
	if ((a1 + a2 + a3) == At)
		return true;
	return false;
}