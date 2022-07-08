/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thi-phng <thi-phng@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/06 10:47:47 by thi-phng          #+#    #+#             */
/*   Updated: 2022/07/08 14:06:09 by thi-phng         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
	public:
		ScavTrap();									//canonical default constructeur
		ScavTrap(ScavTrap const &rhs);				//canonical copy constructor
		ScavTrap & operator= (const ScavTrap & rhs);//canonical copy assignment operator overload
		virtual ~ScavTrap();						//canonical default destructor 
                                                    //virtual avoid memory leaks in case of inheritance class
		ScavTrap(std::string name);

		void	attack(std::string name);
		void	guardGate(void);
		int		getGate(void) const;

	private:
		bool	_gate;
};

std::ostream & operator << (std::ostream & sortie, const ScavTrap & st);
