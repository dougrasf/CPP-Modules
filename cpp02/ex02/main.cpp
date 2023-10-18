/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dofranci <dofranci@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 15:15:06 by dofranci          #+#    #+#             */
/*   Updated: 2023/10/16 18:49:30 by dofranci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int main(void)
{
	Fixed a(10);
	Fixed b(2);

	std::cout << "a:" << a << std::endl;
	std::cout << "b:" << b << std::endl;
	if(a < b)
		std::cout << "a menor que b" << std::endl;
	if(a > b)
		std::cout << "a maior que b" << std::endl;
	if(a >= b)
		std::cout << "a maior igual a b" << std::endl;
	if(a <= b)
		std::cout << "a menor igual a b" << std::endl;
	if(a == b)
		std::cout << "a igual a b" << std::endl;
	if(a != b)
		std::cout << "a diferente de b" << std::endl;

	Fixed temp(a + b);
	std::cout << "a + b = " << temp << std::endl;

	temp = a - b;
	std::cout << "a - b = " << temp << std::endl;

	temp = a * b;
	std::cout << "a * b = " << temp << std::endl;

	temp = a / b;
	std::cout << "a / b = " << temp << std::endl;

	a++;
	std::cout << "a++ = " << a << std::endl;	

	b--;
	std::cout << "b-- = " << b << std::endl;	

	return(0);
}

// int main(void)
// {
	// Fixed a;
	// Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
// 
	// std::cout << a << std::endl;
	// std::cout << ++a << std::endl;
	// std::cout << a << std::endl;
	// std::cout << a++ << std::endl;
	// std::cout << a << std::endl;
// 
	// std::cout << b << std::endl;
// 
	// std::cout << Fixed::max( a, b ) << std::endl;
// 
	// return 0;
// }
