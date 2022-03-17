/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thi-phng <thi-phng@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/17 12:51:49 by thi-phng          #+#    #+#             */
/*   Updated: 2022/03/17 13:42:32 by thi-phng         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(int ac, char **av)
{
	if (ac == 1)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *\n";
		return (0);
	}
	int i = 1;
	while (i < ac)
	{
		int j = 0;
		while (av[i][j])
		{
			if (av[i][j] >= 'a' && av[i][j] <= 'z')
				av[i][j] -= 32;
			j++;
		}
		std::cout << av[i];
		std::cout << " ";
		i++;
	}
	std::cout << "\n";
	return (0);
}
