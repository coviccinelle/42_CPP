/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.Class.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thi-phng <thi-phng@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/18 18:25:35 by thi-phng          #+#    #+#             */
/*   Updated: 2022/04/26 12:36:35 by thi-phng         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_CLASS_HPP
# define PHONEBOOK_CLASS_HPP

class   PhoneBook{

public:

        PhoneBook(void);
        ~PhoneBook(void);

        void    open(void);
        void    search(void);
        
private:

       Contact	contact[8];
};

# endif
