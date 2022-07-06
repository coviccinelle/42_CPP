/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thi-phng <thi-phng@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/25 18:12:18 by thi-phng          #+#    #+#             */
/*   Updated: 2022/07/06 10:37:53 by thi-phng         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>
# include <cmath>

class ClapTrap
{
    
    public:
        ClapTrap(void);                                 //canonical default constructeur
        ClapTrap(ClapTrap const & fx);                  //canonical copy constructor
        ClapTrap & operator= ( const ClapTrap & fx);    //canonical copy assignment operator overload
		virtual ~ClapTrap(void);				        //canonical default destructor 
                                                        //virtual avoid memory leaks in case of inheritance class
        ClapTrap(std::string    Name);

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
