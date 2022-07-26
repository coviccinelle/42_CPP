/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thi-phng <thi-phng@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/26 21:43:17 by thi-phng          #+#    #+#             */
/*   Updated: 2022/07/26 21:54:37 by thi-phng         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#pragma once

#include <iostream>
#include <stack>

// https://stackoverflow.com/questions/525365/does-stdstack-expose-iterators
// how to use existed objet in class template of stack

template<typename T>
class MutantStack : public std::stack<T>
{
    public:
        MutantStack(){}//constructor
        MutantStack(MutantStack<T> const & fx){this->c = fx.c;}
        //a protected object in the container stack that allow us to acces to deque -> iterator of deque
        
        //*** Functions ***//
        MutantStack<T> & operator=(const MutantStack<T> & fx){this->c = fx.c;}

        ~MutantStack(){}

        typedef typename std::stack<T>::container_type:: iterator iterator;
        iterator    begin() {return this->c.begin(); }
        iterator    end() {return this->c.end(); }
        
    private:  
};