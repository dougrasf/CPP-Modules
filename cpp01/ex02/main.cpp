/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dofranci <dofranci@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 19:48:01 by dofranci          #+#    #+#             */
/*   Updated: 2023/09/21 19:48:04 by dofranci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

int main(void)
{
	std::string string = "HI THIS IS BRAIN";
	std::string* stringPTR = &string;
	std::string& stringREF = string;

	std::cout << "Memory address of the string variable:" << &string << std::endl;
	std::cout << "The memory address held by stringPTR:" << stringPTR << std::endl;
	std::cout << "The memory address held by stringREF:" << &stringREF << std::endl;
	std::cout << std::endl;
	std::cout << "The value of the string variable:" << string << std::endl;
	std::cout << "The value pointed to by stringPTR:" << *stringPTR << std::endl;	
	std::cout << "The value pointed to by stringREF:" << stringREF << std::endl;	
	
	return 0;
}
