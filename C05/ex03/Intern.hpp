/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thi-phng <thi-phng@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 14:20:46 by thi-phng          #+#    #+#             */
/*   Updated: 2022/07/19 12:03:24 by thi-phng         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include <stdexcept>
#include <iostream>

class ShrubberyCreationForm;
class RobotomyRequestForm;
class PresidentialPardonForm;

class Intern
{
    typedef void (Form:::*ft_ptr)(void); //definition a new type of variable
    public:
        Intern(void);              // default
        Intern(Intern const & fx); // copie


        Intern & operator=(const Intern & fx); //overload
        Form    * makeForm(std::string nameForm, std::string targetForm);
        
        ~Intern(void); // destructor
        
    protected:
    private:
};

std::ostream & operator << (std::ostream & sorie, const Intern & fx);