/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thi-phng <thi-phng@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/08 11:13:43 by thi-phng          #+#    #+#             */
/*   Updated: 2022/07/13 13:49:04 by thi-phng         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Cat.hpp"

Cat::Cat(void) : Animal("Cat")                        //canonical default constructor
{
    std::cout << "[Cat 🐱]:    Default constructor called" << std::endl;
    return ;
}

Cat::Cat(Cat const & fx)              //canonical copy constructor
{
    std::cout << "[Cat 🐱]: Copy constructor called" << std::endl;
    *this = fx;
    return ;
}

Cat & Cat::operator=(const Cat & fx) //canonical copy assignment operator overload
{
    std::cout << "[Cat 🐱]: Copy assignment operator overload" << std::endl;
    this->_type = fx.getType();
    //this->setType(fx.getType());
    return (*this);
}

Cat::~Cat(void)                   //canonical destructor
{
    std::cout << "[Cat 🐱]:             Destructor called" << std::endl;
    return ;
}


//***** FUNCTION ****** //
void    Cat::makeSound(void) const
{
    std::cout << this->_type << "'s sound is Meooow! Meooow! Meooow!" << std::endl;
}