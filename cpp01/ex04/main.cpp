/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dofranci <dofranci@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 15:15:06 by dofranci          #+#    #+#             */
/*   Updated: 2023/10/02 17:08:15 by dofranci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "NewFile.hpp"

int cerror(std::string error)
{
    std::cout << error << std::endl;
    return(1);
}

int valid_args(int argc, char *argv[])
{
    std::ifstream file;
    
    if(argc != 4)
        return(cerror("Invalid number of arguments!"));
    
    file.open(argv[1]);
    if(!file.is_open())
        return(cerror("Invalid input file!"));
    file.close();

    std::string s1 = argv[2];
    if(s1.empty())
        return(cerror("Invalid S1!"));

    return(0);
}

int main(int argc, char *argv[])
{
    if(valid_args(argc, argv) == 1)
        return(1);
    
    NewFile newfile(argv);

    newfile.getContent();
    return(0);
}