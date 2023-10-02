/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dofranci <dofranci@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 20:10:25 by dofranci          #+#    #+#             */
/*   Updated: 2023/09/28 20:23:38 by dofranci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

std::string Weapon::getType(void){return(_type);}
void        Weapon::setType(std::string type){_type = type;}

Weapon::Weapon(std::string type):_type(type)
{
    std::cout << "Weapon constructor called" << std::endl;
}

Weapon::~Weapon(void)
{
    std::cout << "Weapon destructor called" << std::endl;
}
