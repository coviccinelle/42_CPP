/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thi-phng <thi-phng@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/20 20:51:23 by thi-phng          #+#    #+#             */
/*   Updated: 2022/06/24 16:45:10 by thi-phng         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(void) : _Type("default")
{
    std::cout << "Weapon : Default constructor" << std::endl;
}

Weapon::Weapon(std::string type) : _Type(type)
{
     std::cout << "Weapon : String constructor" << std::endl;
}

Weapon::~Weapon(void)
{
    std::cout << "Weapon : Destructor" << std::endl << std::endl;
}


std::string const & Weapon::getType(void)
{
    return(_Type);
}

void Weapon::setType(std::string const New)
{
    _Type = New;
}