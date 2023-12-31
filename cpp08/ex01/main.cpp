/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dofranci <dofranci@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/08 09:56:47 by dofranci          #+#    #+#             */
/*   Updated: 2023/12/08 09:56:49 by dofranci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int main()
{
	Span sp = Span(5);
	sp.addNumber(6);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);
	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;
	return 0;
}

/*
int main(void) 
{
	{
		Span sp = Span(4);
			
		sp.addNumber(7);
		sp.addNumber(3);
		sp.addNumber(17);
		sp.addNumber(9);
		sp.addNumber(11);

		std::cout << "Size:" << sp.getSize() << std::endl;
		std::cout << "Shortest:" << sp.shortestSpan() << std::endl;
		std::cout << "Longest:" << sp.longestSpan() << std::endl;
	}

	std::cout << std::endl;

	{
		Span sp = Span(100000);
		sp.addAllNumber();

		std::cout << "Size:" << sp.getSize() << std::endl;
		std::cout << "Shortest:" << sp.shortestSpan() << std::endl;
		std::cout << "Longest:" << sp.longestSpan() << std::endl;  
	}

	return (0);
}*/
