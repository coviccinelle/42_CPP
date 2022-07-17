/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thi-phng <thi-phng@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/16 19:01:23 by thi-phng          #+#    #+#             */
/*   Updated: 2022/07/17 11:07:50 by thi-phng         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"


PresidentialPardonForm::PresidentialPardonForm(void) : Form("PresidenForm", 25, 5)
{
    std::cout << "[PresidentialPardonForm] : Default constructor called" << std::endl;
    this->_Target = "";
}

PresidentialPardonForm::PresidentialPardonForm(std::string target) : Form("PresidentForm", 25, 5), _Target(target)
{
    std::cout << "[PresidentialPardonForm]: Str target constructor called" << std::endl;
}


        PresidentialPardonForm(std::string name, unsigned int grade);
        PresidentialPardonForm(PresidentialPardonForm const & fx); // copie
        
        PresidentialPardonForm &operator=(const PresidentialPardonForm & fx);
        void                    execute(Bureaucrat const & executor) const;
        
        std::tring              getTarget(void)const;
        
        ~PresidentialPardonForm(void);   