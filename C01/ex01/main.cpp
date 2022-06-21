/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thi-phng <thi-phng@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/20 18:37:00 by thi-phng          #+#    #+#             */
/*   Updated: 2022/06/21 11:18:08 by thi-phng         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int		main()
{

	std::cout << "Let's start the zombieHorde shall we?" << std::endl << std::endl;

	// try to allocate N Zombie objects in a single allocation, one name for
	// each zombie ad parameter -----> The function returns a pointer to the
	// first zombie.
	
	Zombie *Horde = zombieHorde(15, "[Robinhood]");


	delete [] Horde;
	return (0);
}
