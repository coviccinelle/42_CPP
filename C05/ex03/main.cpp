/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thi-phng <thi-phng@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/14 17:18:28 by thi-phng          #+#    #+#             */
/*   Updated: 2022/07/19 13:25:18 by thi-phng         ###   ########.fr       */
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

	std::cout << "PomPom -> Should not work" << std::endl;
	form = someRandomIntern.makeForm("PomPom", "Bender");
	std::cout << std::endl << "Robot -> should be ok" << std::endl;
	form = someRandomIntern.makeForm("Robot request", "Bender");
	std::cout << std::endl << "Shrubbery -> should be okay" << std::endl;
	form = someRandomIntern.makeForm("Shrubbery request", "Bender");
	delete form;
	return (0);
}