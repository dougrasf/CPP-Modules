/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dofranci <dofranci@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 19:06:25 by dofranci          #+#    #+#             */
/*   Updated: 2023/10/25 22:08:28 by dofranci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main(void)
{
	ClapTrap zezinho("Zezinho");
	ScavTrap luizinho("Luizinho");

	std::cout << std::endl;
	zezinho.stats();
	luizinho.stats();
	
	luizinho.attack("Zezinho");
	zezinho.takeDamage(luizinho.getAttack());
	std::cout << std::endl;
	luizinho.stats();
	zezinho.stats();	
	
	luizinho.attack("Zezinho");
	zezinho.takeDamage(luizinho.getAttack());
	std::cout << std::endl;
	luizinho.stats();
	zezinho.stats();	
	
	luizinho.guardGate();
	std::cout << std::endl;
	return(0);
}
