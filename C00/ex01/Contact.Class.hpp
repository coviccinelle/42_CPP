/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.Class.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thi-phng <thi-phng@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/18 18:20:37 by thi-phng          #+#    #+#             */
/*   Updated: 2022/04/28 11:14:31 by thi-phng         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_CLASS_HPP
# define CONTACT_CLASS_HPP

class Contact{

public:

		Contact(void);
		~Contact(void);

		void	add_contact(void);
		void	display_one(void);
		void	display_total(void);

private:

		std::string			_first_name;
		std::string			_last_name;
		std::string			_nick_name;
		std::string			_phone_number;
		std::string			_darkest_secret;
};

# endif
