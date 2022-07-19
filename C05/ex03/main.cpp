/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thi-phng <thi-phng@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/14 17:18:28 by thi-phng          #+#    #+#             */
/*   Updated: 2022/07/19 13:02:17 by thi-phng         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

int main(void)
{	
	Intern someRandomIntern;
	Form* form;

	form = someRandomIntern.makeForm("PomPom", "Bender");
	form = someRandomIntern.makeForm("Robot request", "Bender");
	delete form;
	return (0);
}