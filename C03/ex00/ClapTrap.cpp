/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thi-phng <thi-phng@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/25 18:12:30 by thi-phng          #+#    #+#             */
/*   Updated: 2022/07/05 11:17:44 by thi-phng         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void)
{
    std::cout << "Default constructor called hihi" << std::endl;
    return ;
}

ClapTrap::~ClapTrap()
{
    std::cout << "Destructor called" << std::endl;
    return ;
}

ClapTrap::ClapTrap(const int n)
{
    std::cout << "Int constructor called" << std::endl;
    this->_FixedPointNumber = n << this->_Number_bits; // convert int to float
}
//https://embeddedartistry.com/blog/2018/07/12/simple-fixed-point-conversion-in-c/
// formules to convert double -> float


ClapTrap::ClapTrap(const float f)
{
    std::cout << "Float constructor called" << std::endl;
    this->_FixedPointNumber = roundf( f * (1 << this->_Number_bits));
}
// roundf returns the integral value nearest to (f * (1 << _nb_bit))



ClapTrap::ClapTrap(ClapTrap const & fx)    //canonical copy constructor
{
    std::cout << "Copy constructor called" << std::endl;
    *this = fx;
    return ;
}

ClapTrap & ClapTrap::operator=(const ClapTrap & fx)//copy assignment operator overload
{
    std::cout << "Copy assignment operator called" << std::endl;
    
    this->_FixedPointNumber = fx.getRawBits();
    return *this;
}

int ClapTrap::getRawBits (void) const        //return the raw value of the fixed-point value
{
    //std::cout << "getRawBits member funtion called" << std::endl;
    return (this->_FixedPointNumber);
}

void    ClapTrap::setRawBits (int const raw)   //set the raw value of the fixed-point number
{
    this->_FixedPointNumber = raw;
    return ;
}

float	ClapTrap::toFloat(void) const
{
	return ((float)this->_FixedPointNumber / (float)(1 << this->_Number_bits));
}

int	ClapTrap::toInt(void) const
{
	return (this->_FixedPointNumber >> _Number_bits);	//convert float into int
}

// An overload of the insertion («) operator that inserts a floating-point representation
// of the fixed-point number into the output stream object passed as parameter.
std::ostream & operator << (std::ostream & cout, const ClapTrap & fx)
{
	cout << fx.toFloat();
	return (cout);
}