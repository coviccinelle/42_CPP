/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thi-phng <thi-phng@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/08 11:12:43 by thi-phng          #+#    #+#             */
/*   Updated: 2022/07/13 13:13:00 by thi-phng         ###   ########.fr       */
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
		virtual void	makeSound(void)const = 0;//pure vitual fonction -> absatrait class
		
		//Destructor
		virtual ~Animal(void);	//canonical default destructor (virtual avoid memory leaks in case of inheritance)
	
	protected:
		std::string	_type;
	private:
};

// #endif