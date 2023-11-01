/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dofranci <dofranci@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 19:03:05 by dofranci          #+#    #+#             */
/*   Updated: 2023/10/31 22:50:45 by dofranci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(void) : Animal("Cat")
{
	_brain = new Brain;
	 std::cout << "Cat default constructor called!" << std::endl; 
}

Cat::Cat(const Cat &old) : Animal(old)
{
	std::cout << "Cat copy constructor called!" << std::endl;
	*this = old;
}

Cat::~Cat(void) 
{ 
	delete _brain;
	std::cout << "Cat default destructor called!" << std::endl; 
}

Cat &Cat::operator=(const Cat &old)
{
	std::cout << "Cat copy assignment operator called!" << std::endl;
	if (this != &old)
	{
        _type = old._type;
		*_brain = *old._brain;
	}
	return(*this);
}

void Cat::makeSound(void) const { std::cout << "Meow! Meow!" << std::endl; }
std::string Cat::getType(void) const { return(_type); }  

void Cat::printIdeas(void) const
{
	for (int i = 0; i < 100; i++) {
		std::cout << _brain->getBrain()[i] << std::endl;
	}
}