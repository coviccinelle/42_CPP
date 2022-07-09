/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thi-phng <thi-phng@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/08 11:12:43 by thi-phng          #+#    #+#             */
/*   Updated: 2022/07/09 10:54:41 by thi-phng         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

class Animal
{
	public:
		//Constructor
		Animal(void);									//canonical default constructeur
		Animal(std::string type);
		Animal(Animal const & rhs);						//canonical copy constructor
		
		//Function
		Animal			&operator= ( const Animal & rhs);	//canonical copy assignment operator overload
		std::string		getType(void)const;
		void			setType(std::string type);
		virtual void	makeSound(void)const;
		
		//Destructor
		virtual ~Animal(void);////canonical default destructor (virtual avoid memory leaks in case of inheritance)
	
	protected:
		std::string	_type;
};