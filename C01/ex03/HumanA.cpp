/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thi-phng <thi-phng@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/20 20:51:57 by thi-phng          #+#    #+#             */
/*   Updated: 2022/06/21 15:46:33 by thi-phng         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon) : _Name(name), _Weapon(weapon)
{
    std::cout << "Human A : Default constructor" << std::endl;
}

HumanA::~HumanA(void)
{
    std::cout << "Human A : Destructor" << std::endl;
}

void    HumanA::attack(void)
{
    std::cout << _Name << " attacks with their " << _Weapon.getType() << std::endl;
}
