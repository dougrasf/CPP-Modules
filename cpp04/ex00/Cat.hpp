/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dofranci <dofranci@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 18:46:36 by dofranci          #+#    #+#             */
/*   Updated: 2023/10/30 21:30:10 by dofranci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Animal.hpp"

class Cat : public Animal
{
    public:
        Cat(void);
		Cat(const Cat &old);
		~Cat(void);
		Cat &operator=(const Cat &old);

        void        makeSound(void) const;
        std::string getType(void) const;
};
