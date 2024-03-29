/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thi-phng <thi-phng@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/25 18:12:00 by thi-phng          #+#    #+#             */
/*   Updated: 2022/07/13 13:51:08 by thi-phng         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"
#include "WrongAnimal.hpp"

int	main()
{
    const Animal* meta = new Animal();
    const Animal* j = new Dog();
    const Animal* i = new Cat();
    
    std::cout << j->getType() << " --------> 🐶 🐕 " << std::endl << std::endl;
    std::cout << i->getType() << " --------> 🐱 🐈 " << std::endl << std::endl;
    
    i->makeSound(); //will output the cat sound!
    j->makeSound();
    
    meta->makeSound();

    
    //...

    std::cout << std::endl << "Here we go the [Wrong Cat] and [Wrong Animal]" << std::endl << std::endl;
    const WrongAnimal       *beta = new WrongAnimal();
    const WrongAnimal       *k = new WrongCat();

    std::cout << k->getType() << " ------> 💣 😿" << std::endl;
    
    k->makeSound(); //will output the cat sound!
    
    beta->makeSound();

    std::cout << std::endl << "Destructor section!!!" << std::endl << std::endl;
    delete meta;
    delete j;
    delete i;
    delete beta;
    delete k;

    return 0;
}