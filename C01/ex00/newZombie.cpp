/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thi-phng <thi-phng@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/22 18:17:34 by thi-phng          #+#    #+#             */
/*   Updated: 2022/06/22 18:17:35 by thi-phng         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

//alloue sur la stack
Zombie *newZombie(std::string name)
{
    Zombie *new_zombie = new Zombie(name);
    
    return (new_zombie);
}
