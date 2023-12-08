/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dofranci <dofranci@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/30 21:24:30 by dofranci          #+#    #+#             */
/*   Updated: 2023/12/08 14:55:37 by dofranci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

int main(void) 
{
    int array[] = {1, 2, 3, 4, 5};
    std::vector<int> v1(array, array + sizeof(array) / sizeof(int));
    std::vector<int> v2;

    // Find
    std::cout << *easyfind(v1, 2) << std::endl;

    // Not Find
    {
        try {
            std::cout << *easyfind(v1, 10) << std::endl;
        }
        catch (std::exception &e) {
            std::cout << "Error catch: " << e.what() << std::endl;
        }
    }

    {
        try {
            std::cout << *easyfind(v2, 2) << std::endl;
        }
        catch (std::exception &e) {
            std::cout << "Error catch: " << e.what() << std::endl;
        }
    }

    return (0);
}