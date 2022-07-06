/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thi-phng <thi-phng@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/06 10:47:47 by thi-phng          #+#    #+#             */
/*   Updated: 2022/07/06 11:01:38 by thi-phng         ###   ########.fr       */
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





//--------------------------------------- OLD SCAVTRAP ----------------//
#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

class ScavTrap
{
    public:
        ScavTrap;(void);                                 //canonical default constructeur
        ScavTrap;(ScavTrap; const & fx);                  //canonical copy constructor
        ScavTrap; & operator= ( const ScavTrap; & fx);    //canonical copy assignment operator overload
		virtual ~ScavTrap;(void);				        //canonical default destructor 
                                                        //virtual avoid memory leaks in case of inheritance class
        ScavTrap;(std::string    Name);

        void    attack(const std::string & target);
        void    takeDamage(unsigned int amount);
        void    beRepaired(unsigned int amount);
		void	annonce(void)const;

		std::string	    getName(void)const;
		unsigned int    getHitp(void)const;
		unsigned int	getEnergyp(void)const;
		unsigned int	getAttackd(void)const;
                
    protected:
        std::string     _Name;
        unsigned int    _HitPoints;
        unsigned int    _EnergyPoints;
        unsigned int    _AttackDamage;
};

#endif
