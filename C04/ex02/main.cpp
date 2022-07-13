/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thi-phng <thi-phng@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/25 18:12:00 by thi-phng          #+#    #+#             */
/*   Updated: 2022/07/13 13:25:29 by thi-phng         ###   ########.fr       */
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
	// Animal animal; pour montrer qu'on peut pas l'instancier

	//const Animal* meta = new Animal();
    const Animal* j = new Dog();
    const Animal* i = new Cat();
    
    std::cout << j->getType() << " --------> 🐶 🐕 " << std::endl << std::endl;
    std::cout << i->getType() << " --------> 🐱 🐈 " << std::endl << std::endl;
    
    i->makeSound(); //will output the cat sound!
    j->makeSound();

	delete i;
	delete j;
	//delete meta;
    //meta->makeSound();
	
    return 0;
}