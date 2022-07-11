/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thi-phng <thi-phng@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/08 11:13:10 by thi-phng          #+#    #+#             */
/*   Updated: 2022/07/11 14:56:44 by thi-phng         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#pragma once

#include "Dog.hpp"

Dog::Dog(void)                        //canonical default constructor
{
    std::cout << "[Dog]: Default constructor called" << std::endl;
    return ;
}


Dog::Dog(Dog const & fx)              //canonical copy constructor
{
    std::cout << "[Dog]: Copy constructor called" << std::endl;
    return ;
}

Dog & operator= (const Dog & fx) //canonical copy assignment operator overload
{
    
}

virtual ~Dog(void);                   //canonical destructor



void    makeSound(void) const;
