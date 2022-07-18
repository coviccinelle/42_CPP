/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thi-phng <thi-phng@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/16 19:00:19 by thi-phng          #+#    #+#             */
/*   Updated: 2022/07/18 10:46:25 by thi-phng         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <stdexcept>
#include <iostream>
#include <fstream>
#include <cstring>
#include "Form.hpp"

class Form;

class ShrubberyCreationForm : public Form
{
    public:
        ShrubberyCreationForm(void); //default
        ShrubberyCreationForm(std::string target);
        ShrubberyCreationForm(std::string name, unsigned int grade);
        ShrubberyCreationForm(ShrubberyCreationForm const & fx); // copy
        
        ShrubberyCreationForm &operator= (const ShrubberyCreationForm & fx); //overload
        void                  execute(Bureaucrat const &executor) const;

        std::string           getTarget(void)const;
        
        ~ShrubberyCreationForm(void);
        
    protected:
    private:
        std::string             _Target;
};
