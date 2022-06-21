/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thi-phng <thi-phng@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/20 18:37:19 by thi-phng          #+#    #+#             */
/*   Updated: 2022/06/21 11:05:33 by thi-phng         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <iostream>

Zombie::Zombie(void)
{
//	std::cout << "Creating a zombie (constructor kind of stuff)" << std::endl;
	return ;
}

Zombie::~Zombie(void)
{
	std::cout << "Zombie " << this->_name << " is dead" << std::endl;
	return ;
}

void	Zombie::naming(std::string name)
{
	this->_name = name;
}

void	Zombie::announce() const
{
	std::cout  << " Attention! " << this->_name;
}
