/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thi-phng <thi-phng@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/25 18:12:00 by thi-phng          #+#    #+#             */
/*   Updated: 2022/07/13 11:11:47 by thi-phng         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"
#include "WrongAnimal.hpp"
#include "Brain.hpp"

int	main()
{
    // const Animal* j = new Dog();
    // const Animal* i = new Cat();
    // delete j;//should not create a leak
    // delete i;
    // //...
    // return 0;
    
	
	int		size = 5;
	Animal	*tab[size];
	int		i;

	i = 0;
	std::cout << "----------Constructor----------" << std::endl;
	while (i < size)
	{
		if (i >= 0 && i < (size / 2))
			tab[i] = new Dog();
		if (i >= (size / 2) && i < size)
			tab[i] = new Cat();
		std::cout << std::endl;
		i++;
	}
	
	std::cout << std::endl;
	std::cout << "----------Destructor----------" << std::endl;
	i = 0;
	while (i < size)
	{
		delete tab[i];
		std::cout << std::endl;
		i++;
	}
	
		std::cout << "----------Assignement------------------" << std::endl;
	{
		Dog a;
		Dog b;
		Dog c(a);
		std::cout << std::endl << std::endl;
		
		b = a;

		std::cout << std::endl;

		std::cout << "l'adress of the Dog a = " << a.getBrain() << std::endl;
		std::cout << "l'adress of the Dog b = " << b.getBrain() << std::endl;
		std::cout << "l'adress of the Dog c = " << c.getBrain() << std::endl;

		std::cout << std::endl;
	}
}