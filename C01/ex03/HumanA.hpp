/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thi-phng <thi-phng@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/20 20:51:42 by thi-phng          #+#    #+#             */
/*   Updated: 2022/06/21 15:46:20 by thi-phng         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP
#include "Weapon.hpp"

class Weapon;

class   HumanA
{
    public:
        HumanA(void);
        HumanA(std::string name, Weapon & weapon);
        ~HumanA();
        void attack(void);
    
    private:
        std::string _Name;
        Weapon & _Weapon;
};
#endif
