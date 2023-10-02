/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dofranci <dofranci@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 20:10:25 by dofranci          #+#    #+#             */
/*   Updated: 2023/09/28 20:26:17 by dofranci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA( std::string name, Weapon &weapon ) : _name(name), _weapon(weapon)
{
    std::cout << "HumanA constructor called" << std::endl;
}

HumanA::~HumanA(void)
{
    std::cout << "HumanA destructor called" << std::endl;
}

void HumanA::attack(void)
{
    std::cout << _name << " attacks with their " << _weapon.getType() << std::endl;
}
