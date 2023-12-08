/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dofranci <dofranci@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 15:16:51 by dofranci          #+#    #+#             */
/*   Updated: 2023/11/17 15:48:37 by dofranci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"

int main(void)
{
    Base *_random1 = generate();
    Base *_random2 = generate();
    
    std::cout << std::endl;
    identify(_random1);
    identify(*_random2);

    return(0);
}
