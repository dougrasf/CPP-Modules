/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dofranci <dofranci@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 19:03:05 by dofranci          #+#    #+#             */
/*   Updated: 2023/10/27 19:42:00 by dofranci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal(void) : _type("Domestic") { std::cout << "Animal default constructor called!" << std::endl; }
Animal::Animal(const std::string type) : _type(type) { std::cout << "Animal constructor called!" << std::endl; }

Animal::Animal(const Animal &old)
{
	std::cout << "Animal copy constructor called!" << std::endl;
	*this = old;
}

Animal::~Animal(void) { std::cout << "Animal default destructor called!" << std::endl; }

Animal &Animal::operator=(const Animal &old)
{
	std::cout << "Animal copy assignment operator called!" << std::endl;
	if (this != &old)
        _type = old._type;
	return(*this);
}

void Animal::makeSound(void) const { std::cout << "Some generic domestic animal sound" << std::endl; }
std::string Animal::getType(void) const { return(_type); }  
