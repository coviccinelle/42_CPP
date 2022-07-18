/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thi-phng <thi-phng@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/14 17:18:28 by thi-phng          #+#    #+#             */
/*   Updated: 2022/07/18 15:00:50 by thi-phng         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main(void)
{
	Bureaucrat					bur("Martin", 20);
	std::cout << std::endl;
	ShrubberyCreationForm		shru("Trees");
	std::cout << std::endl;
	PresidentialPardonForm		pers("Employer");
	std::cout << std::endl;
	RobotomyRequestForm			bot("My bot");
	std::cout << std::endl;

	std::cout << "==================SHRUBBERY==================\n";

	bur.executeForm(shru);
	std::cout << shru << std::endl << std::endl;

	std::cout << "-------Be sign-------" << std::endl;
	try
	{	
		shru.beSigned(bur);
	}
	catch (std::exception & e)
	{
		std::cout << std::endl;
		std::cout << shru.getNameForm() << " cannot sign because " << e.what() << std::endl << std::endl;
	}
	bur.executeForm(shru);
	std::cout << shru << std::endl << std::endl;

	std::cout << "==================PRESIDENT==================\n";
	bur.executeForm(pers);
	std::cout << pers << std::endl << std::endl;
	
	std::cout << "-------Be sign-------" << std::endl;
	try
	{	
		pers.beSigned(bur);
	}
	catch (std::exception & e)
	{
		std::cout << std::endl;
		std::cout << pers.getNameForm() << " cannot sign because " << e.what() << std::endl << std::endl;
	}
	bur.executeForm(pers);
	std::cout << pers << std::endl << std::endl;

	std::cout << "==================ROBOT==================\n";

	bur.executeForm(bot);
	std::cout << bot << std::endl << std::endl;
	std::cout << "-------Be sign-------" << std::endl;
	try
	{	
		bot.beSigned(bur);
	}
	catch (std::exception & e)
	{
		std::cout << std::endl;
		std::cout << bot.getNameForm() << " cannot sign because " << e.what() << std::endl << std::endl;
	}
	bur.executeForm(bot);
	std::cout << bot << std::endl << std::endl;
	return (0);
}