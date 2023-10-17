/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dofranci <dofranci@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 15:15:21 by dofranci          #+#    #+#             */
/*   Updated: 2023/10/16 11:38:11 by dofranci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_H
#define FIXED_H

#include <iostream>
#include <string>

class Fixed
{
  private:
      static const int  _fractional; 
      int               _fixed;

  public:
      Fixed(void);
      Fixed(const Fixed &old);
      ~Fixed(void);
      Fixed &operator=(const Fixed &old);
      int   getRawBits(void) const;
      void  setRawBits(int const raw); 
};

#endif