/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dofranci <dofranci@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 19:06:44 by dofranci          #+#    #+#             */
/*   Updated: 2023/10/25 22:13:23 by dofranci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

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
	
	jorginho.setAttack(10);
	jorginho.attack("Zezinho");
	zezinho.takeDamage(jorginho.getAttack());
	std::cout << std::endl;
	jorginho.stats();
	zezinho.stats();	

	jorginho.attack("Zezinho");
	zezinho.takeDamage(jorginho.getAttack());
	std::cout << std::endl;
	jorginho.stats();
	zezinho.stats();	
	
	zezinho.attack("Jorginho");
	jorginho.beRepaired(20);
	jorginho.stats();
	
	std::cout << std::endl;
	return(0);
}
