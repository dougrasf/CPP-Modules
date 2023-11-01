/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dofranci <dofranci@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 19:33:21 by dofranci          #+#    #+#             */
/*   Updated: 2023/10/31 23:10:39 by dofranci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"

void subject_test(void)
{
    std::cout << "\n---Subject test start---\n" << std::endl;
    const Animal *dog = new Dog();
    const Animal *cat = new Cat();

    std::cout << std::endl;
    std::cout << dog->getType() << std::endl;
    dog->makeSound();
    
    std::cout << std::endl;
    std::cout << cat->getType() << std::endl;
    cat->makeSound();
    std::cout << std::endl;

	delete dog;
    delete cat;
    std::cout << "\n---Subject test end---\n" << std::endl;
}

void my_test(void)
{
    std::cout << "\n---My test start---\n" << std::endl;
    const Animal *meta[4];

    for(int i = 0; i < 2; i++)
        meta[i] = new Dog;
    for(int i = 2; i < 4; i++)
        meta[i] = new Cat;

    for(int i = 0; i < 4; i++)
        meta[i]->makeSound();
    std::cout << std::endl;

    for(int i = 0; i < 4; i++)
        delete meta[i];
    std::cout << "\n---My test end---\n" << std::endl;
}

void deep_copy_test(void)
{
    std::cout << "\n---Deep copy test start---\n" << std::endl;
    {
        Cat *cat1 = new Cat();
        Cat *cat2 = new Cat();

        *cat2 = *cat1;
        delete cat1;

        cat2->printIdeas();
	    delete cat2;
    }
    {
        Dog *dog1 = new Dog();
        Dog *dog2 = new Dog();

        *dog2 = *dog1;
        delete dog1;

        dog2->printIdeas();
        delete dog2;
    }
    std::cout << "\n---Deep copy test end---\n" << std::endl;
}

int main(void)
{
    subject_test();
    my_test();
    deep_copy_test();
    return (0);
}
