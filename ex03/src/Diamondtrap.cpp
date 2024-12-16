/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Diamondtrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbonilla <dbonilla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/16 01:33:34 by pipe              #+#    #+#             */
/*   Updated: 2024/12/16 19:07:11 by dbonilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Diamondtrap.hpp"



Diamondtrap::Diamondtrap() : Claptrap("Default_clap_name"), Fragtrap(), Scavtrap(), _name("Default") 
{
    _hitPoints = Fragtrap::_hitPoints;
    _energyPoints = Scavtrap::_energyPoints; 
    _attackDamage = Fragtrap::_attackDamage; 
    std::cout << "Diamondtrap " << _name << " constructed (default)" << std::endl;
}

Diamondtrap::Diamondtrap(const std::string &name) : Claptrap(name + "_clap_name"), Fragtrap(), Scavtrap(), _name(name) 
{
    _hitPoints = Fragtrap::_hitPoints;
    _energyPoints = Scavtrap::_energyPoints;
    _attackDamage = Fragtrap::_attackDamage;
    std::cout << "Diamondtrap " << _name << " constructed" << std::endl;
}

Diamondtrap::Diamondtrap(const Diamondtrap &other) : Claptrap(other), Fragtrap(other), Scavtrap(other) 
{
    *this = other;
    std::cout << "Diamondtrap " << _name << " copied" << std::endl;
}

Diamondtrap &Diamondtrap::operator=(const Diamondtrap &rhs) 
{
    if (this != &rhs) {
        Claptrap::operator=(rhs);
        _name = rhs._name;
    }
    return *this;
}

Diamondtrap::~Diamondtrap() {
    std::cout << "Diamondtrap " << _name << " destructed" << std::endl;
}

// Reimplementación de ataque
void Diamondtrap::attack(const std::string &target) 
{
    Scavtrap::attack(target);
}

// Nuevo método
void Diamondtrap::whoAmI() const 
{
    std::cout << "Diamondtrap name: " << _name << ", Claptrap name: " << Claptrap::_name << std::endl;
}