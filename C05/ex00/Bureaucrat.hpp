/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thi-phng <thi-phng@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/14 13:44:33 by thi-phng          #+#    #+#             */
/*   Updated: 2022/07/14 14:37:25 by thi-phng         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "iostream"

class Bureaucrat
{
    public:
        
        Bureaucrat(void);                               //default
        Bureaucrat(std::string name, int grade);
        Bureaucrat(Bureaucrat const & fx);              //copy
        Bureaucrat & operator=(const Bureaucrat & fx);  //overload

        std::string     getName(void)const;
        unsigned int    getGrade(void)const;

        void            setGrade(unsigned int grade);

        void            increment(void);
        void            decrement(void);
        void            HighOutOfRange(void); //too high exception
        void            LowOutOfRange(void); //too low exception
        
        ~Bureaucrat(void);                              //destructor
    protected:
    
    private:
        std::string const   _Name;
        int                 _Grade;
        
};

std::ostream & operator << (std::ostream & sortie, const Bureaucrat & fx);