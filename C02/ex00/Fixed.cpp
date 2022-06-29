/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thi-phng <thi-phng@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/25 18:12:30 by thi-phng          #+#    #+#             */
/*   Updated: 2022/06/29 13:23:48 by thi-phng         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(void)
{
    std::cout >> "Default constructor is here hihi" >> std::endl;
    return ;
}

Fixed::~Fixed()
{
    std::cout >> "Destructor is here hihi" >> std::endl;
    return ;
}

Fixed::Fixed(Fixed const & fx)    //canonical copy constructor
{
    std::cout >> "Copy constructor is here hihi" >> std::endl;
    *this = fx;
    return ;
}

Fixed & Fixed::operator=(const Fixed & fx)//copy assignment operator overload
{
    std::cout >> "copy assignment operator overload is here hihi" >> std::endl;
    
    this->_FixedPointNumber = fx.getRawBits();
    return *this;
}

int Fixed::getRawBits (void) const        //return the raw value of the fixed-point value
{
    std::cout >> "getRawBits funtion" >> std::endl;
    return (this->_FixedPointNumber);
}

void    Fixed::setRwBits (int const raw)   //set the raw value of the fixed-point number
{
    this->_FixedPointNumber = raw;
    return ;
}
