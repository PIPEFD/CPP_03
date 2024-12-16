/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pipe <pipe@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/15 23:37:47 by pipe              #+#    #+#             */
/*   Updated: 2024/12/15 23:47:25 by pipe             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Fragtrap.hpp"


int main() {
    Fragtrap frag1("Guardian");
    Fragtrap frag2("Enemy1");

    std::cout << "\n=== Simulación de lucha ===" << std::endl;

    int round = 1;

    while (frag1.getHitPoints() > 0 && frag2.getHitPoints() > 0) {
        std::cout << "\n--- Ronda " << round << " ---" << std::endl;
        frag1.attack(frag1.getname());
        frag2.takeDamage(frag1.getTakeDamage());

        if (frag2.getHitPoints() > 0) {
            frag2.attack(frag2.getname());
            frag1.takeDamage(frag2.getTakeDamage());
        }

        if (frag1.getHitPoints() <= 20 && frag1.getEnergyDamage() > 0) {
            frag1.beReapaired(10);
        }
        if (frag2.getHitPoints() <= 20 && frag2.getEnergyDamage() > 0) {
            frag2.beReapaired(30);
        }

        round++;
    }
    std::cout << "\n=== Fin del combate ===" << std::endl;
    if (frag1.getHitPoints() > 0) 
    {
        std::cout << frag1.getname() << " gana el combate con " << frag1.getHitPoints() << " puntos de vida restantes." << std::endl;
        frag1.highFivesGuys();
    } else if (frag2.getHitPoints() > 0) 
    {
        std::cout << frag2.getname() << " gana el combate con " << frag2.getHitPoints() << " puntos de vida restantes." << std::endl;
        frag2.highFivesGuys();
    } else 
    {
        std::cout << "Ambos Fragtraps están destruidos. ¡Es un empate!" << std::endl;
    }

    return (0);
}