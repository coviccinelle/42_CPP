/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thi-phng <thi-phng@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/20 20:52:25 by thi-phng          #+#    #+#             */
/*   Updated: 2022/06/21 15:44:28 by thi-phng         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name) : _Name(name)
{
    std::cout << "HumanB : Default constructor" << std::endl;
}


HumanB::~HumanB(void)
{
    std::cout << "Human B : Destructor" << std::endl;
}

void    HumanB::attack(void)
{
    std::cout << _Name << " attacks with their " << _Weapon->getType() << std::endl;
}

void    HumanB::setWeapon(Weapon &weapon)
{
    _Weapon = &weapon;
}
