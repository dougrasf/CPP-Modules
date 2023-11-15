/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dofranci <dofranci@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 19:03:58 by dofranci          #+#    #+#             */
/*   Updated: 2023/11/15 16:07:45 by dofranci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

//INITIALIZATIONS
char ScalarConverter::_char = 0;
int ScalarConverter::_int = 0;
int ScalarConverter::_type = -1;
float ScalarConverter::_float = 0;
double ScalarConverter::_double = 0;
double ScalarConverter::_rangeChecker = 0;

std::string ScalarConverter::_pseudoLiterals[6] = {
    "-inff", // infinity negative or lowest possible value of a float
    "-inf", 
    "+inff", // infinity positive or highest possible value of a float
    "+inf",
    "nanf", // NaNf = Not a Number float
    "nan"
};

//CONSTRUCTOR and DESTRUCTOR
ScalarConverter::ScalarConverter(void){ std::cout << "ScalarConverter default constructor called" << std::endl; }

ScalarConverter::ScalarConverter(ScalarConverter const &old)
{
    std::cout << "ScalarConverter copy constructor called" << std::endl;
    *this = old;
}

ScalarConverter::~ScalarConverter(void){ std::cout << "ScalarConverter destructor called" << std::endl; }

//OVERLOAD, ASSIGNMENT OPERATOR
ScalarConverter &ScalarConverter::operator=(ScalarConverter const &old)
{
    std::cout << "ScalarConverter assignment operator called" << std::endl;
    (void)old;
    return *this;    
}

//SET TYPES
void ScalarConverter::set_char(std::string literal)
{
    _rangeChecker = strtof(literal.c_str(), NULL);
    _int = static_cast<int>(literal[0]);
    _char = static_cast<char>(_int);
    _float = static_cast<float>(_int);
    _double = static_cast<double>(_int);
}

void ScalarConverter::set_int(std::string literal)
{
    _rangeChecker = strtof(literal.c_str(), NULL);
    _int = atoi(literal.c_str());
    _char = static_cast<char>(_int);
    _float = static_cast<float>(_int);
    _double = static_cast<double>(_int);
}

void ScalarConverter::set_float(std::string literal)
{
    _rangeChecker = strtof(literal.c_str(), NULL);
    _float = strtof(literal.c_str(), NULL);
    _char = static_cast<char>(_float);
    _int = static_cast<int>(_float);
    _double = static_cast<double>(_float);
}

void ScalarConverter::set_double(std::string literal)
{
    _rangeChecker = strtof(literal.c_str(), NULL);
    _double = strtod(literal.c_str(), NULL);
    _char = static_cast<char>(_double);
    _int = static_cast<int>(_double);
    _float = static_cast<float>(_double);
}

//PRINTS
void ScalarConverter::printChar(void)
{
    if (_rangeChecker < CHAR_MIN || _rangeChecker >= CHAR_MAX || _type >= 0)
        std::cout << "char: Imposible" << std::endl;
    else if (!isprint(_char))
        std::cout << "char: Non displayable" << std::endl;
    else 
        std::cout << "char: " << _char << std::endl;
}

void ScalarConverter::printInt(void)
{
    if (_type == 0 || _type == 1)
        std::cout << "int: -inf";
    if (_rangeChecker < INT_MIN || _rangeChecker > INT_MAX || _type >= 0)
        std::cout << "int: Imposible" << std::endl;
    else 
        std::cout << "int: " << _int << std::endl;
}

void ScalarConverter::printFloat(void)
{
    std::cout << "Float: ";
    if (_type == 0 || _type == 1)
        std::cout << "-inff" <<std::endl;
    else if (_type == 2 || _type == 3)
        std::cout << "+inff" <<std::endl;
    else if (_type > 3)
        std::cout << "nanf" << std::endl;
    else if (_type >= 0)
        std::cout << "Imposible" << std::endl;
    else{
        std::cout << std::fixed << std::setprecision(1);
        std::cout <<  _float << "f" << std::endl;
    }
}

void ScalarConverter::printDouble(void)
{
        std::cout << "Double: ";
    if (_type == 0 || _type == 1)
        std::cout << "-inf" <<std::endl;
    else if (_type == 2 || _type == 3)
        std::cout << "+inf" <<std::endl;
    else if (_type > 3)
        std::cout << "nan" <<std::endl;
    else {
        std::cout << std::fixed << std::setprecision(1);
        std::cout << _double << std::endl;
    }
}

void ScalarConverter::printValues(void)
{
    printChar();
    printInt();
    printFloat();
    printDouble();
}

//TYPES
bool ScalarConverter::is_char(std::string literal)
{
    if(literal.length() == 1 && !isdigit(literal[0]))
        return(true);
    return(false);
}

bool ScalarConverter::is_int(std::string literal)
{
    std::string::const_iterator it = literal.begin();

    if (*it == '-' || *it == '+')
        it++;
    while(it != literal.end() && std::isdigit(*it))
        it++;
    return(!literal.empty() && it == literal.end()); // return true when literal is not empty and "it" found only digits in string
}

bool ScalarConverter::is_float(std::string literal)
{
    int point = 0;

    std::string::const_iterator it = literal.begin();

    if (literal[literal.length() - 1] != 'f')
        return (false);
    if (*it == '-' || *it == '+')
        it++;
    while (it != literal.end() - 1)
    {
        if (!std::isdigit(*it))
        {
            if (*it == '.')
                point++;
            else
                return (false);
        }
        ++it;
    }
    if (point == 0 || point > 1)
        return (false);
    return (true);
}

bool ScalarConverter::is_double(std::string literal)
{
    int point = 0;
    size_t i = 0;

    if (literal[i] == '+' || literal[i] == '-')
        i++;
    while(i < literal.length())
    {
        if(!std::isdigit(literal[i]))
        {
            if(literal[i] == '.')
                point++;
            else 
                return (false);
        }
        i++;
    }
    if(point == 0 || point > 1)
        return (false);
    return (true);
}

bool ScalarConverter::is_pseudoLiteral(std::string literal)
{
    for(int i = 0; i < 6; i++)
    {
        if(_pseudoLiterals[i].compare(literal) == 0)
        {
            _type = i;
            return(true);
        }
    }
    return (false);
}

//CONVERT
void ScalarConverter::convert(const std::string &literal)
{
    if(is_char(literal))
        set_char(literal);
    else if(is_int(literal))
        set_int(literal);
    else if(is_float(literal))
        set_float(literal);
    else if(is_double(literal))
        set_double(literal);
    else if(is_pseudoLiteral(literal))
        ;
    else
    {
        std::cout << "Invalid argument type" << std::endl;
        return;
    }

    printValues();
}
