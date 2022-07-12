/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thi-phng <thi-phng@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/08 11:12:43 by thi-phng          #+#    #+#             */
/*   Updated: 2022/07/12 14:21:20 by thi-phng         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #ifndef ANIMAL_HPP
// # define ANIMAL_HPP
#pragma once
# include <iostream>

class Animal
{
	public:
		//Constructor
		Animal(void);									//canonical default constructeur
		Animal(std::string type);
		Animal(Animal const & fx);						//canonical copy constructor
		
		//Function
		Animal			&operator= ( const Animal & fx);	//canonical copy assignment operator overload
		std::string		getType(void)const;
		void			setType(std::string type);
		virtual void	makeSound(void)const;
		//A [virtual] function is a member function which is declared within 
		//a base class and is re-defined (overridden) by a derived class
		
		//Destructor
		virtual ~Animal(void);	//canonical default destructor (virtual avoid memory leaks in case of inheritance)
	
	protected:
		std::string	_type;
	private:
};

// #endif