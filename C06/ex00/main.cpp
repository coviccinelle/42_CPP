/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thi-phng <thi-phng@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/20 11:00:31 by thi-phng          #+#    #+#             */
/*   Updated: 2022/07/20 11:03:24 by thi-phng         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Convert.hpp"

int main(int ac, char **av)
{
    if (ac != 2)
    {
        std::cout << "Invalid arguments, only one argument accepted!" << std::endl;
        return (1);
    }
    Convert convert(av[1]);
    std::cout << convert;
    return (0);
}