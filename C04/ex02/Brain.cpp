/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thi-phng <thi-phng@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/12 12:06:10 by thi-phng          #+#    #+#             */
/*   Updated: 2022/07/13 11:17:09 by thi-phng         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain(void)
{
    std::cout << "[Brain 🧠]:      Default constructor called" << std::endl;
    int i = 0;
    while (i < 100)
    {
        this->ideas[i] = "Ideas hihi";
        i++;
    }
    return ;
}

Brain::Brain(Brain const & fx)
{
    std::cout << "[Brain 🧠]:      Copy constructor called" << std::endl;
    int i = 0;

    while (i < 100)
    {
        this->ideas[i] = fx.ideas[i];
        i++;
    }
    return ;
}

Brain & Brain::operator=(const Brain & fx)
{
    std::cout << "[Brain 🧠]:      Copy assignment operator overload called" << std::endl;
    int i = 0;

    while (i <= 100)
    {
        // [i <= 100 OR i < 100] ???
        this->ideas[i] = fx.ideas[i];
    }
    return (*this);
}

Brain::~Brain(void)
{
    std::cout << "[Brain 🧠]:      Destructor called " << std::endl;
    return ;   
}

// std::string     _ideas[100];