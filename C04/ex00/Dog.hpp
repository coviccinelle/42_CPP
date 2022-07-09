/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thi-phng <thi-phng@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/08 11:13:22 by thi-phng          #+#    #+#             */
/*   Updated: 2022/07/09 10:59:40 by thi-phng         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Animal.hpp"

class Dog : public Animal
{
    public:
        Animal();
        Animal(Animal const & fx);              //canonical copy constructor
        Animal & operator= (const Animal & fx); //canonical copy assignment operator overload
        ~Animal();
        
    private:
    
    
};