/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thi-phng <thi-phng@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/25 18:12:18 by thi-phng          #+#    #+#             */
/*   Updated: 2022/06/25 18:38:57 by thi-phng         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <iostream>

class Fixed
{
private:
    int                 _FixedPointNumber;
    static const int    // number of fractional bits
    /* data */
public:
    Fixed(/* args */);
    Fixed();
    ~Fixed();
};

Fixed::Fixed(/* args */)
{
}

Fixed::~Fixed()
{
}
