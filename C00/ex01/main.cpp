/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thi-phng <thi-phng@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/18 18:19:42 by thi-phng          #+#    #+#             */
/*   Updated: 2022/04/23 15:55:15 by thi-phng         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstring>
#include "Contact.Class.hpp"
#include "PhoneBook.Class.hpp"

int		main(int ac, char **av)
{
	(void)av;
	if (ac == 1)
	{
		std::cout << "Ok Argument but the PhoneBook is not done yet, pls come back later hihi" << std::endl;
		//do something
		return (0);
	}
	std::cout << "Invalid Arguments" << std::endl;
	return (0);
}
