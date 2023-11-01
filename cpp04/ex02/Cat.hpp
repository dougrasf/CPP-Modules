/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dofranci <dofranci@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 18:46:36 by dofranci          #+#    #+#             */
/*   Updated: 2023/10/31 22:50:33 by dofranci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal
{
    private:
        Brain *_brain;
    public:
        Cat(void);
		Cat(const Cat &old);
		~Cat(void);
		Cat &operator=(const Cat &old);

        void makeSound(void) const;
        std::string getType(void) const;
        void printIdeas(void) const;
};
