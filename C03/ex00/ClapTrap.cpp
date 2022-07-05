/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thi-phng <thi-phng@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/25 18:12:30 by thi-phng          #+#    #+#             */
/*   Updated: 2022/07/05 11:55:29 by thi-phng         ###   ########.fr       */
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


void    ClapTrap::attack(const std::strng & target)
{
    std::cout << " attacks " << & target << ", causing " << "DAMAGE points of damage" << endl;
    return ;
}


void    ClapTrap::takeDamage(unsigned int amount)
{
    
}

void    ClapTrap::beRepaired(unsigned int amount);


// // An overload of the insertion («) operator that inserts a floating-point representation
// // of the fixed-point number into the output stream object passed as parameter.
// std::ostream & operator << (std::ostream & cout, const ClapTrap & fx)
// {
// 	cout << fx.toFloat();
// 	return (cout);
// }