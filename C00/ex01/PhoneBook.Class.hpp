/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.Class.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thi-phng <thi-phng@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/18 18:25:35 by thi-phng          #+#    #+#             */
/*   Updated: 2022/04/23 15:53:47 by thi-phng         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_CLASS_HPP
# define CONTACT_CLASS_HPP

class   Contact{
    
public:

        Contact(void);
        ~Contact(void);

        void    add_contact(void);
        void    display_one(void);
        void    display_all(void);
        
private:

        std::string         _first_name;
        std::string         _last_name;
        std::string         _nickname;
        std::string         _phone_number;
        std::string         _darkest_secret;
        
};

# endif
