/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thi-phng <thi-phng@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/25 18:12:30 by thi-phng          #+#    #+#             */
/*   Updated: 2022/07/06 11:22:52 by thi-phng         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void) : _Name("Default"), _HitPoints(10), _EnergyPoints(10), _AttackDamage(0)
{
    std::cout << "Default constructor [ClapTrap] called" << std::endl;
    return ;
}


ClapTrap::ClapTrap(std::string name) : _Name(name), _HitPoints(10), _EnergyPoints(10), _AttackDamage(0)
{
    std::cout << "Name constructor [ClapTrap] called" << std::endl;
    return ;
}

ClapTrap::~ClapTrap()
{
    std::cout << "Destructor [ClapTrap] called" << std::endl;
    return ;
}


ClapTrap::ClapTrap(ClapTrap const & fx)    //canonical copy constructor
{
    std::cout << "Copy constructor [ClapTrap] called" << std::endl;
    *this = fx;
    return ;
}

ClapTrap & ClapTrap::operator=(const ClapTrap & fx)//copy assignment operator overload
{
    // init values
    std::cout << "Copy assignment operator [ClapTrap] called" << std::endl;

    this->_Name = fx.getName();
    this->_HitPoints = fx.getHitp();
    this->_EnergyPoints = fx.getEnergyp();
    this->_AttackDamage = fx.getAttackd();
    
    return *this;
}


//////////////////////////////////////////////////
///				Action Functions	    	   ///
//////////////////////////////////////////////////


void    ClapTrap::attack(const std::string & target)
{
    if (this->_EnergyPoints > 0)
    {
        this->_EnergyPoints -= 1;
        std::cout << "[Attack]: " << this->_Name << " attacks " << target << ", causing ";
        std::cout << _AttackDamage << " points of damage!" << std::endl;
    }
    else
        std::cout << "⚠️ 🚧 🚸 ERROR :: Can't attack: Not enough [Energy points]!" << std::endl;
    return ;
}


void    ClapTrap::takeDamage(unsigned int amount)
{
    if (this->_HitPoints > 0)
    {
        if (amount > this->_HitPoints)
            this->_HitPoints = 0;
        else
            this->_HitPoints -= amount;
        std::cout << "[Take damage] : " << this->_Name << " takes " << amount << " of damage from the enemy"<< std::endl;
    }
    else
        std::cout << "⚠️ 🚧 🚸 ERROR :: Can't take damage. Not enough [Hit points]! (You died already dude)" << std::endl;
    return ;
}

void    ClapTrap::beRepaired(unsigned int amount)
{
    if (this->_EnergyPoints > 0)
    {
        this->_HitPoints += amount;
        this->_EnergyPoints -= 1;
        std::cout << "[beRepaired] " << this->_Name << " repaired " << amount << " points of HitPoints" << std::endl;
    }
    else
        std::cout << "⚠️ 🚧 🚸 ERROR :: Can't repaire: Not enough [Energy points]!" << std::endl;
    return ;
}



//////////////////////////////////////////////////
///				Get Functions				   ///
//////////////////////////////////////////////////

std::string	ClapTrap::getName(void) const
{
	return (this->_Name);
}

unsigned int		ClapTrap::getHitp(void) const
{
	return (this->_HitPoints);
}

unsigned int		ClapTrap::getEnergyp(void) const
{
	return (this->_EnergyPoints);
}

unsigned int		ClapTrap::getAttackd(void) const
{
	return (this->_AttackDamage);
}

void	ClapTrap::annonce(void)const
{
	std::cout << std::endl;
    std::cout << "// ------------ *** ANOUNCE *** -------------- //" << std::endl;
	std::cout << this->_Name << "'s Energy points = " << this->_EnergyPoints << std::endl;
	std::cout << this->_Name << "'s Hit points = " << this->_HitPoints << std::endl;
	std::cout << std::endl;
}

