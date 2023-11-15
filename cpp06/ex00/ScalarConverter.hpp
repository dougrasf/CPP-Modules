/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dofranci <dofranci@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 19:04:00 by dofranci          #+#    #+#             */
/*   Updated: 2023/11/15 15:37:51 by dofranci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <stdlib.h>
#include <climits>
#include <iomanip>


class ScalarConverter
{
    private:
        ScalarConverter(void);
        ScalarConverter(ScalarConverter const &old);
        ~ScalarConverter(void);
        ScalarConverter &operator=(ScalarConverter const &old);

        static int _int;
        static int  _type;
        static char _char;
        static float _float;
        static double _double;
        static double _rangeChecker;
        static std::string _pseudoLiterals[6];

        static bool is_char(std::string literal);
        static void set_char(std::string literal);
        static bool is_int(std::string literal);
        static void set_int(std::string literal);
        static bool is_float(std::string literal);
        static void set_float(std::string literal);
        static bool is_double(std::string literal);
        static void set_double(std::string literal);
        static bool is_pseudoLiteral(std::string literal);

        static void printValues(void);
        static void printChar(void);
        static void printInt(void);
        static void printFloat(void);
        static void printDouble(void);
    public:
        static void convert(const std::string &literal);
};
