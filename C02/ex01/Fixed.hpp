/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thi-phng <thi-phng@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/25 18:12:18 by thi-phng          #+#    #+#             */
/*   Updated: 2022/07/04 15:47:01 by thi-phng         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <cmath>

class Fixed
{
    private:
        int                 _FixedPointNumber;
        static int const    _Number_bits = 8;// number of fractional bits
        /* data */
        
    public:
        Fixed(void);                //canonical default constructeur
        Fixed(const int n);
        Fixed(const float f);
        Fixed(Fixed const & fx);    //canonical copy constructor
        ~Fixed(void);               //canonical default destructor

        float   toFloat(void) const;
        int     toInt(void) const;
        Fixed & operator= ( const Fixed & fx); //canonical copy assignment operator overload
        int     getRawBits (void) const;        //return the raw value of the fixed-point value
        void    setRawBits (int const raw);      //set the raw value of the fixed-point number
        

};

std::ostream & operator << (std::ostream & sortie, const Fixed & fx);
// An overload of the insertion («) operator that inserts a floating-point representation
//of the fixed-point number into the output stream object passed as parameter

#endif
