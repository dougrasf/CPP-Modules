/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dofranci <dofranci@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 19:06:44 by dofranci          #+#    #+#             */
/*   Updated: 2023/10/26 21:59:50 by dofranci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

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
	FragTrap luizinho("Luizinho Frag");

	std::cout << std::endl;
	zezinho.stats();
	jorginho.stats();
	luizinho.stats();

	zezinho.beRepaired(90);
	jorginho.attack("Zezinho Clap");
	zezinho.takeDamage(jorginho.getAttack());

	std::cout << std::endl;
	zezinho.stats();	
	jorginho.stats();

	spendEnergy(jorginho);

	std::cout << std::endl;
	zezinho.stats();
	jorginho.stats();

	jorginho.attack("Zezinho Clap");
	zezinho.setAttack(148);
	zezinho.attack("Jorginho Scav");
	jorginho.takeDamage(zezinho.getAttack());

	std::cout << std::endl;
	zezinho.stats();
	jorginho.stats();

	jorginho.guardGate();
	std::cout << std::endl;

	zezinho.attack("Jorginho Scav");
	jorginho.takeDamage(zezinho.getAttack());

	luizinho.attack("Zezinho Clap");
	zezinho.takeDamage(luizinho.getAttack());
	luizinho.attack("Zezinho Clap");
	zezinho.takeDamage(luizinho.getAttack());
	luizinho.attack("Zezinho Clap");
	zezinho.takeDamage(luizinho.getAttack());
	luizinho.attack("Zezinho Clap");
	zezinho.takeDamage(luizinho.getAttack());

	std::cout << std::endl;
	zezinho.stats();
	jorginho.stats();
	luizinho.stats();

	jorginho.attack("Luizinho Frag");
	zezinho.attack("Luizinho Frag");
	luizinho.highFivesGuys();

	std::cout << std::endl;
	return(0);
}
