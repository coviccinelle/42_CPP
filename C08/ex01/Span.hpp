/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thi-phng <thi-phng@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/27 09:46:33 by thi-phng          #+#    #+#             */
/*   Updated: 2022/07/28 15:23:42 by thi-phng         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#pragma once

#include <stdexcept>
#include <iostream>
#include <vector>
#include <iterator>
#include <algorithm>

class Span
{
    public:
        Span(void);
        Span(unsigned int n);
        Span(Span const & fx);

        Span & operator=(const Span & fx);
        unsigned int    getSize(void) const { return (this->size); }
        void            addNumber(int n);
        
        int             shortestSpan(void);
        int             longestSpan(void);
        
        void            SpanRangIt(int a, int b);
        void            display(void) const;
        
        ~Span(void);

        class AlreadyFull: public std::exception
        {
            virtual const char * what() const throw()
            {
                return ("This Span is already full");
            }
        };

        class NotFound: public std::exception
        {
            virtual const char * what() const throw()
            {
                return (" 🚧 🚸 Error: no numbers stored, or only one, no span can be found");
            }
        };
    
    protected:
    
    private:
        unsigned int        size;
        std::vector<int>    numbers;
};

std::ostream & operator << (std::ostream & sortie, const Span & fx);