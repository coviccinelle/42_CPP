/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thi-phng <thi-phng@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/25 18:12:18 by thi-phng          #+#    #+#             */
/*   Updated: 2022/07/05 14:52:02 by thi-phng         ###   ########.fr       */
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
                
    private:
        std::string     _Name;
        unsigned int    _HitPoints;
        unsigned int    _EnergyPoints;
        unsigned int    _AttackDamage;
};

//std::ostream & operator << (std::ostream & sortie, const ClapTrap & fx);
// An overload of the insertion («) operator that inserts a floating-point representation
//of the fixed-point number into the output stream object passed as parameter

#endif
