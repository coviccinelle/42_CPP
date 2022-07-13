/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thi-phng <thi-phng@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/08 11:13:22 by thi-phng          #+#    #+#             */
/*   Updated: 2022/07/12 14:39:42 by thi-phng         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal
{
    public:
        Dog(void);                        //canonical default constructor
        Dog(Dog const & fx);              //canonical copy constructor
        Dog & operator= (const Dog & fx); //canonical copy assignment operator overload
        virtual ~Dog(void);                   //canonical destructor
        
        void    makeSound(void) const;
        // const = read-only that doens't modify the object for whih it's called
        Brain   *getBrain(void)const;
    
    protected:
    private:
        Brain   *id;
};