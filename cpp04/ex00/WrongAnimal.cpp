/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongWrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dofranci <dofranci@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 21:12:48 by dofranci          #+#    #+#             */
/*   Updated: 2023/10/30 21:12:56 by dofranci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(void) : _type("Wrong Domestic") { std::cout << "WrongAnimal default constructor called!" << std::endl; }
WrongAnimal::WrongAnimal(const std::string type) : _type(type) { std::cout << "WrongAnimal constructor called!" << std::endl; }

WrongAnimal::WrongAnimal(const WrongAnimal &old)
{
	std::cout << "WrongAnimal copy constructor called!" << std::endl;
	*this = old;
}

WrongAnimal::~WrongAnimal(void) { std::cout << "WrongAnimal default destructor called!" << std::endl; }

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &old)
{
	std::cout << "WrongAnimal copy assignment operator called!" << std::endl;
	if (this != &old)
        _type = old._type;
	return(*this);
}

void WrongAnimal::makeSound(void) const { std::cout << "Wrong domestic animal sound" << std::endl; }
std::string WrongAnimal::getType(void) const { return(_type); }  
