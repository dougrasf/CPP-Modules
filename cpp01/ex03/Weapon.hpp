/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dofranci <dofranci@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 19:57:17 by dofranci          #+#    #+#             */
/*   Updated: 2023/09/27 22:45:08 by dofranci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_H
#define WEAPON_H

#include <iostream>
#include <string>

class Weapon
{
    private:
        std::string _type;
    public:
        Weapon(std::string type);
        ~Weapon(void);
        std::string getType(void);
        void        setType(std::string type);
};

#endif