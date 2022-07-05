/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thi-phng <thi-phng@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/25 18:12:18 by thi-phng          #+#    #+#             */
/*   Updated: 2022/07/05 12:36:58 by thi-phng         ###   ########.fr       */
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
        ~ClapTrap(void);                                //canonical default destructor
        ClapTrap & operator= ( const ClapTrap & fx);    //canonical copy assignment operator overload

        attack(const std::string & target);
        takeDamage(unsigned int amount);
        beRepaired(unsigned int amount);
        
    private:
        ClapTrap(std::string    Name);
        int                     _HitPoints = 10;
        int                     _EnergyPoints = 10;
        int                     _AttackDamage = 0;
        
};

//std::ostream & operator << (std::ostream & sortie, const ClapTrap & fx);
// An overload of the insertion («) operator that inserts a floating-point representation
//of the fixed-point number into the output stream object passed as parameter

#endif
