/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thi-phng <thi-phng@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/21 10:17:30 by thi-phng          #+#    #+#             */
/*   Updated: 2022/07/21 11:18:39 by thi-phng         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Data.hpp"

Data::Data(void)
{
    std::cout << "[Data]: Default constructor called" << std::endl;
}

Data::Data(int n) : data(i)
{
    std::cout << "[Data]: Param constructor called" << std::endl;
}

Data::Data(const Data & fx)
{
    std::cout << "[Data]: copy constructor called" << std::endl;
    *this = fx;
}

Data & Data::operator=(const Data & fx)
{
    std::cout << "[Data]: copy assignment operator overload called" << std::endl;   
    this->data = fx.data; /* assign value fx in this */
    return (*this);
}

Data::~Data(void)
{
    std::cout << "[Data]: Destructor called" << std::endl;
}


std::ostream & operator << (std::ostream & sortie, const Data & fx)
{
    sortie << "Value of data is : " << fx.data << std::endl;
    return (sortie);
}