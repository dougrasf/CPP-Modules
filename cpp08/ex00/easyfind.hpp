/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dofranci <dofranci@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/30 20:35:18 by dofranci          #+#    #+#             */
/*   Updated: 2023/12/08 14:46:44 by dofranci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <algorithm>
#include <iterator>
#include <exception>
#include <vector>

class notFind : public std::exception
{
    public: 
        char const *what() const throw()
        {
            return("Occurrence not find!");
        }
};

template <typename T>
typename T::iterator easyfind(T &container, int occurence)
{
    typename T::iterator it;
    
    it = find(container.begin(), container.end(), occurence);
    if(it == container.end())
        throw notFind();
    return (it);
}
