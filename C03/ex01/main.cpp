/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thi-phng <thi-phng@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/25 18:12:00 by thi-phng          #+#    #+#             */
/*   Updated: 2022/07/06 15:11:05 by thi-phng         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main(void)
{
	ScavTrap scav("Tom 🐱 ");
	std::cout << "-------------- [ Instance created ] ------------------" << std::endl;
	std::cout << scav << std::endl;

	std::cout << "-------------- [ Attack function ] ------------------" << std::endl;
	scav.attack("Jerry 🐭 ");
	std::cout << scav << std::endl;
	
	
	std::cout << "-------------- [ Damage function ] ------------------" << std::endl;
	scav.ClapTrap::takeDamage(12);
	std::cout << scav << std::endl;


	std::cout << "-------------- [ Guard Gate function ] ------------------" << std::endl;
	scav.guardGate();
	std::cout << scav << std::endl;

	return (0);    
}