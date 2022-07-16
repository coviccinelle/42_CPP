/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thi-phng <thi-phng@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/14 13:44:21 by thi-phng          #+#    #+#             */
/*   Updated: 2022/07/16 10:55:31 by thi-phng         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(void) : _Name("noname"), _Grade(1)
{
    std::cout << "[Bureaucrat]: Default constructor called" << std::endl;
}

Bureaucrat::Bureaucrat(std::string name, int grade) : _Name(name), _Grade(grade)
{
    std::cout << "[Bureaucrat]: Param constructor called" << std::endl;
}

Bureaucrat::Bureaucrat(Bureaucrat const & fx) : _Name(fx.getName())
{
    std::cout << "[Bureaucrat]: Copy constructor called" << std::endl;
    *this = fx;
}

Bureaucrat & Bureaucrat::operator=(const Bureaucrat & fx)
{
    std::cout << "[Bureaucrat]: Overload called" << std::endl;
    this->_Grade = fx.getGrade();
    return (*this);
}

//const : read-only
std::string Bureaucrat::getName(void)const
{
    return (this->_Name);
}

unsigned int Bureaucrat::getGrade(void)const
{
    return(this->_Grade);
}

void    Bureaucrat::setGrade(unsigned int grade)
{
    try
    {
        if (grade <= 0)
        {
            throw Bureaucrat::GradeTooHighException();
        }
        if (grade > 150)
             throw Bureaucrat::GradeTooLowException();
            this->_Grade = grade;
    }
    catch(std::exception & e)
    {
        std::cerr << e.what() << std::endl;
    }
}

void    Bureaucrat::increment(void)
{
    try
    {
        if (this->_Grade - 1 == 0)
            throw Bureaucrat::GradeTooHighException();
        this->_Grade--;   
    }
    catch (std::exception & e)
    {
        std::cerr << e.what() << std::endl;
    }
}

void    Bureaucrat::decrement(void)
{
    try
    {
        if (this->_Grade + 1 == 151)
            throw Bureaucrat::GradeTooLowException();

        this->_Grade++;   
    }
    catch (std::exception & e)
    {
        std::cerr << e.what() << std::endl;
    }
}

void    Bureaucrat::signForm(Form & fx)
{
    std::cout << "[Bureaucrat]: Sign Form function called " << std::endl;
    try
    {
        fx.beSigned(*this);
    }
    catch(const std::exception & e)
    {
        // if it fall into the gradetoolow or already signed -> catch inn this case
        // more detail in Form cpp
        std::cerr << this->_Name << "can't be signed because " << e.what() << '\n';
        return ;
    }
    std::cout << this->_Name << " signes " << fx.getNameForm() << std::endl;
}


Bureaucrat::~Bureaucrat(void)
{
    std::cout << "[Bureaucrat]: Destructor is called" << std::endl;
}

std::ostream & operator << (std::ostream & sortie, const Bureaucrat & fx)
{
    sortie << "[Grade] == " << fx.getGrade() << std::endl;
    return (sortie);
}