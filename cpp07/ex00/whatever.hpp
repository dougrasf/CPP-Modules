/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Template.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dofranci <dofranci@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/24 19:20:18 by dofranci          #+#    #+#             */
/*   Updated: 2023/11/24 19:54:52 by dofranci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

template <typename T>
void swap(T  &x, T  &y)
{
	T	aux;

	aux = x;
	x = y;
	y = aux;
}

template <typename T>
T const &min(T const &x, T const &y)
{
	if (x < y)
        return x;
    else if (y < x)
        return y;
    else
        return y;
}

template <typename T>
T const &max(T const &x, T const &y)
{
	if (x > y)
        return x;
    else if (y > x)
        return y;
    else
        return y;
}
