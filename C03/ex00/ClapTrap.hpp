/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thi-phng <thi-phng@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/25 18:12:18 by thi-phng          #+#    #+#             */
/*   Updated: 2022/07/05 11:16:40 by thi-phng         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>
# include <cmath>

class ClapTrap
{
    private:
        int                 _FixedPointNumber;
        static int const    _Number_bits = 8;// number of fractional bits
        /* data */
        
    public:
        ClapTrap(void);                //canonical default constructeur
        ClapTrap(const int n);
        ClapTrap(const float f);
        ClapTrap(ClapTrap const & fx);    //canonical copy constructor
        ~ClapTrap(void);               //canonical default destructor

        float   toFloat(void) const;
        int     toInt(void) const;
        ClapTrap & operator= ( const ClapTrap & fx); //canonical copy assignment operator overload
        int     getRawBits (void) const;        //return the raw value of the fixed-point value
        void    setRawBits (int const raw);      //set the raw value of the fixed-point number
        

};

std::ostream & operator << (std::ostream & sortie, const ClapTrap & fx);
// An overload of the insertion («) operator that inserts a floating-point representation
//of the fixed-point number into the output stream object passed as parameter

#endif