/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thi-phng <thi-phng@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/20 18:38:00 by thi-phng          #+#    #+#             */
/*   Updated: 2022/06/21 11:16:54 by thi-phng         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <iostream>

Zombie *zombieHorde(int N, std::string name)
{
	int		i;

	i = 0;
	Zombie	*Horde = new Zombie[N];

	while (i < N)
	{
		Horde[i].naming(name);
		Horde[i].announce();
		std::cout << " Zombie number " << i << " is born" << std::endl;
		i++;
	}
	return (Horde);
}

