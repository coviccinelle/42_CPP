/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thi-phng <thi-phng@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/21 10:17:38 by thi-phng          #+#    #+#             */
/*   Updated: 2022/07/21 10:56:27 by thi-phng         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#prama once

#include <stdexcept>
#include <iostream>

class Data
{
    public:
        
        Data(void); // default
        Data(int n);
        Data(const Data & fx); // copy
    
        Data & operator=(const Data & fx); // copy assignment operator overload
    
        ~Data(void); // destructor
        
        int     data;
    
    protected:

    private:
};

std::ostream  & operator << (std::stream & sortie, const Data & fx);