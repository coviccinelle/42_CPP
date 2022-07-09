/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thi-phng <thi-phng@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/08 11:13:34 by thi-phng          #+#    #+#             */
/*   Updated: 2022/07/09 16:28:48 by thi-phng         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Animal.hpp"

class WrongCat : public Animal
{
    public:
        WrongCat(void);                        //canonical default constructor
        WrongCat(WrongCat const & fx);              //canonical copy constructor
        WrongCat & operator= (const WrongCat & fx); //canonical copy assignment operator overload
        virtual ~WrongCat();                   //canonical destructor
        
        void    makeSound(void) const;
        // const = read-only that doens't modify the object for whih it's called
    
    protected:
    private:
};