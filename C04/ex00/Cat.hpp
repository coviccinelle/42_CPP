/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thi-phng <thi-phng@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/08 11:13:34 by thi-phng          #+#    #+#             */
/*   Updated: 2022/07/09 16:19:21 by thi-phng         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Animal.hpp"

class Cat : public Animal
{
    public:
        Cat(void);                        //canonical default constructor
        Cat(Cat const & fx);              //canonical copy constructor
        Cat & operator= (const Cat & fx); //canonical copy assignment operator overload
        virtual ~Cat();                   //canonical destructor
        
        void    makeSound(void) const;
        // const = read-only that doens't modify the object for whih it's called
    
    protected:
    private:
};