/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thi-phng <thi-phng@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/16 19:01:13 by thi-phng          #+#    #+#             */
/*   Updated: 2022/07/18 13:06:09 by thi-phng         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#pragma once

#include <stdexcept>
#include <iostream>
#include "Form.hpp"

class Form;

class PresidentialPardonForm : public Form
{
    public:
        PresidentialPardonForm(void); // default
        PresidentialPardonForm(std::string target);
        PresidentialPardonForm(PresidentialPardonForm const & fx); // copie
        
        PresidentialPardonForm &operator=(const PresidentialPardonForm & fx);
        void                    execute(Bureaucrat const & executor) const;
        
        std::string              getTarget(void)const;
        
        ~PresidentialPardonForm(void);   

    protected:

    private:
        std::string     _Target;
};