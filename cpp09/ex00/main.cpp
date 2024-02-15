/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dofranci <dofranci@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/12 19:53:37 by dofranci          #+#    #+#             */
/*   Updated: 2023/12/14 21:56:13 by dofranci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitCoinExchange.hpp"

int main(int argc, char *argv[])
{
    BitCoinExchange _btc;

    if(!_btc.verifyArgs(argc, argv))
        return(1);
    if(!_btc.setDatabase())
        return(1);
    return(_btc.btc());
}
