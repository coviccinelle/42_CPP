/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*  WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thi-phng <thi-phng@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/08 11:43:16 by thi-phng          #+#    #+#             */
/*   Updated: 2022/07/11 16:16:23 by thi-phng         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#include "WrongCat.hpp"

WrongCat::WrongCat(void) : WrongAnimal("WrongCat")                        //canonical default constructor
{
    std::cout << "[WrongCat 💣 😿]:    Default constructor called" << std::endl;
    return ;
}

WrongCat::WrongCat(WrongCat const & fx)              //canonical copy constructor
{
    std::cout << "[WrongCat 💣 😿]: Copy constructor called" << std::endl;
    *this = fx;
    return ;
}

WrongCat & WrongCat::operator=(const WrongCat & fx) //canonical copy assignment operator overload
{
    std::cout << "[WrongCat 💣 😿]: Copy assignment operator overload" << std::endl;
    this->_type = fx.getType();
    //this->setType(fx.getType());
    return (*this);
}

WrongCat::~WrongCat(void)                   //canonical destructor
{
    std::cout << "[WrongCat 💣 😿]:     Destructor called" << std::endl;
    return ;
}


//***** FUNCTION ****** //
void    WrongCat::makeSound(void) const
{
    std::cout << this->_type << "'s sound is Meooow! Meooow! Meooow!" << std::endl;
}