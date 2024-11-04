/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arodgers <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/29 13:30:29 by arodgers          #+#    #+#             */
/*   Updated: 2024/08/14 14:19:48 by arodgers         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include "Point.hpp"


void	inside(void)
{
	std::cout << GREEN << "TRUE" << RESET << std::endl;
	std::cout << "   /\\   " << std::endl;
	std::cout << "  /  \\  " << std::endl;
	std::cout << " /" << GREEN << "  x" << RESET << " \\ " << std::endl;
	std::cout << "/______\\" << std::endl;
}

void	outside(void)
{
	std::cout << RED << "FALSE" << RESET << std::endl;
	std::cout << "   /\\   " << std::endl;
	std::cout << "  /  \\  " << std::endl;
	std::cout << " /    \\  " << RED << "x" << RESET << std::endl;
	std::cout << "/______\\" << std::endl;
}

bool	bsp(Point const a, Point const b, Point const c, Point const point);

int	main(void)
{
	const Point a(10, 10);
	const Point b(10, 50);
	const Point c(50, 10);
	const Point point(20, 20);

	const Point d(0, 0);
	const Point e(10, 10);
	const Point f(0, 10);

	bool value = bsp(a, b, c, point);

	std::cout << std::endl;

	if (value)
		inside();
	else
		outside();
	
	std::cout << std::endl;

	bool value2 = bsp(d, e, f, point);

	if (value2)
		inside();
	else
		outside();
	return (0);
}
