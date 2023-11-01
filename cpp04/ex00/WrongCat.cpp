/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongWrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dofranci <dofranci@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 21:24:10 by dofranci          #+#    #+#             */
/*   Updated: 2023/10/30 21:24:25 by dofranci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat(void) : WrongAnimal("WrongCat") { std::cout << "WrongCat default constructor called!" << std::endl; }

WrongCat::WrongCat(const WrongCat &old) : WrongAnimal(old)
{
	std::cout << "WrongCat copy constructor called!" << std::endl;
	*this = old;
}

WrongCat::~WrongCat(void) { std::cout << "WrongCat default destructor called!" << std::endl; }

WrongCat &WrongCat::operator=(const WrongCat &old)
{
	std::cout << "WrongCat copy assignment operator called!" << std::endl;
	if (this != &old)
        _type = old._type;
	return(*this);
}

void WrongCat::makeSound(void) const { std::cout << "Wrong cat sound" << std::endl; }
std::string WrongCat::getType(void) const { return(_type); }
