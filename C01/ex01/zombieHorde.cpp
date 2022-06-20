/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thi-phng <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/20 18:38:00 by thi-phng          #+#    #+#             */
/*   Updated: 2022/06/20 19:51:09 by thi-phng         ###   ########.fr       */
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
		std::count << "Zombie number " << i << " ";
		Horde[i].announce();
		i++;
	}
	return (Horde);
}

