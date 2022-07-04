/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thi-phng <thi-phng@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/25 18:12:18 by thi-phng          #+#    #+#             */
/*   Updated: 2022/07/04 19:03:42 by thi-phng         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>

class Fixed
{
    private:
        int                 _FixedPointNumber;
        static const int    _Number_bits = 8;// number of fractional bits
        
    public:
        Fixed(void);                //canonical default constructeur
        Fixed(const int n);
        Fixed(const float f);
        Fixed(Fixed const & fx);    //canonical copy constructor
        ~Fixed(void);               //canonical default destructor

        Fixed & operator= ( const Fixed & fx); //canonical copy assignment operator overload
    
    
        //***----- [ The 6 comparison operators: >, <, >=, <=, == and != ] ----***//
        bool    operator>(const Fixed & fx) const;       // this > fx
        bool    operator<(const Fixed & fx) const;       // this < fx
        bool    operator>=(const Fixed & fx) const;      // this >= fx
        bool    operator<=(const Fixed & fx) const;      // this <= fx
        bool    operator==(const Fixed & fx) const;      // this == fx
        bool    operator!=( const Fixed & fx) const;     // this != fx
        
        
        
        //***----- [ The 4 arithmetic operators: +, -, *, and / ] ----***//
        // https://en.cppreference.com/w/cpp/language/operator_arithmetic => man math operators
        
        Fixed   operator+(const Fixed &b) const;    // a + b
        Fixed   operator-(const Fixed &b) const;    // a - b
        Fixed   operator*(const Fixed &b) const;    // a * b
        Fixed   operator/(const Fixed &b) const;    // a / b
         
         

        //***----- [ The 4 increment/decrement (pre/post-increment + pre/post-decrement) operators ] ----***//
        // https://en.cppreference.com/w/cpp/language/operator_incdec => man operator (in/de)crementation

        Fixed   & operator++(void);             //++a;
        Fixed   & operator--(void);             //--a;
        Fixed   operator++(int);                //a++;
        Fixed   operator--(int);                //a--;
        


        //***----- [ The 4 public overloaded member functions ] ----***//
        static Fixed            & min(Fixed & fx1, Fixed );
        static Fixed            & min(const );
        static Fixed            & min(&);
        static Fixed            & max(const )
        
        
        float   toFloat(void) const;
        int     toInt(void) const;
        int     getRawBits (void) const;        //return the raw value of the fixed-point value
        void    setRawBits (int const raw);      //set the raw value of the fixed-point number

};

std::ostream & operator << (std::ostream & sortie, const Fixed & fx);

#endif
