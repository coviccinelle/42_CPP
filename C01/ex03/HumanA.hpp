/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thi-phng <thi-phng@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/20 20:51:42 by thi-phng          #+#    #+#             */
/*   Updated: 2022/06/21 12:27:02 by thi-phng         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef HUMANA_HPP
# define HUMANA_HPP

class   HumanA
{
    public:
    //a waepon
    //and a name
        HumanA(void);
        ~HumanA();
        std::string name;

        std::string attack()
};


#endif