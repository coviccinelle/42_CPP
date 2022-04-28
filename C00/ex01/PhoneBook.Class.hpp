/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.Class.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thi-phng <thi-phng@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/18 18:25:35 by thi-phng          #+#    #+#             */
/*   Updated: 2022/04/28 11:36:44 by thi-phng         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_CLASS_HPP
# define PHONEBOOK_CLASS_HPP

#include "Contact.Class.hpp"

class   PhoneBook{

public:

        Contact	contact[8];
       
        PhoneBook(void);
        ~PhoneBook(void);

        void    open(void);
        void    search(Contact contact[8], int index);
        
private:

};

# endif
