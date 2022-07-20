/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Convert.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thi-phng <thi-phng@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/20 10:58:07 by thi-phng          #+#    #+#             */
/*   Updated: 2022/07/20 12:18:08 by thi-phng         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Convert.hpp"


			///////////////////////////////////
			///			Canonical			///
			///////////////////////////////////

Convert::Convert(void)
{
    this->av = NULL;
    std::cout << "[Convert]: Default Constructor called" << std::endl;
}

Convert::Convert(char *av) : av(av)
{
    std::cout << "[Convert]: Param construcctor called" << std::endl;
    return ;
}

Convert::Convert(const Convert & fx)
{
    std::cout << "[Convert]: Copy constructor called" << std::endl;
    *this = fx;
    return ;
}

Convert & Convert::operator=(const Convert & fx)
{
    this->av = fx.getArg();
    this->c = fx.getChar();
    this->i = fx.getInt();
    this->f = fx.getFloat();
    this->d = fx.getDouble();
    // assign values fx in this //
    return (*this);
}

Convert::~Convert(void)
{
    std::cout << "[Convert]: Destructor called" << std::endl;
    return ;
}


			///////////////////////////////////
			///			Functions			///
			///////////////////////////////////

char    *Con