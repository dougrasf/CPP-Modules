/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dofranci <dofranci@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 13:25:25 by dofranci          #+#    #+#             */
/*   Updated: 2023/11/10 16:02:41 by dofranci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#define BLUE_TEXT "\033[1;34m"
#define RESET_TEXT "\033[0m"


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

void test_shrubbery(void)
{
    try
    {
        ShrubberyCreationForm _form("home");
        Bureaucrat _bureaucrat("Bureaucrat", 146);
        
        std::cout << std::endl;
        std::cout << _bureaucrat << std::endl;
        _bureaucrat.signAForm(_form);
        _bureaucrat.executeAForm(_form);
        std::cout << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }
    
    std::cout << "-----------------------------------" << std::endl;
    std::cout << std::endl;
    
    try
    {
        ShrubberyCreationForm _form("home");
        Bureaucrat _bureaucrat("Bureaucrat", 145);
    
        std::cout << std::endl;
        std::cout << _bureaucrat << std::endl;
        _bureaucrat.signAForm(_form);
        _bureaucrat.executeAForm(_form);
        std::cout << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }
    
    std::cout << "-----------------------------------" << std::endl;
    std::cout << std::endl;
    
    try
    {
        ShrubberyCreationForm _form("home");
        Bureaucrat _bureaucrat("Bureaucrat", 137);
        
        std::cout << std::endl;
        std::cout << _bureaucrat << std::endl;
        _bureaucrat.signAForm(_form);
        _bureaucrat.executeAForm(_form);
        std::cout << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }
}

void test_robotomy(void)
{
    try
    {
        RobotomyRequestForm _form("Robot");
        Bureaucrat _bureaucrat("Bureaucrat", 146);
        
        std::cout << std::endl;
        std::cout << _bureaucrat << std::endl;
        _bureaucrat.signAForm(_form);
        _bureaucrat.executeAForm(_form);
        std::cout << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }
    
    std::cout << "-----------------------------------" << std::endl;
    std::cout << std::endl;
    
    try
    {
        RobotomyRequestForm _form("Robot");
        Bureaucrat _bureaucrat("Bureaucrat", 145);
    
        std::cout << std::endl;
        std::cout << _bureaucrat << std::endl;
        _bureaucrat.signAForm(_form);
        _bureaucrat.executeAForm(_form);
        std::cout << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }
    
    std::cout << "-----------------------------------" << std::endl;
    std::cout << std::endl;
    
    try
    {
        RobotomyRequestForm _form("Robot");
        Bureaucrat _bureaucrat("Bureaucrat", 137);
        
        std::cout << std::endl;
        std::cout << _bureaucrat << std::endl;
        _bureaucrat.signAForm(_form);
        _bureaucrat.executeAForm(_form);
        std::cout << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }
}

void test_presidential(void)
{
    try
    {
        PresidentialPardonForm _form("Presidential");
        Bureaucrat _bureaucrat("Bureaucrat", 26);
        
        std::cout << std::endl;
        std::cout << _bureaucrat << std::endl;
        _bureaucrat.signAForm(_form);
        _bureaucrat.executeAForm(_form);
        std::cout << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }
    
    std::cout << "-----------------------------------" << std::endl;
    std::cout << std::endl;
    
    try
    {
        PresidentialPardonForm _form("Presidential");
        Bureaucrat _bureaucrat("Bureaucrat", 25);
    
        std::cout << std::endl;
        std::cout << _bureaucrat << std::endl;
        _bureaucrat.signAForm(_form);
        _bureaucrat.executeAForm(_form);
        std::cout << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }
    
    std::cout << "-----------------------------------" << std::endl;
    std::cout << std::endl;
    
    try
    {
        PresidentialPardonForm _form("Presidential");
        Bureaucrat _bureaucrat("Bureaucrat", 5);
        
        std::cout << std::endl;
        std::cout << _bureaucrat << std::endl;
        _bureaucrat.signAForm(_form);
        _bureaucrat.executeAForm(_form);
        std::cout << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }
}

int main(void)
{
    // std::cout << "<><><><> BUREAUCRAT TESTS <><><><>" << std::endl;
    // test_high_grade();
    // test_low_grade();
    // test_valid_grade();

    std::cout << BLUE_TEXT << "<><><><> Shrubbery TESTS <><><><>" << RESET_TEXT << std::endl;
    test_shrubbery();
    
    std::cout << std::endl;

    std::cout << BLUE_TEXT << "<><><><> Robotomy TESTS <><><><>" << RESET_TEXT << std::endl;
    test_robotomy();

    std::cout << std::endl;

    std::cout << BLUE_TEXT << "<><><><> Presidential TESTS <><><><>" << RESET_TEXT << std::endl;
    test_presidential();

    // ShrubberyCreationForm _form("tree");
    // RobotomyRequestForm robot("robot");
    // PresidentialPardonForm president("president");
    // Bureaucrat _bureaucrat("Bureaucrat", 145);
    // // _bureaucrat.signAForm(_form);
    // // _bureaucrat.executeAForm(_form);
    // // _bureaucrat.signAForm(robot);
    // // _bureaucrat.executeAForm(robot);
    // _bureaucrat.signAForm(president);
    // _bureaucrat.executeAForm(president);

    return(0);
}
