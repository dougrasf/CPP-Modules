/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NewFile.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dofranci <dofranci@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 15:15:21 by dofranci          #+#    #+#             */
/*   Updated: 2023/10/02 17:48:20 by dofranci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef REPLACE_H
#define REPLACE_H

#include <iostream>
#include <string>
#include <fstream>

class NewFile
{
  private:
        std::string filename;
        std::string s1;
        std::string s2;
        std::ifstream inputFile;
        std::ofstream outputFile;
  public:
        NewFile(char *argv[]): filename((argv[1])), s1(argv[2]), s2(argv[3]){};
        ~NewFile(void){};
        void getContent(void);
        void verifyAndReplace(std::string line);
};

#endif