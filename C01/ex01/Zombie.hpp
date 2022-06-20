/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thi-phng <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/20 18:37:36 by thi-phng          #+#    #+#             */
/*   Updated: 2022/06/20 19:59:37 by thi-phng         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>

class Zombie
{
	public:
		Zombie(std::string Name;
		~Zombie();
		void	announce(void);
		void	naming(std::string name);

	private:
		std::string _name;
};

Zombie	*zombieHorde(int N, std::string name);

#endif
