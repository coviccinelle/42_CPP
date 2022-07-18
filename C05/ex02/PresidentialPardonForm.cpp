/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thi-phng <thi-phng@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/16 19:01:23 by thi-phng          #+#    #+#             */
/*   Updated: 2022/07/18 14:30:11 by thi-phng         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

			///////////////////////////////////
			///	    *** Canonical	*** 	///
			///////////////////////////////////
            
PresidentialPardonForm::PresidentialPardonForm(void) : Form("PresidenForm", 25, 5)
{
    std::cout << "[PresidentialPardonForm] : Default constructor called" << std::endl;
    this->_Target = "";
}

PresidentialPardonForm::PresidentialPardonForm(std::string target) : Form("PresidentForm", 25, 5), _Target(target)
{
    std::cout << "[PresidentialPardonForm]: Str target constructor called" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const & fx) : Form(fx)
{
    std::cout << "[PresidentialPardonForm]: Copy constructor called" << std::endl;
    this->_Target = fx.getTarget();
}

PresidentialPardonForm & PresidentialPardonForm::operator=(const PresidentialPardonForm & fx)
{
    std::cout << "[PresidentialPardonForm]: Copy constructor called" << std::endl;
    this->_Target = fx.getTarget();
    return (*this);
}

PresidentialPardonForm::~PresidentialPardonForm(void)
{
    std::cout << "[PresidentialPardonForm]: Destructor called" << std::endl;
}

			///////////////////////////////////
			///	    *** Functions	*** 	///
			///////////////////////////////////


std::string  PresidentialPardonForm::getTarget(void)const
{
    return (this->_Target);
}


void    PresidentialPardonForm::execute(Bureaucrat const & executor) const
{
    try
    {
        this->checker_exec(executor);
    }
    catch(const std::exception & e)
    {
        std::cerr << "[President]: 🚧 🚸 We couldn’t execute because " << e.what() << '\n';
        return ;
    }
    std::cout << this->_Target << " was forgiven by Zaphod Beeblebrox." << std::endl;
    std::cout << "This form was executed successfuly!  ✅ 👌 🎉" << std::endl << std::endl;
}