/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dofranci <dofranci@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 19:03:05 by dofranci          #+#    #+#             */
/*   Updated: 2023/10/31 22:46:35 by dofranci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(void) : Animal("Dog") 
{ 
	_brain = new Brain;
	std::cout << "Dog default constructor called!" << std::endl; 
}

Dog::Dog(const Dog &old) : Animal(old)
{
	std::cout << "Dog copy constructor called!" << std::endl;
	*this = old;
}

Dog::~Dog(void) 
{
	delete _brain;
	std::cout << "Dog default destructor called!" << std::endl; 
}

Dog &Dog::operator=(const Dog &old)
{
	std::cout << "Dog copy assignment operator called!" << std::endl;
	if (this != &old)
	{
		_type = old._type;
		*_brain = *old._brain;
	}
	return(*this);
}

void Dog::makeSound(void) const { std::cout << "Woof! Woof!" << std::endl; }
std::string Dog::getType(void) const { return(_type); }

void Dog::printIdeas(void) const
{
	for (int i = 0; i < 100; i++) {
		std::cout << _brain->getBrain()[i] << std::endl;
	}
}
