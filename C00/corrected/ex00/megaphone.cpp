/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thi-phng <thi-phng@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/17 12:51:49 by thi-phng          #+#    #+#             */
/*   Updated: 2023/02/14 15:11:54 by thi-phng         ###   ########.fr       */
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
		std::string av1[i];
		av1[i] = av[i];
		// using toupper + iterator to go from begin to end of the string, without using a loop like in C
		std::transform(av1[i].begin(), av1[i].end(), av1[i].begin(), ::toupper);
		std::cout << av1[i];
		std::cout << " ";
		i++;
	}
	std::cout << "\n";
	return (0);
}
