/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dofranci <dofranci@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 19:06:44 by dofranci          #+#    #+#             */
/*   Updated: 2023/10/26 21:25:02 by dofranci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

void spendEnergy(ClapTrap &jorginho)
{	
	for(int i = 0; i < 49; i++)
		jorginho.beRepaired(1);
	std::cout << std::endl;
}

int main(void)
{
	ClapTrap zezinho("Zezinho Clap");
	ScavTrap jorginho("Jorginho Scav");

	std::cout << std::endl;
	jorginho.stats();
	zezinho.stats();	

	zezinho.beRepaired(90);
	jorginho.attack("Zezinho Clap");
	zezinho.takeDamage(jorginho.getAttack());

	std::cout << std::endl;
	jorginho.stats();
	zezinho.stats();	

	spendEnergy(jorginho);

	std::cout << std::endl;
	jorginho.stats();
	zezinho.stats();

	jorginho.attack("Zezinho Clap");
	zezinho.setAttack(148);
	zezinho.attack("Jorginho Scav");
	jorginho.takeDamage(zezinho.getAttack());

	std::cout << std::endl;
	jorginho.stats();
	zezinho.stats();

	jorginho.guardGate();
	std::cout << std::endl;

	zezinho.attack("Jorginho Scav");
	jorginho.takeDamage(zezinho.getAttack());
	zezinho.attack("Jorginho Scav");
	jorginho.takeDamage(zezinho.getAttack());
	jorginho.attack("Zezinho Clap");

	std::cout << std::endl;
	return(0);
}
