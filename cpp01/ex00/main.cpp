/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dofranci <dofranci@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 15:05:08 by dofranci          #+#    #+#             */
/*   Updated: 2023/09/20 15:32:14 by dofranci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main (void)
{
    Zombie zombie1("Zezinho");
    Zombie *zombie2 = newZombie("Luizinho");

    zombie1.announce();
    zombie2->announce();
    randomChump("Joãozinho");
    delete zombie2;
    return (0);
}
