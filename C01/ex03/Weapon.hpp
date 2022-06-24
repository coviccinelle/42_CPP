/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thi-phng <thi-phng@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/20 20:51:11 by thi-phng          #+#    #+#             */
/*   Updated: 2022/06/24 16:44:53 by thi-phng         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
#define WEAPON_HPP
#include <iostream>

class   Weapon
{
    public:
        Weapon(void);
        Weapon(std::string type);
        ~Weapon();
        std::string const &getType();
        void setType(std::string const New);

    private:
        std::string     _Type;
};

#endif

