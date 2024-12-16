/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pipe <pipe@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/15 19:09:32 by pipe              #+#    #+#             */
/*   Updated: 2024/12/15 20:12:00 by pipe             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Scavtrap.hpp"



int main() {
    Scavtrap scav1("Guardian");
    Scavtrap scav2("Enemy1");

    std::cout << "\n=== Simulación de lucha ===" << std::endl;

    int round = 1;

    while (scav1.getHitPoints() > 0 && scav2.getHitPoints() > 0) {
        std::cout << "\n--- Ronda " << round << " ---" << std::endl;
        scav1.attack(scav1.getname());
        scav2.takeDamage(scav1.getTakeDamage());

        if (scav2.getHitPoints() > 0) {
            scav2.attack(scav2.getname());
            scav1.takeDamage(scav2.getTakeDamage());
        }

        if (scav1.getHitPoints() <= 20 && scav1.getEnergyPoints() > 0) {
            scav1.beReapaired(10);
        }
        if (scav2.getHitPoints() <= 20 && scav2.getEnergyPoints() > 0) {
            scav2.beReapaired(30);
        }

        round++;
    }
    std::cout << "\n=== Fin del combate ===" << std::endl;
    if (scav1.getHitPoints() > 0) 
    {
        std::cout << scav1.getname() << " gana el combate con " << scav1.getHitPoints() << " puntos de vida restantes." << std::endl;
        scav1.guardGate();
    } else if (scav2.getHitPoints() > 0) 
    {
        std::cout << scav2.getname() << " gana el combate con " << scav2.getHitPoints() << " puntos de vida restantes." << std::endl;
        scav2.guardGate();
    } else 
    {
        std::cout << "Ambos Scavtraps están destruidos. ¡Es un empate!" << std::endl;
    }

    return 0;
}

