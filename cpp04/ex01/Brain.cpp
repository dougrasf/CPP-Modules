/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dofranci <dofranci@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 22:32:27 by dofranci          #+#    #+#             */
/*   Updated: 2023/11/01 19:43:25 by dofranci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain(void) 
{
	std::cout << "Brain default constructor called" << std::endl;
	for (int i = 0; i < 100; i++)
		_ideas[i] = "idea";
}

Brain::Brain( const Brain &old) : _ideas(old._ideas) 
{
	std::cout << "Brain copy constructor called" << std::endl;
}

Brain::~Brain(void)
{
	std::cout << "Brain destructor called" << std::endl;
}

Brain &Brain::operator=( const Brain &old)
{
	for (int i = 0; i < 100; i++)
		_ideas[i] = old._ideas[i];
	return (*this);
}

std::string	*Brain::getBrain(void)
{
	return (_ideas);
}
