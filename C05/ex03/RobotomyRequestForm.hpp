/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thi-phng <thi-phng@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/16 19:00:43 by thi-phng          #+#    #+#             */
/*   Updated: 2022/07/18 13:06:15 by thi-phng         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#pragma once

#include <stdexcept>
#include <iostream>
#include <stdlib.h> //for srand
#include "Form.hpp"

class Form;

class RobotomyRequestForm : public Form
{
    public:
        RobotomyRequestForm(void); //default
        RobotomyRequestForm(std::string target);
        RobotomyRequestForm(RobotomyRequestForm const & fx); //copie
        
        RobotomyRequestForm &operator=(const RobotomyRequestForm & fx); // overload
        void                execute(Bureaucrat const &executor) const;

        std::string         getTarget(void) const;

        ~RobotomyRequestForm(void);
        
    protected:
    private:
        std::string         _Target;

};
