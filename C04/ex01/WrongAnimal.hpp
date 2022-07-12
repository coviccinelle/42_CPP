/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thi-phng <thi-phng@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/08 11:43:50 by thi-phng          #+#    #+#             */
/*   Updated: 2022/07/12 11:48:36 by thi-phng         ###   ########.fr       */
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
		//Makesound is not virtual so it will heritage from Animal
		//Et du coup il utilise le make sound de la classe animal et pas celle de la classe WrongCat
		
		//Destructor
		virtual ~WrongAnimal(void);	//canonical default destructor (virtual avoid memory leaks in case of inheritance)
	
	protected:
		std::string	_type;
};