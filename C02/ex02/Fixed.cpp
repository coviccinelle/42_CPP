/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thi-phng <thi-phng@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/25 18:12:30 by thi-phng          #+#    #+#             */
/*   Updated: 2022/07/04 21:02:46 by thi-phng         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(void)
{
    //std::cout << "Default constructor called hihi" << std::endl;
    return ;
}

Fixed::~Fixed()
{
    //std::cout << "Destructor called" << std::endl;
    return ;
}

Fixed::Fixed(const int n)
{
    //std::cout << "Int constructor called" << std::endl;
    this->_FixedPointNumber = n << this->_Number_bits; // convert int to float
}
//https://embeddedartistry.com/blog/2018/07/12/simple-fixed-point-conversion-in-c/
// formules to convert double -> float

Fixed::Fixed(const float f)
{
    //std::cout << "Float constructor called" << std::endl;
    this->_FixedPointNumber = roundf( f * (1 << this->_Number_bits));
}
// roundf returns the integral value nearest to (f * (1 << _nb_bit))


Fixed::Fixed(Fixed const & fx)    //canonical copy constructor
{
    //std::cout << "Copy constructor called" << std::endl;
    *this = fx;
    return ;
}

Fixed & Fixed::operator=(const Fixed & fx)//copy assignment operator overload
{
    //std::cout << "Copy assignment operator called" << std::endl;
    
    this->_FixedPointNumber = fx.getRawBits();
    return *this;
}


//***----- [ The 6 comparison operators: >, <, >=, <=, == and != ] ----***//
bool    Fixed::operator>(const Fixed & fx) const       // this > fx
{
    return (this->toFloat() > fx.toFloat());
}


bool    Fixed::operator<(const Fixed & fx) const       // this < fx
{
    return (this->toFloat() < fx.toFloat());
}

bool    Fixed::operator>=(const Fixed & fx) const      // this >= fx
{
    return (this->toFloat() >= fx.toFloat());
}

bool    Fixed::operator<=(const Fixed & fx) const      // this <= fx
{
    return (this->toFloat() <= fx.toFloat());
}

bool    Fixed::operator==(const Fixed & fx) const      // this == fx
{
    return (this->toFloat() == fx.toFloat());
}

bool    Fixed::operator!=( const Fixed & fx) const     // this != fx
{
    return (this->toFloat() != fx.toFloat());
}


//***----- [ The 4 arithmetic operators: +, -, *, and / ] ----***//
// https://en.cppreference.com/w/cpp/language/operator_arithmetic => man math operators

Fixed   Fixed::operator+(const Fixed &b) const    // a + b
{
    return (this->toFloat() + b.toFloat());
}

Fixed   Fixed::operator-(const Fixed &b) const    // a - b
{
    return (this->toFloat() - b.toFloat());
}

Fixed   Fixed::operator*(const Fixed &b) const    // a * b
{
    return (this->toFloat() * b.toFloat());
}

Fixed   Fixed::operator/(const Fixed &b) const    // a / b
{
    return (this->toFloat() / b.toFloat());
}    
    

//***----- [ The 4 increment/decrement (pre/post-increment + pre/post-decrement) operators ] ----***//
// https://en.cppreference.com/w/cpp/language/operator_incdec => man operator (in/de)crementation

Fixed   & Fixed::operator++(void)             //++a;
{
    this->_FixedPointNumber++;
    return (*this);
}

Fixed   & Fixed::operator--(void)             //--a;
{
    this->_FixedPointNumber--;
    return (*this);
}

Fixed   Fixed::operator++(int)                //a++;
{
    Fixed   tmp = *this;
    
    this->_FixedPointNumber++;
    return (tmp);   
}

Fixed   Fixed::operator--(int)                //a--;
{
    Fixed   tmp = *this;

    this->_FixedPointNumber--;
    return (tmp);
}

//***----- [ The 4 public overloaded member functions ] ----***//
Fixed    & Fixed::min(Fixed & fx1, Fixed & fx2)
{
    if (fx1 < fx2)
		return (fx1);
	else
		return (fx2);
}

Fixed    & Fixed::max(Fixed & fx1, Fixed & fx2)
{
    if (fx1 > fx2)
		return (fx1);
	else
		return (fx2);
}

Fixed const  & Fixed::min(Fixed const & fx1, Fixed const & fx2)
{
    if (fx1 < fx2)
		return (fx1);
	else
		return (fx2);
}
Fixed const  & Fixed::max(Fixed const & fx1, Fixed const & fx2)
{
	if (fx1 > fx2)
		return (fx1);
	else
		return (fx2);
}

//***------ Get + Set and float/int -------***//
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
