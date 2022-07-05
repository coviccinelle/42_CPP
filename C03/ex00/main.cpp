/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thi-phng <thi-phng@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/25 18:12:00 by thi-phng          #+#    #+#             */
/*   Updated: 2022/07/05 15:11:01 by thi-phng         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "ClapTrap.hpp"

int main( void ) {

    ClapTrap Fighter ("Tom");
	std::cout << Fighter.getName() << " was born" << std::endl;

    Fighter.annonce();

	Fighter.attack("Jerry");
	//Fighter.annonce();
	
	Fighter.beRepaired(2);
	//Fighter.annonce();

	Fighter.takeDamage(15);
	//Fighter.annonce();
	

    return 0;
}