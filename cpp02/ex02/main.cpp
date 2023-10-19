/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dofranci <dofranci@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 15:15:06 by dofranci          #+#    #+#             */
/*   Updated: 2023/10/18 22:33:34 by dofranci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int main(void)
{
	Fixed a(10);
	Fixed b(2);
	Fixed c(2);
	Fixed const d( Fixed( 5.05f ) * Fixed( 2 ) );

	
	// Comparison
	std::cout << "\n-- COMPARISON OPERATORS TESTS --\n" << std::endl;
	std::cout << "a = " << a << std::endl;
	std::cout << "b = " << b << std::endl;
	std::cout << "c = " << c << std::endl;

	if(b < a)
		std::cout << "\nb < a" << std::endl;
	if(a > b)
		std::cout << "a > b" << std::endl;
	if(a >= b)
		std::cout << "a >= b" << std::endl;
	if(b <= c)
		std::cout << "b <= c" << std::endl;
	if(b == c)
		std::cout << "b == c" << std::endl;
	if(a != b)
		std::cout << "a != b" << std::endl;

	// Arithmetics
	std::cout << "\n-- ARITHMETICS OPERATORS TESTS --\n" << std::endl;
	std::cout << "a = " << a << std::endl;
	std::cout << "b = " << b << std::endl;

	Fixed temp(a + b);
	std::cout << "\na + b = " << temp << std::endl;

	temp = a - b;
	std::cout << "a - b = " << temp << std::endl;

	temp = a * b;
	std::cout << "a * b = " << temp << std::endl;

	temp = a / b;
	std::cout << "a / b = " << temp << std::endl;

	// Increment/decrement
	std::cout << "\n-- INCREMENT/DECREMENT OPERATORS TESTS --\n" << std::endl;
	std::cout << "a = " << a << std::endl;
	std::cout << "a++ = " << a++ << std::endl;
	std::cout << "a = " << a << std::endl;
	std::cout << std::endl; 
	
	std::cout << "b = " << b << std::endl;
	std::cout << "b-- = " << b-- << std::endl;	
	std::cout << "b = " << b << std::endl;
	std::cout << std::endl; 

	std::cout << "a = " << a << std::endl;
	std::cout << "++a = " << ++a << std::endl;	
	std::cout << "a = " << a << std::endl;
	std::cout << std::endl; 

	std::cout << "b = " << b << std::endl;
	std::cout << "--b = " << --b << std::endl;
	std::cout << "b = " << b << std::endl;
	std::cout << std::endl; 

	//  Min and Max member functions
	std::cout << "\n-- MIN/MAX MEMBER FUNCTIONS TESTS --\n" << std::endl;
	std::cout << "a = " << a << std::endl;
	std::cout << "b = " << b << std::endl;
	std::cout << "d = " << d << std::endl;

	std::cout << "\nMax (a, b) = " << Fixed::max(a, b) << std::endl;
	std::cout << "Min (a, b) = " << Fixed::min(a, b) << std::endl;

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
