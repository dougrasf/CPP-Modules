/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dofranci <dofranci@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 11:20:49 by dofranci          #+#    #+#             */
/*   Updated: 2023/09/20 15:14:20 by dofranci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_H
#define ZOMBIE_H

#include <string>
#include <iostream>

class Zombie
{
    private:
			std::string name;
    public:
			Zombie(void);
			~Zombie(void);
			void announce(void);
			void setname(std::string name);
};

Zombie* zombieHorde(int N, std::string name);

#endif
