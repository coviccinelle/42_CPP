/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thi-phng <thi-phng@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/08 11:43:50 by thi-phng          #+#    #+#             */
/*   Updated: 2022/07/09 16:27:55 by thi-phng         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#pragma once
# include <iostream>

class WrongAnimal
{
	public:
		//Constructor
		WrongAnimal(void);									//canonical default constructeur
		WrongAnimal(std::string type);
		WrongAnimal(WrongAnimal const & fx);						//canonical copy constructor
		
		//Function
		WrongAnimal		&operator= ( const WrongAnimal & fx);	//canonical copy assignment operator overload
		std::string		getType(void)const;
		void			setType(std::string type);
		void        	makeSound(void)const;
		//A [virtual] function is a member function which is declared within 
		//a base class and is re-defined (overridden) by a derived class
		
		//Destructor
		virtual ~WrongAnimal(void);	//canonical default destructor (virtual avoid memory leaks in case of inheritance)
	
	protected:
		std::string	_type;
};