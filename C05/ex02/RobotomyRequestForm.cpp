/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thi-phng <thi-phng@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/16 19:00:51 by thi-phng          #+#    #+#             */
/*   Updated: 2022/07/17 13:49:59 by thi-phng         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

			///////////////////////////////////
			///	    *** Canonical	*** 	///
			///////////////////////////////////


RobotomyRequestForm(void); //default


RobotomyRequestForm(std::string target);

//RobotomyRequestForm(std::string name, unsigned int grade);

RobotomyRequestForm(RobotomyRequestForm const & fx); //copie



RobotomyRequestForm &operator=(const RobotomyRequestForm & fx); // overload

~RobotomyRequestForm(void);


			///////////////////////////////////
			///	    *** Functions	*** 	///
			///////////////////////////////////

void                execute(Bureaucrat const &executor) const;

std::string         getTarget(void) const;
