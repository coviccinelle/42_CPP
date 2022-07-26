/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thi-phng <thi-phng@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/22 21:47:18 by thi-phng          #+#    #+#             */
/*   Updated: 2022/07/26 13:35:47 by thi-phng         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include <stdexcept>
#include <cstdlib>

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
        T       & operator[](unsigned int i); // array subscripting operator -> to write
        const T & operator[](unsigned int i) const {
            if (i >= _size)
                throw Array::out_of_range();
            return (array[i]); }

        unsigned int    size(void) const
        {
            return (this->_size); // -> get size
        };
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
    std::cout << "[Array]: Array parametre constructor + create a new tab" << std::endl;
    for (unsigned int i = 0; i < this->_size; i++)
        this->array[i] = T();
}

template<typename T>
Array<T>::Array(Array const & fx) // copy constructor
{
    std::cout << "[Array]: Copy constructor" << std::endl;
    this->_size = fx.size();
    this->array = new T[fx._size];
    for (unsigned int i = 0; i < fx._size; i++)
        this->array[i] = fx.array[i];
}

template<typename T>
Array<T> & Array<T>::operator=(Array const & fx) // copy assignement operator overload constructor
{
    std::cout << "[Array]: copy assignement operator overload constructor" << std::endl;
    if (this->_size != 0 && this->_size != fx.size())
        delete [] this->array;
    this->_size = fx.size();
    this->array = new T[fx._size];
    for (unsigned int i = 0; i < fx._size; i++)
        this->array[i] = fx.array[i];
    return (*this);
}

//array subscripting operator in C++. The expression inside the brackets is called subscript
template<typename T>
T & Array<T>::operator[](unsigned int i)
{
    if (i >= this->_size)
        throw out_of_range();
    return (this->array[i]);
}

template<typename T>
Array<T>::~Array(void)
{
    std::cout << "[Array]: Destructor called" << std::endl;
    if (this->array)
        delete [] this->array;
}

template<typename T>
std::ostream & operator << (std::ostream & sortie, const Array<T> & array)
{
    sortie << "[";
    for (unsigned int i = 0; i < array.size(); i++)
    {
        sortie << array[i];
        if (i < array.size() - 1)
            sortie << ", ";
    }
    sortie << "]";
    return (sortie);
}