/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thi-phng <thi-phng@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/20 20:51:11 by thi-phng          #+#    #+#             */
/*   Updated: 2022/06/21 12:25:39 by thi-phng         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class   Weapon
{
    public:
        Weapon(void);
        ~Weapon();
        std::string const getType();
        std::string setType(std::string const New);

    private:
        std::string     _type;
};

std::string const getType()
{
    Weapon::_type New;
    
    std::string &typeRef = New;
    return (New);
}

std::string setType(std::string const New)
{
    //euh now what???
}