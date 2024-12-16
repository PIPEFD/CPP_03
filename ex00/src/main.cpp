/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbonilla <dbonilla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/13 14:18:14 by pipe              #+#    #+#             */
/*   Updated: 2024/12/16 19:08:21 by dbonilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Claptrap.hpp"

int main()
{
    Claptrap clap1("Cris");
    Claptrap clap2("David");

    clap1.takeDamage(5);
    clap1.attack("David");
    clap2.takeDamage(5);
    clap2.beRepaired(2);
    
    
    return (0);
}