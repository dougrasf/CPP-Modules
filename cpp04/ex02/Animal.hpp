/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dofranci <dofranci@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 18:44:07 by dofranci          #+#    #+#             */
/*   Updated: 2023/10/31 23:15:03 by dofranci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

class Animal
{
    protected:
        std::string _type;
    public:
        Animal(void);
        Animal(const std::string type);
		Animal(const Animal &old);
		virtual ~Animal(void);
		Animal &operator=(const Animal &old);
        
        virtual void    makeSound(void) const = 0; // pure virtual function = abstract class
        std::string     getType(void) const;
}; 
