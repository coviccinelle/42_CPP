/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thi-phng <thi-phng@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/07 11:52:20 by thi-phng          #+#    #+#             */
/*   Updated: 2022/07/07 13:44:42 by thi-phng         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(void) : ClapTrap("Default"), _gate(false)
{
	std::cout << "Default construtor [FragTrap] called" << std::endl;
	this->_HitPoints = 100;
	this->_EnergyPoints = 100;
	this->_AttackDamage = 30;
	return ;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name), _gate(false)
{
	std::cout << "Constructor string [FragTrap] called" << std::endl;
	this->_HitPoints = 100;
	this->_EnergyPoints = 100;
	this->_AttackDamage = 30;
}

FragTrap::FragTrap(FragTrap const & fx) : ClapTrap(fx)
{
	*this = fx;
	return ;
}

FragTrap &FragTrap::operator=(const FragTrap & fx)
{
	ClapTrap::operator=(fx);
    this->_Name = fx.getName();
    this->_HitPoints = fx.getHitp();
    this->_EnergyPoints = fx.getEnergyp();
    this->_AttackDamage = fx.getAttackd();
	std::cout << "[FragTrap] assignement operator called" << std::endl;
	return (*this);
}

FragTrap::~FragTrap(void)
{
	std::cout << "Destructor [FragTrap] Called" << std::endl;
	return ;
}

//---------------------------------//

void    FragTrap::attack(const std::string target)// canonical copy assignment operator overload -> redefine a function that exist already in the parent's class
{
    if (this->_EnergyPoints > 0)
    {
        this->_EnergyPoints -= 1;
        std::cout << "[FragTrap]: [Attack]: " << this->_Name << " attacks " << target << ", causing ";
        std::cout << _AttackDamage << " points of damage!" << std::endl;
    }
    else
        std::cout << "⚠️ 🚧 🚸 ERROR :[FragTrap]: Can't attack: Not enough [Energy points]!" << std::endl;
    return ;
}

//=================================//


void	FragTrap::highFiveGuys(void)
{
    std::cout << "Hello " << this->_Name << "Give me a highfive ✋" << std::endl;
	//this->HighFives = number;
}

// int		FragTrap::getHigh5(void) const
// {
// 	return(this->_HighFives);
// }

// An overload of the insertion («) operator that inserts a floating-point representation
// of the fixed-point number into the output stream object passed as paramete
std::ostream & operator << (std::ostream & sortie, const FragTrap & fx)
{
	std::cout << "Name = ";
	cout << fx.getName() << std::endl;
	std::cout << "Hit points = ";
	cout << fx.getHitp() << std::endl;
	std::cout << "Energy points = ";
	cout << fx.getEnergyp() << std::endl;
	// std::cout << "High five count is: ";
    // std::cout << fx.getHigh5 << std::endl;
	return (sortie);
}