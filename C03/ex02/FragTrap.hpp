/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thi-phng <thi-phng@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/07 11:52:31 by thi-phng          #+#    #+#             */
/*   Updated: 2022/07/08 10:53:57 by thi-phng         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
	public:
		FragTrap();									//canonical: constrcuteur par defaut
		FragTrap(std::string name);
		FragTrap(FragTrap const &fx);				//canonical: constructeur de recopie
		FragTrap & operator= (const FragTrap & fx);//canonical: surcharge de l'operator d'affectation
		virtual ~FragTrap();						//canonical: destructeur par defaut

		void	attack(std::string name);
		void	highFivesGuys(void);
		// int		getHigh5(void) const;

	// private:
	// 	int	_HighFives;
};
std::ostream & operator << (std::ostream & sortie, const FragTrap & fx);
