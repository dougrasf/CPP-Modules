/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dofranci <dofranci@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 19:48:57 by dofranci          #+#    #+#             */
/*   Updated: 2023/11/16 21:09:55 by dofranci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

int main(int argc, char *argv[]) 
{
    if(argc != 2)
    {
        std::cout << "invalid number of parameters" << std::endl;
        return 1;
    }
    ScalarConverter::convert(argv[1]);
    std::cout << std::endl;

    return 0;
}

// int main(void)
// {
//     std::cout << "input: 'c'" << std::endl;
//     ScalarConverter::convert("c");
//     std::cout << std::endl;
    
//     std::cout << "input: \"42\"" << std::endl;
//     ScalarConverter::convert("42");
//     std::cout << std::endl;
    
//     std::cout << "input: \"62.123f\"" << std::endl;
//     ScalarConverter::convert("62.123f");
//     std::cout << std::endl;
    
//     std::cout << "input: \"22.421\"" << std::endl;
//     ScalarConverter::convert("22.421");
//     std::cout << std::endl;
    
//     std::cout << "input: \"0\"" << std::endl;
//     ScalarConverter::convert("0");
//     std::cout << std::endl;
    
//     std::cout << "input: \"nan\"" << std::endl;
//     ScalarConverter::convert("nan");
//     std::cout << std::endl;


//     std::cout << "input: \"+inff\"" << std::endl;
//     ScalarConverter::convert("+inff");
//     std::cout << std::endl;

//     std::cout << "input: \"invalid_argument\"" << std::endl;
//     ScalarConverter::convert("invalid_argument");
//     std::cout << std::endl;
    
//     return 0;
// }
