/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thi-phng <thi-phng@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/20 20:56:14 by thi-phng          #+#    #+#             */
/*   Updated: 2022/06/23 12:45:58 by thi-phng         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main (int ac, char **av)
{
	if (ac == 2)
	{
		Harl miniHarl;
		miniHarl.complain(av[1]);
	}
	else
		std::cout << "Error: Wrong number of argument" << std::endl;
	return (0);
}
