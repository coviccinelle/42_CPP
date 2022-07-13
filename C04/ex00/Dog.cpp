/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thi-phng <thi-phng@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/08 11:13:10 by thi-phng          #+#    #+#             */
/*   Updated: 2022/07/13 13:48:52 by thi-phng         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#pragma once

#include "Dog.hpp"

Dog::Dog(void) : Animal("Dog")                        //canonical default constructor
{
    std::cout << "[Dog 🐶]:    Default constructor called" << std::endl;
    return ;
}

Dog::Dog(Dog const & fx)              //canonical copy constructor
{
    std::cout << "[Dog 🐶]: Copy constructor called" << std::endl;
    *this = fx;
    return ;
}

Dog & Dog::operator=(const Dog & fx) //canonical copy assignment operator overload
{
    std::cout << "[Dog 🐶]: Copy assignment operator overload" << std::endl;
    this->_type = fx.getType();
    //this->setType(fx.getType());
    return (*this);
}

Dog::~Dog(void)                   //canonical destructor
{
    std::cout << "[Dog 🐶]:             Destructor called" << std::endl;
    return ;
}

void    Dog::makeSound(void) const
{
    std::cout << this->_type << "'s sound is Woof! Woof! Woof!" << std::endl;
}
