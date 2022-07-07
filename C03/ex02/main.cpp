/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thi-phng <thi-phng@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/25 18:12:00 by thi-phng          #+#    #+#             */
/*   Updated: 2022/07/07 12:40:05 by thi-phng         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int main(void)
{
	FragTrap Frag("Tom 🐱 ");
	std::cout << "-------------- [ Instance created ] ------------------" << std::endl;
	std::cout << Frag << std::endl;
	//std::ostream & operator << (std::ostream & cout, const FragTrap & fx)
	// -> Thanks to this function = announce function dude, magic right?

	std::cout << "-------------- [ Attack function ] ------------------" << std::endl;
	Frag.attack("Jerry 🐭 ");
	std::cout << Frag << std::endl;
	
	
	// std::cout << "-------------- [ Damage function ] ------------------" << std::endl;
	// Frag.ClapTrap::takeDamage(12);
	// std::cout << Frag << std::endl;


	std::cout << "-------------- [ High Five function ] ------------------" << std::endl;
	Frag.highFivesGuys();
	std::cout << Frag << std::endl;

	return (0);    
}