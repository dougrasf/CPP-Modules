/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dofranci <dofranci@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 13:25:25 by dofranci          #+#    #+#             */
/*   Updated: 2023/11/10 20:14:36 by dofranci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"
#include "AForm.hpp"

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
        Intern someRandomIntern;
        AForm    *rrf;
        Bureaucrat _bureaucrat("Bureaucrat", 146);
        
        rrf = someRandomIntern.makeForm("shrubbery creation", "tree");
        std::cout << std::endl;
        std::cout << _bureaucrat << std::endl;
        _bureaucrat.signAForm(*rrf);
        _bureaucrat.executeAForm(*rrf);
        std::cout << std::endl;
        delete rrf;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }
    
    std::cout << "-----------------------------------" << std::endl;
    std::cout << std::endl;
    
    try
    {
        Intern someRandomIntern;
        AForm    *rrf;
        Bureaucrat _bureaucrat("Bureaucrat", 145);
    
        rrf = someRandomIntern.makeForm("shrubbery creation", "tree");
        std::cout << std::endl;
        std::cout << _bureaucrat << std::endl;
        _bureaucrat.signAForm(*rrf);
        _bureaucrat.executeAForm(*rrf);
        std::cout << std::endl;
        delete rrf;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }
    
    std::cout << "-----------------------------------" << std::endl;
    std::cout << std::endl;
    
    try
    {
        Intern someRandomIntern;
        AForm    *rrf;
        Bureaucrat _bureaucrat("Bureaucrat", 137);
        
        rrf = someRandomIntern.makeForm("shrubbery creation", "tree");
        std::cout << std::endl;
        std::cout << _bureaucrat << std::endl;
        _bureaucrat.signAForm(*rrf);
        _bureaucrat.executeAForm(*rrf);
        std::cout << std::endl;
        delete rrf;
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
        Intern someRandomIntern;
        AForm    *rrf;
        Bureaucrat _bureaucrat("Bureaucrat", 146);
        
        rrf = someRandomIntern.makeForm("robotomy request", "Bender");
        std::cout << std::endl;
        std::cout << _bureaucrat << std::endl;
        _bureaucrat.signAForm(*rrf);
        _bureaucrat.executeAForm(*rrf);
        std::cout << std::endl;
        delete rrf;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }
    
    std::cout << "-----------------------------------" << std::endl;
    std::cout << std::endl;
    
    try
    {
        Intern someRandomIntern;
        AForm    *rrf;
        Bureaucrat _bureaucrat("Bureaucrat", 145);
    
        rrf = someRandomIntern.makeForm("robotomy request", "Bender");
        std::cout << std::endl;
        std::cout << _bureaucrat << std::endl;
        _bureaucrat.signAForm(*rrf);
        _bureaucrat.executeAForm(*rrf);
        std::cout << std::endl;
        delete rrf;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }
    
    std::cout << "-----------------------------------" << std::endl;
    std::cout << std::endl;
    
    try
    {
        Intern someRandomIntern;
        AForm    *rrf;
        Bureaucrat _bureaucrat("Bureaucrat", 137);
        
        rrf = someRandomIntern.makeForm("robotomy request", "Bender");
        std::cout << std::endl;
        std::cout << _bureaucrat << std::endl;
        _bureaucrat.signAForm(*rrf);
        _bureaucrat.executeAForm(*rrf);
        std::cout << std::endl;
        delete rrf;
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
        Intern someRandomIntern;
        AForm    *rrf;
        Bureaucrat _bureaucrat("Bureaucrat", 26);
        
        rrf = someRandomIntern.makeForm("presidential pardon", "Bender");
        std::cout << std::endl;
        std::cout << _bureaucrat << std::endl;
        _bureaucrat.signAForm(*rrf);
        _bureaucrat.executeAForm(*rrf);
        std::cout << std::endl;
        delete rrf;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }
    
    std::cout << "-----------------------------------" << std::endl;
    std::cout << std::endl;
    
    try
    {
        Intern someRandomIntern;
        AForm    *rrf;
        Bureaucrat _bureaucrat("Bureaucrat", 25);
    
        rrf = someRandomIntern.makeForm("presidential pardon", "Bender");
        std::cout << std::endl;
        std::cout << _bureaucrat << std::endl;
        _bureaucrat.signAForm(*rrf);
        _bureaucrat.executeAForm(*rrf);
        std::cout << std::endl;
        delete rrf;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }
    
    std::cout << "-----------------------------------" << std::endl;
    std::cout << std::endl;
    
    try
    {
        Intern someRandomIntern;
        AForm    *rrf;
        Bureaucrat _bureaucrat("Bureaucrat", 5);
        
        rrf = someRandomIntern.makeForm("presidential pardon", "Bender");
        std::cout << std::endl;
        std::cout << _bureaucrat << std::endl;
        _bureaucrat.signAForm(*rrf);
        _bureaucrat.executeAForm(*rrf);
        std::cout << std::endl;
        delete rrf;
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
    
    return(0);
}
