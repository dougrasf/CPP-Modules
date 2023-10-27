/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dofranci <dofranci@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 19:06:44 by dofranci          #+#    #+#             */
/*   Updated: 2023/10/26 20:53:12 by dofranci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

void spendEnergy(ClapTrap &jorginho, ClapTrap &zezinho)
{	
	for(int i = 0; i < 9; i++)
	{
		jorginho.attack("Zezinho");
		zezinho.takeDamage(jorginho.getAttack());
	}
	std::cout << std::endl;
}

int main(void)
{
	ClapTrap jorginho("Jorginho");
	ClapTrap zezinho("Zezinho");

	std::cout << std::endl;
	jorginho.stats();
	zezinho.stats();	
	
	jorginho.attack("Zezinho");
	zezinho.takeDamage(jorginho.getAttack());
	std::cout << std::endl;
	jorginho.stats();
	zezinho.stats();	
	
	jorginho.setAttack(2);
	jorginho.attack("Zezinho");
	zezinho.takeDamage(jorginho.getAttack());
	std::cout << std::endl;
	jorginho.stats();
	zezinho.stats();		

	zezinho.beRepaired(5);
	jorginho.stats();
	zezinho.stats();
	spendEnergy(jorginho, zezinho);
	jorginho.stats();
	zezinho.stats();

	zezinho.attack("Jorginho");
	
	std::cout << std::endl;
	return(0);
}
