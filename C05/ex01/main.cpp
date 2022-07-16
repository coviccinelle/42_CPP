/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thi-phng <thi-phng@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/14 17:18:28 by thi-phng          #+#    #+#             */
/*   Updated: 2022/07/16 18:21:10 by thi-phng         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int main()
{
	Bureaucrat	bur("Martin", 20);
	Form		form;

	std::cout << "-----HIGH-----" << std::endl;
	std::cout << bur;
	bur.increment();	
	std::cout << bur;
	bur.increment();
	std::cout << bur << std::endl;
	std::cout << "-----LOW-----" << std::endl;
	bur.decrement();
	std::cout << bur;
	bur.decrement();
	std::cout << bur << std::endl;
	
#ifdef DEBUG
	bur.decrement();
	std::cout << bur << std::endl;
#endif

	std::cout << "------- [VERY FIRST Sign form from Bureaucrat] -------" << std::endl;
	bur.signForm(form);
	std::cout << bur << std::endl;

	std::cout << "------- [Be signed from Form]-------" << std::endl;
	try
	{	
		form.beSigned(bur);
	}
	catch (std::exception & e)
	{
		std::cout << std::endl;
		std::cout << bur.getName() << " can't sign because " << e.what() << std::endl << std::endl;
	}
	std::cout << form << std::endl;


	std::cout << "------- [Be signed 2 from Form] -------" << std::endl;
	try
	{
		form.beSigned(bur);
	}
	catch (std::exception & e)
	{
		std::cout << bur.getName() << " can't sign because " << e.what() << std::endl;
	}
	std::cout << form << std::endl;


	std::cout << "------- [Sign form] -------" << std::endl;
	bur.signForm(form);
	std::cout << bur << std::endl;
	return (0);
    
}