/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thi-phng <thi-phng@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/07 11:52:20 by thi-phng          #+#    #+#             */
/*   Updated: 2022/07/08 15:05:23 by thi-phng         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(void) : ClapTrap("Default")
{
	std::cout << "Default construtor [FragTrap] called" << std::endl;
	this->_HitPoints = 100;
	this->_EnergyPoints = 100;
	this->_AttackDamage = 30;
	return ;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name)
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

//-------------*** Action Functions ***--------------//

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

void	FragTrap::highFiveGuys(void)
{
    // std::cout << "Hello " << this->_Name << "Give me a highfives ✋" << std::endl;
	if (this->_EnergyPoints < 1)
		std::cout << "⚠️ 🚧 🚸 ERROR :[FragTrap]: Can't high fives: Not enough [Energy points]!" << std::endl;
	else
	{
		std::string	cmd;
		std::cout << "Hey hey! How are you doing? Give a high fives ✋! (type [high fives please])" << std::endl;
		std::getline(std::cin, cmd);
		if (cmd == "high fives please")
		{
			this->_highFives = true;
			std::cout << "Thank you for the high fives!!^^" << std::endl;
		}
		else
			std::cout << "No? Aukay! Nevermind, it's fine, I get rejected all the time..." << std::endl;
	}
}

int	FragTrap::getHighFives(void) const
{
	return(this->_highFives);
}

//=================================//

// An overload of the insertion («) operator that inserts a floating-point representation
// of the fixed-point number into the output stream object passed as paramete
std::ostream & operator << (std::ostream & sortie, const FragTrap & fx)
{
	std::cout << "Name = ";
	sortie << fx.getName() << std::endl;
	std::cout << "Hit points = ";
	sortie << fx.getHitp() << std::endl;
	std::cout << "Energy points = ";
	sortie << fx.getEnergyp() << std::endl;
	std::cout << "Attack Damage points = ";
	sortie << fx.getAttackd() << std::endl;
	std::cout << "High five status = " << std::endl;
	if (fx.getAttackd() == true)
		std::cout << "Status : ON ! Yes, I got a high five, I'm so happy 😊" << std::endl;
	else
		std::cout << "Status : OFF! Nah, I'm still waiting for my high five 🙁" << std::endl;
	return (sortie);
}
