/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rotrojan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/02 21:01:25 by rotrojan          #+#    #+#             */
/*   Updated: 2021/12/02 21:29:10 by rotrojan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include <cstdlib>
#include <iostream>

void	display_claptrap(ClapTrap &claptrap)
{
	std::cout << claptrap.getName() << " has " << claptrap.getHitPoints()
		<< " hit points, " << claptrap.getEnergyPoints()
		<< " energy points and makes " << claptrap.getAttackDamage() 
		<< " points of damage at each attack." << std::endl;
}

int main(void)
{
	ClapTrap	bob("Bob");
	ClapTrap	tod("Tod", bob);
	display_claptrap(bob);
	display_claptrap(tod);
	return (EXIT_SUCCESS);
}
