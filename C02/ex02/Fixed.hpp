/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thi-phng <thi-phng@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/25 18:12:18 by thi-phng          #+#    #+#             */
/*   Updated: 2022/06/29 14:54:21 by thi-phng         ###   ########.fr       */
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
        Fixed(Fixed const & fx);    //canonical copy constructor
        ~Fixed(void);               //canonical default destructor

        Fixed & operator= ( const Fixed & fx); //canonical copy assignment operator overload
        int     getRawBits (void) const;        //return the raw value of the fixed-point value
        void    setRawBits (int const raw);      //set the raw value of the fixed-point number

};

#endif
