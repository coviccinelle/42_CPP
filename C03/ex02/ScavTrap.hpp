/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thi-phng <thi-phng@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/06 10:47:47 by thi-phng          #+#    #+#             */
/*   Updated: 2022/07/07 11:53:59 by thi-phng         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
	public:
		ScavTrap();									//canonical: constrcuteur par defaut
		ScavTrap(std::string name);
		ScavTrap(ScavTrap const &rhs);				//canonical: constructeur de recopie
		ScavTrap & operator= (const ScavTrap & rhs);//canonical: surcharge de l'operator d'affectation
		virtual ~ScavTrap();						//canonical: destructeur par defaut

		void	attack(std::string name);
		void	guardGate(void);
		int		getGate(void) const;

	private:
		bool	_gate;
};

std::ostream & operator << (std::ostream & sortie, const ScavTrap & st);
