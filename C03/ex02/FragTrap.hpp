/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thi-phng <thi-phng@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/07 11:52:31 by thi-phng          #+#    #+#             */
/*   Updated: 2022/07/08 14:05:23 by thi-phng         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
	public:
		FragTrap();									//canonical default constructeur
		FragTrap(FragTrap const &fx);				//canonical copy constructor
		FragTrap & operator= (const FragTrap & fx);	//canonical copy assignment operator overload
		virtual ~FragTrap();						//canonical default destructor 
                                                    //virtual avoid memory leaks in case of inheritance class
		FragTrap(std::string name);
		
		void	attack(std::string name);
		void	highFiveGuys(void);

};

std::ostream & operator << (std::ostream & sortie, const FragTrap & fx);
