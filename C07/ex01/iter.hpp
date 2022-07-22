/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thi-phng <thi-phng@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/22 21:32:55 by thi-phng          #+#    #+#             */
/*   Updated: 2022/07/22 21:38:36 by thi-phng         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

template <typename T>
void    my_function(T const & arg)
{
    std::cout << "my_function" << static_cast<T>(arg) << std::endl;
}

template <typename T>
void iter(T *t, const int size, void(*f)(T const & arg))
{
    int i = 0;
    while (i < size)
    {
        (f)(t[i]);
        i++;
    }
}