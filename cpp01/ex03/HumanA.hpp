/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dofranci <dofranci@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 20:00:27 by dofranci          #+#    #+#             */
/*   Updated: 2023/09/28 20:26:10 by dofranci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_H
#define HUMANA_H

#include "Weapon.hpp"

class HumanA
{
    private:
        std::string _name;
        Weapon &_weapon;
    public:
        HumanA( std::string name, Weapon &weapon );
        ~HumanA(void);
        void attack(void);
};

#endif