/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dofranci <dofranci@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 18:46:36 by dofranci          #+#    #+#             */
/*   Updated: 2023/10/31 22:50:30 by dofranci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal
{
    private:
        Brain *_brain;
    public:
        Dog(void);
		Dog(const Dog &old);
		~Dog(void);
		Dog &operator=(const Dog &old);

        void makeSound(void) const;
        std::string getType(void) const;
        void printIdeas(void) const;

};
