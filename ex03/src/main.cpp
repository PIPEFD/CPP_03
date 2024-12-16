/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbonilla <dbonilla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/16 01:45:50 by pipe              #+#    #+#             */
/*   Updated: 2024/12/16 19:07:23 by dbonilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Diamondtrap.hpp"

int main() {
    Diamondtrap diamond1("Warrior");
    Diamondtrap diamond2("Beast");

    std::cout << "\n=== Simulación de lucha ===" << std::endl;

    int round = 1;

    while (diamond1.getHitPoints() > 0 && diamond2.getHitPoints() > 0) {
        std::cout << "\n--- Ronda " << round << " ---" << std::endl;

        diamond1.attack(diamond2.getname());
        diamond2.takeDamage(diamond1.getTakeDamage());

        if (diamond2.getHitPoints() > 0) {
            diamond2.attack(diamond1.getname());
            diamond1.takeDamage(diamond2.getTakeDamage());
        }

        if (diamond1.getHitPoints() <= 20 && diamond1.getEnergyPoints() > 0) {
            diamond1.beReapaired(10);
        }
        if (diamond2.getHitPoints() <= 20 && diamond2.getEnergyPoints() > 0) {
            diamond2.beReapaired(10);
        }

        round++;
    }

    std::cout << "\n=== Fin del combate ===" << std::endl;
    if (diamond1.getHitPoints() > 0) {
        std::cout << diamond1.getname() << " gana el combate con " 
                  << diamond1.getHitPoints() << " puntos de vida restantes." << std::endl;
        diamond1.whoAmI();
    } else if (diamond2.getHitPoints() > 0) {
        std::cout << diamond2.getname() << " gana el combate con " 
                  << diamond2.getHitPoints() << " puntos de vida restantes." << std::endl;
        diamond2.whoAmI();
    } else {
        std::cout << "Ambos Diamondtraps están destruidos. ¡Es un empate!" << std::endl;
    }

    return 0;
}
