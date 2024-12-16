/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Scavtrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pipe <pipe@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/16 01:14:22 by pipe              #+#    #+#             */
/*   Updated: 2024/12/16 01:55:19 by pipe             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Scavtrap.hpp"

Scavtrap::Scavtrap() : Claptrap()
{
    _hitPoints = 100;
    _energyPoints = 50;
    _attackDamage = 20;
    std::cout << " Scavtrap " << _name << " Constructed default " << std::endl;

}

Scavtrap::Scavtrap(const std::string &name) : Claptrap(name)
{
    _hitPoints = 100;
    _energyPoints = 50;
    _attackDamage = 20;
    std::cout << " Scavtrap " << _name << " Constructed " << std::endl;

}

Scavtrap::Scavtrap(const Scavtrap &other) : Claptrap(other)
{
    *this = other;
    std::cout << " Scavtrap " << _name << " Copied " << std::endl;

}

Scavtrap &Scavtrap::operator=(const Scavtrap &rhs)
{
    if (this !=  &rhs)
    {
        _name = rhs._name;
        _hitPoints =  rhs._hitPoints;
        _energyPoints = rhs._energyPoints;
        _attackDamage = rhs._attackDamage;
    }
    return (*this);
}

Scavtrap::~Scavtrap()
{
    std::cout << " Scavtrap " << _name << " Desstructed " << std::endl;
}
void Scavtrap::attack(const std::string &target)
{
    if (_hitPoints > 0 && _energyPoints > 0)
    {
        _energyPoints--;
        std::cout << "Scavtrap " << _name  << "  attacks " << target
                << ",  causing " << _attackDamage  << " Points of damage" << std::endl; 
    }
    else
        std::cout << " Scavtrap " << _name << " Can´t attack due insufficent energy or health" << std::endl;

    
}

void Scavtrap::guardGate()
{
    std::cout << " Scavtrap " << _name << " is now in Gatekeeper model!" << std::endl;

}