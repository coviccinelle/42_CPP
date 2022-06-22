/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thi-phng <thi-phng@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/22 18:17:41 by thi-phng          #+#    #+#             */
/*   Updated: 2022/06/22 18:17:45 by thi-phng         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
    std::cout << "randomChump  -----> ON" << std::endl;
    randomChump("OK");
    std::cout << "randomChump  -----> OFF" << std::endl << std::endl;
// on stack, will be "freed" when we get out of function


    std::cout << "newZombie  -----> ON" << std::endl;
    Zombie *main_zombie = newZombie("mini_zombie");
    std::cout << "newZombie  -----> OFF" << std::endl;
// sur heap -> need to be freed after

  main_zombie->announce();
    
  //il meurt ici
  delete main_zombie;
    

   
    return (0);
}
