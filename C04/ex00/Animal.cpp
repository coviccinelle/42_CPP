/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thi-phng <thi-phng@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/08 11:12:57 by thi-phng          #+#    #+#             */
/*   Updated: 2022/07/09 19:50:33 by thi-phng         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"


/*void    */Animal::Animal(void) : _type("Animal")									//canonical default constructeur
{
    std::cout << "[Animal]: Default constructor called" << std::endl;
    return ;
}

/*void    */Animal::Animal(std::string type) : _type(type)
{
    std::cout << "[Animal]: Str constructor called" << std::endl;
    return ;
}

/*void    */Animal::Animal(Animal const & fx)						//canonical copy constructor
{
    std::cout << "[Animal]: Canonical Copy constructor called" << std::endl;
    *this = fx;
    return ;
}


//Function

Animal & Animal::operator= ( const Animal & fx)
{
    std::cout << "[Animal]: Canonical copy assignement operator overload" << std::endl;
    this->_type = fx.getType();
    return (*this);
}

//Destructor
Animal::~Animal(void)	//canonical default destructor (virtual avoid memory leaks in case of inheritance)
{
    std::cout << "[Animal]: Destructor called" << std::endl;
    return ;
}
        
std::string	    Animal::getType(void)const
{
    //std::cout << "[Animal]: Get Type function called" << std::endl;
    return (this->_type) ;
}

        
void    Animal::setType(std::string type)
{
    //std::cout << "[Animal]: Set Type function called" << std::endl;
    this->_type = type;
    return ;
}

        
//A [virtual] function is a member function which
//is declared within a base class and is re-defined (overridden) by a derived class
void	Animal::makeSound(void)const
{
    std::cout << "[Animal]: Someone os going to make a noiceeeee" << std::endl;
    return ;
}