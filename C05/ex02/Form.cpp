/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thi-phng <thi-phng@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/14 19:37:01 by thi-phng          #+#    #+#             */
/*   Updated: 2022/07/18 12:09:28 by thi-phng         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form(void) : _Name("a contract"), _Signed(false), _signGrade(20), _ExecGrade(10)
{
    std::cout << "[Form]: Constructor called" << std::endl;
}

Form::Form(std::string name, int SignGrade, int ExecGrade) : _Name(name), _signGrade(SignGrade), _ExecGrade(ExecGrade)
{
    std::cout << "[Form]: Param constructor called" << std::endl;
}

Form::Form(const Form & fx) : _signGrade(20), _ExecGrade(10)
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
    std::cout << "[Form]: Constructor copy assignment operator overload called" << std::endl;
    this->_Signed = fx.getSign();
    return (*this);
}

void    Form::beSigned(Bureaucrat bur)
{
    std::cout << "[Form]: BeSigned fucntion called" << std::endl;
    if (bur.getGrade() > (unsigned int)this->_signGrade)
        throw Bureaucrat::GradeTooLowException();
    else if (this->_Signed == true)
        throw Form::FormAlreadySignedException();
    else
        this->_Signed = true;
    std::cout << "[Form]: ✅👌 This form is already signed ! You good to go (😘 From beSigned)" << std::endl;
}


//virtual void    execute(Bureaucrat const & executor) const = 0;


void    Form::checker_exec(Bureaucrat const & bur) const
{
    if (this->getSign() == false)
        throw Form::FormNotSignedException();
    else if (this->getExecGrade() < (int)bur.getGrade())
        throw Bureaucrat::GradeTooLowException();
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
    if (fx.getSign() == false)
        sortie << "[Sign]      == 🚧 🚸 The Form is not signed yet..." << std::endl;
    else
        sortie << "[Sign]      == ✅ 👌 The Form is already signed " << std::endl;
    sortie << "[SignGrade] == " << fx.getSignGrade() << std::endl;
    sortie << "[ExecGrade] == " << fx.getExecGrade() << std::endl;
    return (sortie);
}
