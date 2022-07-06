/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thi-phng <thi-phng@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/06 10:47:31 by thi-phng          #+#    #+#             */
/*   Updated: 2022/07/06 11:15:29 by thi-phng         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void) : ClapTrap(), _gate(false)
{
	std::cout << "Default construtor ScavTrap called" << std::endl;
	this->_Hit_point = 100;
	this->_Energy_point = 50;
	this->_Attack_dammage = 20;
	return ;
}
ScavTrap::ScavTrap(std::string name) : ClapTrap(name), _gate(false)
{
	std::cout << "Constructeur string ScavTrap called" << std::endl;
	this->_Hit_point = 100;
	this->_Energy_point = 50;
	this->_Attack_dammage = 20;
}

ScavTrap::ScavTrap(ScavTrap const & rhs) : ClapTrap(rhs)
{
	*this = rhs;
	return ;
}

ScavTrap &ScavTrap::operator=(const ScavTrap & rhs)
{
	ClapTrap::operator=(rhs);
	this->_gate = rhs._gate;
	std::cout << "ScavTrap assignement operator called" << std::endl;
	return (*this);
}

ScavTrap::~ScavTrap(void)
{
	std::cout << "Destructor ScavTrap Called" << std::endl;
	return ;
}

void	ScavTrap::attack(std::string name)
{
	//	surcharge operator function
	//	on redefinie une fonction qui existe deja dans la classe parent
	if (this->_Energy_point <= 0)
		std::cout << "Scava Trap class : No more Energy point, you can't attack!" << std::endl;
	this->_Energy_point -= 1;
	std::cout << "ScavTrap " << this->_Name << " attacks "<< name << " , causing ";
	std::cout << this->_Attack_dammage << " points of damage!" << std::endl;
}

void	ScavTrap::guardGate(void)
{
	if (this->_Energy_point <= 0)
		std::cout << "No more Energy point, you can't came to guard Gate mode!" << std::endl;
	else
	{
		this->_gate = true;
		std::cout << "Scav Trap came into guard Gate mode" << std::endl;
	}
}
int		ScavTrap::getGate(void) const
{
	return(this->_gate);
}

// An overload of the insertion («) operator that inserts a floating-point representation
// of the fixed-point number into the output stream object passed as paramete
std::ostream & operator << (std::ostream & cout, const ScavTrap & st)
{
	std::cout << "Name = ";
	cout << st.getName() << std::endl;
	std::cout << "Hit points = ";
	cout << st.getHitp() << std::endl;
	std::cout << "Energy points = ";
	cout << st.getEnergyp() << std::endl;
	std::cout << "Attack damage = ";
	cout << st.getAttackd() << std::endl;
	std::cout << "Gate mode is ";
	if (st.getGate() == 0)
		std::cout << "not activate..." << std::endl;
	else
		cout << "activate!!" << std::endl;
	return (cout);
}