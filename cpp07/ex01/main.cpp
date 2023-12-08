/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dofranci <dofranci@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 20:00:23 by dofranci          #+#    #+#             */
/*   Updated: 2023/11/28 20:00:25 by dofranci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

int main(void)
{
    // Test 1: Printing elements of a int array
	int intArr[] = {1, 2, 3, 4, 5};
    std::cout << "Printing elements of int array: " << std::endl;
    ::iter(intArr, 5, _print<int>);
    std::cout << std::endl;

    // Test 2: Printing elements of a char array
    char charArr[] = {'H', 'e', 'l', 'l', 'o'};
    std::cout << "Printing elements of char array: " << std::endl;
    ::iter(charArr, 5, _print<char>);
    std::cout << std::endl;

    // Test 3: Printing elements of a float array
    float floatArr[] = {1.1, 2.2, 3.3, 4.4, 5.5};
    std::cout << "Printing elements of float array: " << std::endl;
    ::iter(floatArr, 5, _print<float>);
    std::cout << std::endl;

    return (0);
}
