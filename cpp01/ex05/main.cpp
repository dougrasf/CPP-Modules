/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dofranci <dofranci@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 19:11:55 by dofranci          #+#    #+#             */
/*   Updated: 2023/10/03 22:20:39 by dofranci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int cerror(std::string error)
{
    std::cout << error << std::endl;
    return(1);
}

int valid_args(int argc, char *argv[])
{
    if(argc != 2)
        return(cerror("Invalid arguments!"));
    
    std::string level = argv[1];
    if(level.compare("DEBUG") != 0 && \
       level.compare("INFO") != 0 && \
       level.compare("WARNING") != 0 && \
       level.compare("ERROR") != 0)
        return(cerror("Invalid level!\n\nTry: DEBUG, INFO, WARNING or ERROR"));
    return(0);
}

int main(int argc, char *argv[])
{
    if(valid_args(argc, argv) != 0)
        return(1);

    Harl harl;
    harl.complain(argv[1]);
    return(0);
}
