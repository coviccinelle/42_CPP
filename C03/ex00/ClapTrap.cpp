/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thi-phng <thi-phng@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/25 18:12:30 by thi-phng          #+#    #+#             */
/*   Updated: 2022/07/05 20:41:32 by thi-phng         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void) : _Name("Default"), _HitPoints(10), _EnergyPoints(10), _AttackDamage(0)
{
    std::cout << "Default constructor called hihi" << std::endl;
    return ;
}


ClapTrap::ClapTrap(std::string name) : _Name(name), _HitPoints(10), _EnergyPoints(10), _AttackDamage(0)
{
    std::cout << "Name constructor called" << std::endl;
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
    // init values
    std::cout << "Copy assignment operator called" << std::endl;

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
    if (/*this->_HitPoints > 0 && */this->_EnergyPoints > 0)
    {
        this->_EnergyPoints -= 1;
        std::cout << "[ClapTrap]: " << this->_Name << " attacks " << target << ", causing ";
        std::cout << _AttackDamage << " points of damage!" << std::endl;
    }
    else
        std::cout << "Error: Can't attack: Not enough [Energy points]!" << std::endl;
    return ;
}


void    ClapTrap::takeDamage(unsigned int amount)
{
  //  unsigned int     a;
   // a = this->_HitPoints;
    
    if (this->_HitPoints >= 1)
    {
        if (amount > this->_HitPoints)
            this->_HitPoints = 0;
        else
            this->_HitPoints -= amount;
        this->_EnergyPoints -= 1;
        std::cout << "Take damage function called" << std::endl;
    }
    else
        std::cout << "Error: Can't take damage. Not enough [Hit points] or [Energy points]!" << std::endl;
    return ;

    // if (this->_HitPoints < 1)
    // {
    //     std::cout << "Error: Can't take damage. Not enough [Hit points] or [Energy points]!" << std::endl;
    // }
    // else{
    //     this->_HitPoints -= amount;
    //     this->_EnergyPoints -= 1;
    //     std::cout << "[Take damage] : function called" << std::endl;
    // }
    return ;
    
}

void    ClapTrap::beRepaired(unsigned int amount)
{
    // unsigned int     a;
    // a = this->_HitPoints;
    //if (a <= (10 - amount) && this->_EnergyPoints >= 1)
    if (/*this->_HitPoints <= (10 - amount) && */this->_EnergyPoints >= 1)
    {
        this->_HitPoints += amount;
        this->_EnergyPoints -= 1;
        std::cout << "[beRepaired] function called" << std::endl;
    }
    else if (this->_HitPoints > (10 - amount))
    {
        std::cout << "Error: Can't repaire: [Hit Points] is full !" << std::endl;
        //this->_HitPoints = 10;
    }
    else
        std::cout << "Error: Can't repaire: Not enough [Energy points]!" << std::endl;
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
	std::cout << "ClapTrap's Energy points = " << this->_EnergyPoints << std::endl;
	std::cout << "ClapTrap's Hit points = " << this->_HitPoints << std::endl;
	std::cout << std::endl;
}


// // An overload of the insertion («) operator that inserts a floating-point representation
// // of the fixed-point number into the output stream object passed as parameter.
// std::ostream & operator << (std::ostream & cout, const ClapTrap & fx)
// {
// 	cout << fx.toFloat();
// 	return (cout);
// }