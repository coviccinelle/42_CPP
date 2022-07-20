/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Convert.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thi-phng <thi-phng@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/20 10:57:59 by thi-phng          #+#    #+#             */
/*   Updated: 2022/07/20 11:43:22 by thi-phng         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <stdexcept>
#include <stdlib.h>
#include <iostream>
#include <ctype.h>

class Convert
{
    public:
        // *** Constructors *** //
        Convert(void);  //default
        Convert(char *av);
        Convert(const Convert & fx); //copy

        // *** Functions *** //
        Convert & operator=(const Convert & fx); // copy assignment operator overload
        
        // *** Get functions *** //
        char    *getArg(void) const;
        char    getChar(void) const;
        int     getInt(void) const;
        float   getFloat(void) const;
        double  getDouble(void) const;
        
        char    toChar(void);
        int     toInt(void);
        float   toFloat(void);
        double  toDouble(void);
        

        // *** exception *** //
        class Impossible: public std::exception
        {
            virtual const char * what() const throw()
            {
                return ("Impossible");
            }
        };

        class   Nondisplayable: public std::exception
        {
            virtual const char * what() const throw()
            {
                return ("Non displayable");
            }
        };
        
        // *** Destructor *** //
        ~Convert(void); //destructor

    protected:
    private:
        char    *av;
        char    c;
        int     i;
        float   f;
        double  d;
};

std::ostream & operator << (std::ostream & sortie, Convert & fx);
