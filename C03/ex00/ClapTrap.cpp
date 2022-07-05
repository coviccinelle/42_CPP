/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thi-phng <thi-phng@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/25 18:12:30 by thi-phng          #+#    #+#             */
/*   Updated: 2022/07/05 12:37:56 by thi-phng         ###   ########.fr       */
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
    
    this->_HitPoints = takeDamage(3);
    return *this;
}


void    ClapTrap::attack(const std::strng & target)
{
    if (this->_HitPoints > 0 && this->_EnergyPoints > 0)
        std::cout << " attacks " << & target << ", causing " << this->takeDamage(3) << endl;
    else
        std::cout << "Error: Not enough [Hit Points] or [Energy Points]" << std::endl;
    return ;
}


void    ClapTrap::takeDamage(unsigned int amount)
{
    if (this->_HitPoints >= amount && this->_EnergyPoints >= 1)
    {
        this->_HitPoints -= amount;
        this->_EnergyPoints -= 1;
        std::cout << "Take damage function called, current Hit Points is " << this->_HitPoints << std::endl;
        std::cout << "Current Energy Points is " << this->_EnergyPoints << std::endl;
    }
    else
        std::cout << "Error: Can't take damage. Not enough [Hit points] or [Energy points]!" << std::endl;
    return ;
}

void    ClapTrap::beRepaired(unsigned int amount)
{
    if (this->_HitPoints <= (10 - amount) && this->_EnergyPoints >= 1)
    {
        this->_HitPoints += amount;
        this->_EnergyPoints -= 1;
        std::cout << "[beRepaired] function called, current Hit Points is " << this->_HitPoints << std::endl;
        std::cout << "Current Energy Points is " << this->_EnergyPoints << std::endl;
    }
    else
        std::cout << "Error: Can't repaire. Not enough [Energy points] or [Hit Points] is full !" << std::endl;
    return ;
}


// // An overload of the insertion («) operator that inserts a floating-point representation
// // of the fixed-point number into the output stream object passed as parameter.
// std::ostream & operator << (std::ostream & cout, const ClapTrap & fx)
// {
// 	cout << fx.toFloat();
// 	return (cout);
// }