/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dofranci <dofranci@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 13:25:25 by dofranci          #+#    #+#             */
/*   Updated: 2023/11/10 12:28:26 by dofranci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

// BUREAUCRAT TESTS
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

//FORM TESTS
void test_high_grade1(void)
{
    std::cout << "--------- High grade test --------" << std::endl;
    try
    {
        std::cout << "Testing constructor grade = 0 and gradeExecute = 0" << std::endl;
        Form _form("Form", 0, 0);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }

    std::cout << std::endl;

    try
    {
        std::cout << "Testing constructor grade = 1 and gradeExecute = 0" << std::endl;
        Form _form("Form", 1, 0);
    }
    catch(const std::exception &e)
    {
        std::cerr << e.what() << std::endl;
    }

    std::cout << std::endl;

    try
    {
        std::cout << "Testing constructor grade = 0 and gradeExecute = 1" << std::endl;
        Form _form("Form", 0, 1);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }

    std::cout << "-----------------------------------" << std::endl;
    std::cout << std::endl;
}

void test_low_grade1(void)
{
    std::cout << "--------- Low grade test ---------" << std::endl;
    try
    {
        std::cout << "Testing constructor grade = 151 and gradeExecute = 151" << std::endl;
        Form _form("Form", 151, 151);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }

    std::cout << std::endl;

    try
    {
        std::cout << "Testing constructor grade = 151 and gradeExecute = 1" << std::endl;
        Form _form("Form", 151, 1);
    }
    catch(const std::exception &e)
    {
        std::cerr << e.what() << std::endl;
    }

    std::cout << std::endl;

    try
    {
        std::cout << "Testing constructor grade = 1 and gradeExecute = 151" << std::endl;
        Form _form("Form", 1, 151);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }

    std::cout << "-----------------------------------" << std::endl;
    std::cout << std::endl;
}

void test_valid_grade1(void)
{
    std::cout << "--------- Valid grade test --------" << std::endl;

    try
    {
        Form _form("Form", 5, 1);
        Bureaucrat jorge("Jorge", 6);

        std::cout << std::endl;
        std::cout << jorge << std::endl;
        std::cout << _form << std::endl;
        jorge.signForm(_form);
        std::cout << std::endl;
        std::cout << _form << std::endl;
        jorge.executeForm(_form);
        std::cout << std::endl;
    }
    catch(const std::exception &e)
    {
        std::cerr << e.what() << '\n';
    }
    
    std::cout << "-----------------------------------" << std::endl;

    try
    {
        Form _form("Form", 10, 5);
        Bureaucrat jorge("Jorge", 10);

        std::cout << std::endl;
        std::cout << jorge << std::endl;
        std::cout << _form << std::endl;
        jorge.signForm(_form);
        std::cout << std::endl;
        std::cout << _form << std::endl;
        jorge.executeForm(_form);
        std::cout << std::endl;
    }
    catch(const std::exception &e)
    {
        std::cerr << e.what() << '\n';
    }
    
    std::cout << "-----------------------------------" << std::endl;
    
    try
    {
        Form _form("Form", 10, 5);
        Bureaucrat jorge("Jorge", 5);

        std::cout << std::endl;
        std::cout << jorge << std::endl;
        std::cout << _form << std::endl;
        jorge.signForm(_form);
        std::cout << std::endl;
        std::cout << _form << std::endl;
        jorge.executeForm(_form);
        std::cout << std::endl;
    }
    catch(const std::exception &e)
    {
        std::cerr << e.what() << '\n';
    }

    std::cout << "-----------------------------------" << std::endl;
    std::cout << std::endl;
}

int main(void)
{
    std::cout << "<><><><> BUREAUCRAT TESTS <><><><>" << std::endl;
    test_high_grade();   
    test_low_grade();   
    test_valid_grade();

    std::cout << "<><><><> FORM TESTS <><><><>" << std::endl;
    test_high_grade1();
    test_low_grade1();
    test_valid_grade1();
    return(0);
}
