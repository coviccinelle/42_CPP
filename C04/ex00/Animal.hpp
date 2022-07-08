/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thi-phng <thi-phng@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/08 11:12:43 by thi-phng          #+#    #+#             */
/*   Updated: 2022/07/08 11:41:50 by thi-phng         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

class Animal
{
	public:
		//Constructor
		Animal(void);									//canonical constructeur par defaut
		Animal(std::string type);
		Animal(Animal const & rhs);						//canonical constructeur de recopie
		
		//Function
		Animal			&operator= ( const Animal & rhs);	//canonical surcharge de l'operation d'affectation
		std::string		getType(void)const;
		void			setType(std::string type);
		virtual void	makeSound(void)const;
		
		//Destructor
		virtual ~Animal(void);							//canonical destructeur
	
	protected:
	
		std::string	_type;
	
	private:
};