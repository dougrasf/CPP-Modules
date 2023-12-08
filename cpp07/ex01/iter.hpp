/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dofranci <dofranci@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/24 19:20:18 by dofranci          #+#    #+#             */
/*   Updated: 2023/11/24 19:58:50 by dofranci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

template <typename T, typename F>
void iter(T *array, size_t len, F f)
{
    for(size_t i = 0; i < len; i++)
        f(array[i]);
}

template <typename T>
void _print(T a)
{
    std::cout << a << std::endl;
}

