/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   source.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dofranci <dofranci@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 15:16:44 by dofranci          #+#    #+#             */
/*   Updated: 2023/11/23 21:55:12 by dofranci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"

Base *generate(void)
{
    int	random;

	srand(time(NULL));
	random = rand() % 3;
	if (random == 0)
	{
		std::cout << "Create class A" << std::endl;
		return (new A);
	}
	else if (random == 1)
	{
		std::cout << "Create class B" << std::endl;
		return (new B);
	}
	else if (random == 2)
	{
		std::cout << "Create class C" << std::endl;
		return (new C);
	}
	return (NULL);
}

void identify(Base *p)
{
    if (dynamic_cast<A*>(p))
		std::cout << "Class pointer is A" << std::endl;
	else if (dynamic_cast<B*>(p))
		std::cout << "Class pointer is B" << std::endl;
	else
		std::cout << "Class pointer is C" << std::endl;
}

void identify(Base &p)
{
    try
	{
		(void)dynamic_cast<A&>(p);
		std::cout << "Class ref is A" << std::endl;
	}
	catch(const std::exception& e)
	{
		try
		{
			(void)dynamic_cast<B&>(p);
			std::cout << "Class ref is B" << std::endl;
		}
		catch(const std::exception& e)
		{
			try
			{
				(void)dynamic_cast<C&>(p);
				std::cout << "Class ref is C" << std::endl;
			}
			catch(const std::exception& e)
			{
				std::cerr << e.what() << std::endl;
			}
		}
	}
}
