/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dofranci <dofranci@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 11:20:49 by dofranci          #+#    #+#             */
/*   Updated: 2023/09/20 15:24:27 by dofranci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde(int N, std::string name)
{
    if(N <= 0)
	{
		std::cout << "Invalid number of zombies!!" << std::endl;
		return (0);
	}
	
	Zombie*	zombie = new Zombie[N];

	for (int i = 0; i < N; i++)
	{
		zombie[i].setname(name);
		zombie[i].announce();
	}
	return (zombie);
}
