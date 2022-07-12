/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thi-phng <thi-phng@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/12 12:06:10 by thi-phng          #+#    #+#             */
/*   Updated: 2022/07/12 12:57:38 by thi-phng         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain(void)
{
    std::cout << "[Brain]: Canonical Default constructor called" << std::endl;
    return ;
}

Brain::Brain(Brain const & fx)
{
    std::cout << "[Brain]: Canonical copy constructor called" << std::endl;
    return ;
}

Brain::Brain & operator=(const Brain & fx);
virtual ~Brain(void);

std::string     _ideas[100];