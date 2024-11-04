/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arodgers <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/04 13:37:35 by arodgers          #+#    #+#             */
/*   Updated: 2024/09/14 18:52:33 by arodgers         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

float	getProduct(const Point a, const Point b, const Point c)
{
	return (a.getX().toFloat() * ((b.getY().toFloat() - c.getY().toFloat())));
}

float	getArea(const Point a, const Point b, const Point c)
{
	float	area;

	area = (getProduct(a, b, c) + getProduct(b, c, a) + getProduct(c, a, b)) / 2;

	return (area >= 0 ? area : area * -1);
}

bool	bsp(Point const a, Point const b, Point const c, Point const point)
{
	bool	ret = false;
	float	totalArea;
	float	subTriangle1;
	float	subTriangle2;
	float	subTriangle3;

	totalArea = getArea(a, b, c);
	subTriangle1 = getArea(point, a, b);
	subTriangle2 = getArea(point, a, c);
	subTriangle3 = getArea(point, b, c);

	if (subTriangle1 == 0 || subTriangle2 == 0 || subTriangle3 == 0)
		return (false);
	if (subTriangle1 + subTriangle2 + subTriangle3 == totalArea)
		ret = true;
	return (ret);
}
