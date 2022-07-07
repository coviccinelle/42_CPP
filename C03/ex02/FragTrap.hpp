/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thi-phng <thi-phng@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/07 11:52:31 by thi-phng          #+#    #+#             */
/*   Updated: 2022/07/07 13:37:07 by thi-phng         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
	public:
		FragTrap();									//canonical: constrcuteur par defaut
		FragTrap(std::string name);
		FragTrap(FragTrap const &rhs);				//canonical: constructeur de recopie
		FragTrap & operator= (const FragTrap & rhs);//canonical: surcharge de l'operator d'affectation
		virtual ~FragTrap();						//canonical: destructeur par defaut

		void	attack(std::string name);
		void	highFivesGuys(int);
		int		getHigh5(void) const;

	// private:
	// 	int	_HighFives;
};

std::ostream & operator << (std::ostream & sortie, const FragTrap & st);