/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thi-phng <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/20 18:37:19 by thi-phng          #+#    #+#             */
/*   Updated: 2022/06/20 20:07:39 by thi-phng         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(void)
{
	std::cout << "Creating a zombie (constructor kind of stuff)" << std::endl;
	return (0);
}

Zombie::~Zombie(void)
{
	std::cout << "Zombie " << this->_name << " is dead" << std::endl;
	return (0);
}

void	Zombie::set_name(std::string name)
{
	this->_name = name;
}

void	Zombie::announce() const
{
	std::cout << this->_name << "Attention! This is the announcement : " << std::endl;
}
