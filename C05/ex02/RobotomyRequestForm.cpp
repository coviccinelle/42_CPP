/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thi-phng <thi-phng@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/16 19:00:51 by thi-phng          #+#    #+#             */
/*   Updated: 2022/07/17 18:40:59 by thi-phng         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

			///////////////////////////////////
			///	    *** Canonical	*** 	///
			///////////////////////////////////


RobotomyRequestForm::RobotomyRequestForm(void) : Form("RobotomyForm", 72, 45)
{
    std::cout << "[RobotomyRequestForm]: " << std::endl;
}


RobotomyRequestForm::RobotomyRequestForm(std::string target) : Form("RobotomyForm", 72, 45), _Target(target)
{
    std::cout << "[RobotomyRequestForm]: Target constructor called" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const & fx) : Form(fx)
{
    std::cout << "[RobotomyRequestForm]: Copy contructor called"<< std::endl;
    this->_Target = fx.getTarget();
}


RobotomyRequestForm & RobotomyRequestForm::operator=(const RobotomyRequestForm & fx) // overload
{
    std::cout << "[RobotomyRequestForm]: Assignment Operator Overload called" << std::endl;
    this->_Target = fx.getTarget();
    return (*this);
}

RobotomyRequestForm::~RobotomyRequestForm(void)
{
    std::cout << "[RobotomyRequestForm]: Destructor called" << std::endl;
}


			///////////////////////////////////
			///	    *** Functions	*** 	///
			///////////////////////////////////

std::string RobotomyRequestForm::getTarget(void) const
{
    return (this->_Target);
}

void    RobotomyRequestForm::execute(Bureaucrat const &executor) const
{
    try
    {
        this->checker_exec(executor);
    }
    catch(std::exception & e)
    {
        std::cerr << "[RobotomyRequestForm] : 🚧 🚸 ERROR : Excecution corrupted because " << e.what() << std::endl;
    }
    std::cout << "[Robot] : *weird drilling noises* : Eeeeeeehhhhhhhh EHEhejehejehejhe "<< std::endl;
    srand(time NULL); //use current time as seed for random generator -> initialise random number generators
    int random_number = rand();
    if (random_number % 2 == 0)
        std::cout << "[Robot] : " << this->_Target << " has been robotomized successfully ✅ 👌 🎉!" << std::endl;
    else
        std::cout << "[Robot] : 🚧 🚸 The robotomisation failed!" << std::endl;
    std::cout << "This form was executed successfuly!  ✅ 👌 🎉" << std::endl << std::endl;
}

