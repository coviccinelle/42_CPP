/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thi-phng <thi-phng@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/20 18:37:36 by thi-phng          #+#    #+#             */
/*   Updated: 2022/06/21 11:00:48 by thi-phng         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>

class Zombie
{
	public:
		Zombie(void);
		~Zombie();
		void	announce(void) const;
		void	naming(std::string name);

	private:
		std::string _name;
};

Zombie	*zombieHorde(int N, std::string name);

# endif
