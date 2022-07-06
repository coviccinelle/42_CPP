/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thi-phng <thi-phng@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/06 10:47:31 by thi-phng          #+#    #+#             */
/*   Updated: 2022/07/06 15:04:06 by thi-phng         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void) : ClapTrap("Default"), _gate(false)
{
	std::cout << "Default construtor [ScavTrap] called" << std::endl;
	this->_HitPoints = 100;
	this->_EnergyPoints = 50;
	this->_AttackDamage = 20;
	return ;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name), _gate(false)
{
	std::cout << "Constructor string [ScavTrap] called" << std::endl;
	this->_HitPoints = 100;
	this->_EnergyPoints = 50;
	this->_AttackDamage = 20;
}

ScavTrap::ScavTrap(ScavTrap const & fx) : ClapTrap(fx)
{
	*this = fx;
	return ;
}

ScavTrap &ScavTrap::operator=(const ScavTrap & fx)
{
	ClapTrap::operator=(fx);
	this->_gate = fx._gate;
	std::cout << "[ScavTrap] assignement operator called" << std::endl;
	return (*this);
}

ScavTrap::~ScavTrap(void)
{
	std::cout << "Destructor [ScavTrap] Called" << std::endl;
	return ;
}

//---------------------------------//

void    ScavTrap::attack(const std::string target)// canonical copy assignment operator overload -> redefine a function that exist already in the parent's class
{
    if (this->_EnergyPoints > 0)
    {
        this->_EnergyPoints -= 1;
        std::cout << "[ScavTrap]: [Attack]: " << this->_Name << " attacks " << target << ", causing ";
        std::cout << _AttackDamage << " points of damage!" << std::endl;
    }
    else
        std::cout << "⚠️ 🚧 🚸 ERROR :[ScavTrap]: Can't attack: Not enough [Energy points]!" << std::endl;
    return ;
}

//=================================//

void	ScavTrap::guardGate(void)
{
	if (this->_EnergyPoints <= 0)
		std::cout << "⚠️ 🚧 🚸 ERROR [ScavTrap]: Can't guard the Gate: Not enough [Energy points]!" << std::endl;
	else
	{
		this->_gate = true;
		std::cout << "[Scav Trap] came into guard Gate mode" << std::endl;
	}
}
int		ScavTrap::getGate(void) const
{
	return(this->_gate);
}

// An overload of the insertion («) operator that inserts a floating-point representation
// of the fixed-point number into the output stream object passed as paramete
std::ostream & operator << (std::ostream & cout, const ScavTrap & fx)
{
	std::cout << "Name = ";
	cout << fx.getName() << std::endl;
	std::cout << "Hit points = ";
	cout << fx.getHitp() << std::endl;
	std::cout << "Energy points = ";
	cout << fx.getEnergyp() << std::endl;
	std::cout << "Attack damage = ";
	cout << fx.getAttackd() << std::endl;
	std::cout << "Gate mode is ";
	if (fx.getGate() == 0)
		std::cout << "OFF! 🙁" << std::endl;
	else
		cout << "ON!!! 😊" << std::endl;
	return (cout);
}