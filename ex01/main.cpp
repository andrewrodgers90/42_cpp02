/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arodgers <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/29 13:30:29 by arodgers          #+#    #+#             */
/*   Updated: 2024/08/15 13:46:07 by arodgers         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int	main(void)
{
//	Fixed	a;
//	Fixed	const b(10);
	Fixed	const c(3.3f);
//	Fixed	const d(b);

//	a = Fixed(1234.4321f);

//	std::cout << "a is " << a << std::endl;
//	std::cout << "b is " << b << std::endl;
	std::cout << "c is " << c << std::endl;
//	std::cout << "d is " << d << std::endl;

//	std::cout << "a is " << a.toInt() << " as integer" << std::endl;
//	std::cout << "b is " << b.toInt() << " as integer" << std::endl;
	std::cout << "c is " << c.toInt() << " as integer" << std::endl;
//	std::cout << "d is " << d.toInt() << " as integer" << std::endl;
	return (0);
}
