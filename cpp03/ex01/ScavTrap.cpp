/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dofranci <dofranci@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 19:06:28 by dofranci          #+#    #+#             */
/*   Updated: 2023/10/25 22:09:26 by dofranci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(const std::string name) : ClapTrap(name)
{
	std::cout << "ScavTrap constructor called!" << std::endl;
    hitPoints = 100;
    energyPoints = 50;
    attackDamage = 20;
}

ScavTrap::ScavTrap(const ScavTrap &old) : ClapTrap(old._name)
{
	std::cout << "ScavTrap constructor called!" << std::endl;
	*this = old;
}

ScavTrap::~ScavTrap(void)
{
	std::cout << "ScavTrap destructor called!" << std::endl;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &old)
{
	std::cout << "ScavTrap copy assignment operator called!" << std::endl;
	if (this != &old)
	{
		this->_name = old._name;
		this->hitPoints = old.hitPoints;
		this->energyPoints = old.energyPoints;
		this->attackDamage = old.attackDamage;
	}
	return(*this);
}

void ScavTrap::attack(const std::string &target)
{
	if(!hasEnergy())
		return;
	if(!isAlive())
		return;
	std::cout << "ScavTrap " << _name << " attacks " << target 
			  << ", causing " << attackDamage << " points of damage!"
			  << std::endl;
	energyPoints -= 1;
}

void	ScavTrap::guardGate( void ) 
{
	std::cout << _name << " is now in Gate keeper mode" << std::endl;
}
