/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dofranci <dofranci@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 19:06:28 by dofranci          #+#    #+#             */
/*   Updated: 2023/10/26 21:54:09 by dofranci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(const std::string name) : ClapTrap(name)
{
	std::cout << "FragTrap constructor called!" << std::endl;
    hitPoints = 100;
    energyPoints = 100;
    attackDamage = 30;
}

FragTrap::FragTrap(const FragTrap &old) : ClapTrap(old._name)
{
	std::cout << "FragTrap constructor called!" << std::endl;
	*this = old;
}

FragTrap::~FragTrap(void)
{
	std::cout << "FragTrap destructor called!" << std::endl;
}

FragTrap &FragTrap::operator=(const FragTrap &old)
{
	std::cout << "FragTrap copy assignment operator called!" << std::endl;
	if (this != &old)
	{
		this->_name = old._name;
		this->hitPoints = old.hitPoints;
		this->energyPoints = old.energyPoints;
		this->attackDamage = old.attackDamage;
	}
	return(*this);
}

void	FragTrap::attack(const std::string &target)
{
	if(!isAlive())
		return;
	if(!hasEnergy())
		return;
	std::cout << "FragTrap " << _name << " attacks " << target 
			  << ", causing " << attackDamage << " points of damage!"
			  << std::endl;
	energyPoints -= 1;
}

void	FragTrap::highFivesGuys( void ) 
{
	std::cout << _name << ": HighfivesGuys" << std::endl;
}
