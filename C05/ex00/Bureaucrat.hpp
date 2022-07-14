/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thi-phng <thi-phng@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/14 13:44:33 by thi-phng          #+#    #+#             */
/*   Updated: 2022/07/14 13:58:31 by thi-phng         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "iostream"

class Bureaucrat
{
    Bureaucrat(void);                               //default
    Bureaucrat(std::string name, int grade);
    Bureaucrat(Bureaucrat const & fx);              //copy
    Bureaucrat & operator=(const Bureaucrat & fx);  //overload

    std::string     getName(void)const;
    unsigned int    getGrade(void)const;

    void            setGrade(unsigned int grade);

    
    ~Bureaucrat(void);                              //destructor
};