/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thi-phng <thi-phng@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/22 21:19:31 by thi-phng          #+#    #+#             */
/*   Updated: 2022/07/22 21:27:36 by thi-phng         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

template <typename T>
void    swap(T & am T & b)
{
    T temp;
    
    temp = a;
    a = b;
    b = temp;
}

template <typename T>
T & min(T & a, T & b)
{
    if (a < b)
        return (a);
    else
        return (b);
}

template <typename T>
T & max(T &a, T & b)
{
    if (a > b)
        return (a);
    else
        return (b);
}