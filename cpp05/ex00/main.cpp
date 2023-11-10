/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dofranci <dofranci@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 13:25:25 by dofranci          #+#    #+#             */
/*   Updated: 2023/11/08 15:37:32 by dofranci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

void test_high_grade(void)
{
    std::cout << "--------- High grade test --------" << std::endl;

    try
    {
        std::cout << "Testing constructor grade = 0" << std::endl;
        Bureaucrat jorge("Jorge", 0);
    }
    catch(const std::exception &e)
    {
        std::cerr << e.what() << std::endl;
    }

    std::cout << std::endl;

    try
    {
        std::cout << "Testing constructor grade = -1" << std::endl;
        Bureaucrat jorge("Jorge", -1);
    }
    catch(const std::exception &e)
    {
        std::cerr << e.what() << std::endl;
    }

    std::cout << "----------------------------------" << std::endl;
    std::cout << std::endl;
}

void test_low_grade(void)
{
    std::cout << "--------- Low grade test ---------" << std::endl;

    try
    {
        std::cout << "Testing constructor grade = 151" << std::endl;
        Bureaucrat jorge("Jorge", 151);
    }
    catch(const std::exception &e)
    {
        std::cerr << e.what() << std::endl;
    }

    std::cout << std::endl;

    try
    {
        std::cout << "Testing constructor grade = 200" << std::endl;
        Bureaucrat jorge("Jorge", 200);
    }
    catch(const std::exception &e)
    {
        std::cerr << e.what() << std::endl;
    }

    std::cout << "-----------------------------------" << std::endl;
    std::cout << std::endl;
}

void test_valid_grade(void)
{
    std::cout << "-------- Valid grade test ---------" << std::endl;

    try
    {
        std::cout << "Testing constructor grade = 1" << std::endl;
        Bureaucrat jorge("Jorge", 1);
        std::cout << jorge << std::endl;

        jorge.decrementGrade();
        std::cout << jorge << std::endl;
        
        jorge.incrementGrade();
        std::cout << jorge << std::endl;
        
        jorge.incrementGrade();
        std::cout << jorge << std::endl;
    }
    catch(const std::exception &e)
    {
        std::cerr << e.what() << std::endl;
    }

    std::cout << std::endl;

    try
    {
        std::cout << "Testing constructor grade = 150" << std::endl;
        Bureaucrat jorge("Jorge", 150);
        std::cout << jorge << std::endl;
        
        jorge.incrementGrade();
        std::cout << jorge << std::endl;
        
        jorge.decrementGrade();
        std::cout << jorge << std::endl;
    
        jorge.decrementGrade();
        std::cout << jorge << std::endl;
    }
    catch(const std::exception &e)
    {
        std::cerr << e.what() << std::endl;
    }

    std::cout << "-----------------------------------" << std::endl;
    std::cout << std::endl;
}

int main(void)
{
    test_high_grade();   
    test_low_grade();   
    test_valid_grade();
    return(0);
}
