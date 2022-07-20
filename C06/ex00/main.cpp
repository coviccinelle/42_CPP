/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thi-phng <thi-phng@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/20 11:00:31 by thi-phng          #+#    #+#             */
/*   Updated: 2022/07/20 15:50:35 by thi-phng         ###   ########.fr       */
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
    // we create a class where there is a char/int/float/double
    // We create an instance
    Convert convert(av[1]);
    // Now send the arg to a function of our instance -> show it
    std::cout << convert;
    return (0);
}