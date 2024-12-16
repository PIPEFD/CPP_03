/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Diamondtrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pipe <pipe@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/16 01:33:34 by pipe              #+#    #+#             */
/*   Updated: 2024/12/16 01:44:37 by pipe             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Diamondtrap.hpp"


// Constructor por defecto
Diamondtrap::Diamondtrap() : Claptrap("Default_clap_name"), Fragtrap(), Scavtrap(), _name("Default") 
{
    _hitPoints = Fragtrap::_hitPoints;     // Heredado de Fragtrap
    _energyPoints = Scavtrap::_energyPoints; // Heredado de Scavtrap
    _attackDamage = Fragtrap::_attackDamage; // Heredado de Fragtrap
    std::cout << "Diamondtrap " << _name << " constructed (default)" << std::endl;
}

// Constructor con nombre
Diamondtrap::Diamondtrap(const std::string &name) : Claptrap(name + "_clap_name"), Fragtrap(), Scavtrap(), _name(name) 
{
    _hitPoints = Fragtrap::_hitPoints;
    _energyPoints = Scavtrap::_energyPoints;
    _attackDamage = Fragtrap::_attackDamage;
    std::cout << "Diamondtrap " << _name << " constructed" << std::endl;
}

// Constructor de copia
Diamondtrap::Diamondtrap(const Diamondtrap &other) : Claptrap(other), Fragtrap(other), Scavtrap(other) 
{
    *this = other;
    std::cout << "Diamondtrap " << _name << " copied" << std::endl;
}

// Operador de asignación
Diamondtrap &Diamondtrap::operator=(const Diamondtrap &rhs) 
{
    if (this != &rhs) {
        Claptrap::operator=(rhs);
        _name = rhs._name;
    }
    return *this;
}

// Destructor
Diamondtrap::~Diamondtrap() {
    std::cout << "Diamondtrap " << _name << " destructed" << std::endl;
}

// Reimplementación de ataque
void Diamondtrap::attack(const std::string &target) 
{
    Scavtrap::attack(target); // Usa el ataque de Scavtrap
}

// Nuevo método
void Diamondtrap::whoAmI() const 
{
    std::cout << "Diamondtrap name: " << _name << ", Claptrap name: " << Claptrap::_name << std::endl;
}