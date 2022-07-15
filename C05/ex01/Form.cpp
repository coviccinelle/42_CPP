/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thi-phng <thi-phng@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/14 19:37:01 by thi-phng          #+#    #+#             */
/*   Updated: 2022/07/15 11:43:18 by thi-phng         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form(void)                  //default
{
    std::cout << "[Form]: Constructor called" << std::endl;
}

Form::Form(std::string name, int SignGrade, int ExecGrade) : _Name(name), _signGrade(SignGrade), _ExecGrade(ExecGrade)
{
    std::cout << "[Form]: Param constructor called" << std::endl;
}

Form::Form(const Form & fx)       //copy
{
    std::cout << "[Form]: Constructor copy called" << std::endl;
    *this = fx;
    
}

Form::~Form(void)         //destructor
{
    std::cout << "[Form]: Destructor called" << std::endl;
}
    // *** Fucnction *** //
Form & Form::operator=(const Form & fx) //overload
{
    std::cout << "[Form]: Constructor copy assignment operator overload called" << std::ednl;
    this->_Name = fx.getNameForm();
    this->_Signed = fx.getSign();
    this->_signGrade = fx.getSignGrade();
    this->_ExecGrade = fx.getExecGrade();
    return (*this);
}

void    Form::beSigned(Bureaucrat bur)
{
    std::cout << "[Form]: BeSigned fucntion called" << std::endl;
    if 
}

    // *** Get functions *** //
std::string Form::getNameForm(void)const
{
    return (this->_Name);
}

bool        Form::getSign(void)const
{
    return (this->_Signed);   
}

int         Form::getSignGrade(void)const
{
    return (this->_signGrade);    
}

int         Form::getExecGrade(void)const
{
    return (this->_ExecGrade);
}

    // *** Set function *** //
void        Form::setSign(bool sign)
{
    this->_Signed = sign;
}

std::ostream & operator << (std::ostream & sortie, const Form & fx)
{
    sortie << "[NameFrom]  == " << fx.getNameForm() << std::endl;
    sortie << "[Sign]      == " << fx.getSign() << std::endl;
    sortie << "[SignGrade] == " << fx.getSignGrade() << std::endl;
    sortie << "[ExecGrade] == " << fx.getExecGrade() << std::endl;
    return (sortie);
}
