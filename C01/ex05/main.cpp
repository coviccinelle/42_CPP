/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thi-phng <thi-phng@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/20 20:56:14 by thi-phng          #+#    #+#             */
/*   Updated: 2022/06/22 17:53:37 by thi-phng         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main (void)
{
	Harl miniHarl;
	miniHarl.complain("DEBUG");

	std::cout << "--------" << std::endl;

	miniHarl.complain("ERROR");

	std::cout << "--------" << std::endl;

	miniHarl.complain("bchjdsbd");
	
	std::cout << "--------" << std::endl;
	
	miniHarl.complain("");

	std::cout << "--------" << std::endl;
	
	miniHarl.complain("INFO");
	
	std::cout << "--------" << std::endl;
	
	return (0);
}