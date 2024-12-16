/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pipe <pipe@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/13 14:18:14 by pipe              #+#    #+#             */
/*   Updated: 2024/12/13 15:33:22 by pipe             ###   ########.fr       */
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
    // clap2.beRepaired(2);
    
    
    return (0);
}