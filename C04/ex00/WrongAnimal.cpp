/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongWrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thi-phng <thi-phng@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/08 11:43:41 by thi-phng          #+#    #+#             */
/*   Updated: 2022/07/11 16:17:30 by thi-phng         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "WrongAnimal.hpp"

/*void    */WrongAnimal::WrongAnimal(void) : _type("WrongAnimal")									//canonical default constructeur
{
    std::cout << "[WrongAnimal 💣🐒 ]: Default constructor called" << std::endl;
    return ;
}

/*void    */WrongAnimal::WrongAnimal(std::string type) : _type(type)
{
    std::cout << "[WrongAnimal 💣🐒 ]: Str constructor called" << std::endl;
    return ;
}

/*void    */WrongAnimal::WrongAnimal(WrongAnimal const & fx)						//canonical copy constructor
{
    std::cout << "[WrongAnimal 💣🐒 ]: Canonical Copy constructor called" << std::endl;
    *this = fx;
    return ;
}

//Function
WrongAnimal & WrongAnimal::operator= ( const WrongAnimal & fx)
{
    std::cout << "[WrongAnimal 💣🐒 ]: Canonical copy assignement operator overload" << std::endl;
    this->_type = fx.getType();
    return (*this);
}

//Destructor
WrongAnimal::~WrongAnimal(void)	//canonical default destructor (virtual avoid memory leaks in case of inheritance)
{
    std::cout << "[WrongAnimal 💣🐒 ]:  Destructor called" << std::endl;
    return ;
}
        
std::string	    WrongAnimal::getType(void)const
{
    std::cout << "[WrongAnimal 💣🐒 ]: Get Type function called" << std::endl;
    return (this->_type) ;
}

        
void    WrongAnimal::setType(std::string type)
{
    std::cout << "[WrongAnimal 💣🐒 ]: Set Type function called" << std::endl;
    this->_type = type;
    return ;
}

//A [virtual] function is a member function which
//is declared within a base class and is re-defined (overridden) by a derived class
void	WrongAnimal::makeSound(void)const
{
    std::cout << "[WrongAnimal 💣🐒 ]: " << this->_type << "'s sound is unknow" << std::endl;
    return ;
}