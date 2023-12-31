/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dofranci <dofranci@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 19:06:39 by dofranci          #+#    #+#             */
/*   Updated: 2023/10/26 20:56:03 by dofranci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

class ClapTrap
{
	protected:
		std::string		_name;
		int	hitPoints;
		unsigned int	energyPoints;
		unsigned int	attackDamage;

	public:
		ClapTrap(void);
		ClapTrap(const std::string name);
		ClapTrap(const ClapTrap &old);
		~ClapTrap(void);
		ClapTrap &operator=(const ClapTrap &old);

		void stats(void);
		void attack(const std::string &target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);

		void			setAttack(const unsigned int amount);
		unsigned int	getAttack(void);
		unsigned int	getEnergy(void);
		bool			isAlive(void);
		bool			hasEnergy(void);
		
};
