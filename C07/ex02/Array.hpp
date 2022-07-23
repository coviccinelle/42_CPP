/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thi-phng <thi-phng@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/22 21:47:18 by thi-phng          #+#    #+#             */
/*   Updated: 2022/07/23 21:53:06 by thi-phng         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <stdexcept>

template <typename T>

class Array
{
    class   out_of_range: public std::exception
    {
        public:
            virtual const char * what() const throw()
            {
                return ("Array index is out of range \n");
            }
    };
    
    public:
        Array(void);
        Array(unsigned int n); //param constructor
        Array(Array const & fx); //copy constructor

        Array   & operator=(const Array & fx); //copy assignment operator overload
        T       & operator[](unsigned int pos)const; // array subscripting operator
        unsigned int    size(void) const;
        {
            return (this->_size); // -> get size
        }
        virtual ~Array(void);
        
    private:
        unsigned int    _size;
        T               * array;
};


template<typename T>
Array<T>::Array(void) : _size(0), array(NULL)// default constructor
{
    std::cout << "[Array]: Default constructor" << std::endl;
}

template<typename T>
Array<T>::Array(unsigned int n) : _size(n), array(new T[_size])// create new tab
{
    for (unsigned int i = 0; i < this->_size; i++)
        this->array[i] = T();
    std::cout << "[Array]: Array parametre constructor" << std::endl;
}

template<typename T>
Array<T>::Array(Array const & fx) // copy constructor
{
    std::cout << "[Array]: Copy constructor" << std::endl;
    this->_size = fx.size();
    this->array = new T(fx._size);
}
