/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thi-phng <thi-phng@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/25 18:12:30 by thi-phng          #+#    #+#             */
/*   Updated: 2022/07/04 18:53:28 by thi-phng         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(void)
{
    std::cout << "Default constructor called hihi" << std::endl;
    return ;
}

Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
    return ;
}

Fixed::Fixed(const int n)
{
    std::cout << "Int constructor called" << std::endl;
    this->_FixedPointNumber = n << this->_Number_bits; // convert int to float
}
//https://embeddedartistry.com/blog/2018/07/12/simple-fixed-point-conversion-in-c/
// formules to convert double -> float

Fixed::Fixed(const float f)
{
    std::cout << "Float constructor called" << std::endl;
    this->_FixedPointNumber = roundf( f * (1 << this->_Number_bits));
}
// roundf returns the integral value nearest to (f * (1 << _nb_bit))


Fixed::Fixed(Fixed const & fx)    //canonical copy constructor
{
    std::cout << "Copy constructor called" << std::endl;
    *this = fx;
    return ;
}

Fixed & Fixed::operator=(const Fixed & fx)//copy assignment operator overload
{
    std::cout << "Copy assignment operator called" << std::endl;
    
    this->_FixedPointNumber = fx.getRawBits();
    return *this;
}

int Fixed::getRawBits (void) const        //return the raw value of the fixed-point value
{
    //std::cout << "getRawBits member funtion called" << std::endl;
    return (this->_FixedPointNumber);
}

void    Fixed::setRawBits (int const raw)   //set the raw value of the fixed-point number
{
    this->_FixedPointNumber = raw;
    return ;
}

float	Fixed::toFloat(void) const
{
	return ((float)this->_FixedPointNumber / (float)(1 << this->_Number_bits));
}

int	Fixed::toInt(void) const
{
	return (this->_FixedPointNumber >> _Number_bits);	//convert float into int
}

// An overload of the insertion («) operator that inserts a floating-point representation
// of the fixed-point number into the output stream object passed as parameter.
std::ostream & operator << (std::ostream & cout, const Fixed & fx)
{
	cout << fx.toFloat();
	return (cout);
}
