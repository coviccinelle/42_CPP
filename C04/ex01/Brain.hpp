/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thi-phng <thi-phng@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/12 12:06:00 by thi-phng          #+#    #+#             */
/*   Updated: 2022/07/12 14:06:37 by thi-phng         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#pragma once
#include <iostream>

class Brain
{
    public:
        Brain(void);
        Brain(Brain const & fx);
        Brain & operator=(const Brain & fx);
        virtual ~Brain(void);
    
    private:
        std::string     ideas[100];
};
