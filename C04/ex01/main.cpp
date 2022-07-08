/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thi-phng <thi-phng@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/25 18:12:00 by thi-phng          #+#    #+#             */
/*   Updated: 2022/07/06 10:17:10 by thi-phng         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "ClapTrap.hpp"

int main( void ) 
{
	ClapTrap Fighter("Tom");
	std::cout  << Fighter.getName() << " was born" << std::endl;

    Fighter.annonce();

    std::cout  <<  std::endl;
	Fighter.attack("Jerry");
	Fighter.annonce();
    
    std::cout  <<  std::endl;
	Fighter.beRepaired(2);
	Fighter.annonce();

    std::cout  <<  std::endl;
	Fighter.takeDamage(15);
	Fighter.annonce();
	
    std::cout  <<  std::endl;
	Fighter.attack("Jerry");
	Fighter.annonce();

    std::cout  <<  std::endl;
	Fighter.beRepaired(22);
	Fighter.annonce();

    std::cout  <<  std::endl;
	Fighter.takeDamage(10);
	Fighter.annonce();
	
	
	Fighter.attack("Jerry");
	Fighter.attack("Jerry");
	Fighter.attack("Jerry");
    Fighter.attack("Jerry");
    Fighter.attack("Jerry");
    Fighter.attack("Jerry");


	std::cout << std::endl << "------------ Should not work anymore ------------------" << std::endl << std::endl;
	
	Fighter.attack("Jerry");
	Fighter.annonce();

	std::cout  <<  std::endl;
	Fighter.takeDamage(15);
	Fighter.annonce();

	std::cout << "------------ Should not work anymore ------------------" << std::endl;
	std::cout  <<  std::endl;
	Fighter.takeDamage(15);
	Fighter.annonce();
	
	return (0); 
}