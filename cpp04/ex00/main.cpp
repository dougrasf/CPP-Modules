/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dofranci <dofranci@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 19:33:21 by dofranci          #+#    #+#             */
/*   Updated: 2023/10/31 22:30:37 by dofranci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

int main(void)
{
    const Animal *meta = new Animal();
    const Animal *dog = new Dog();
    const Animal *cat = new Cat();
    const WrongAnimal *wmeta = new WrongAnimal();
    const WrongAnimal *wcat = new WrongCat();

    std::cout << std::endl;
 
    std::cout << meta->getType() << std::endl;
    meta->makeSound();
    std::cout << std::endl;

    std::cout << dog->getType() << std::endl;
    dog->makeSound();
    std::cout << std::endl;

    std::cout << cat->getType() << std::endl;
    cat->makeSound();
    std::cout << std::endl;

    std::cout << wcat->getType() << std::endl;
    wcat->makeSound();    
    std::cout << std::endl;

    std::cout << wmeta->getType() << std::endl;
    wmeta->makeSound();    
    std::cout << std::endl;

	delete meta;
	delete dog;
    delete cat;
    delete wmeta;
    delete wcat;
    return (0);
}
