/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thi-phng <thi-phng@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/25 18:12:00 by thi-phng          #+#    #+#             */
/*   Updated: 2022/07/09 16:02:28 by thi-phng         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"
#include "WrongAnimal.hpp"

int main( void ) 
{
	Animal Fighter("Tom");
	//std::cout  << Fighter.getName() << " was born" << std::endl;
	std::cout << "One Animal was born" << std::endl;

    //Fighter.annonce();

    std::cout  <<  std::endl;
	//Fighter.attack("Jerry");
	//Fighter.annonce();
    
	std::cout << std::endl << "------------ Should not work anymore ------------------" << std::endl << std::endl;

	std::cout << "------------ Should not work anymore ------------------" << std::endl;
	
	return (0); 
}