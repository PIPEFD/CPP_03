/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fragtrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pipe <pipe@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/15 23:21:01 by pipe              #+#    #+#             */
/*   Updated: 2024/12/15 23:37:34 by pipe             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fragtrap.hpp"


Fragtrap::Fragtrap() : Claptrap()
{
    _hitPoints =  100;
    _energyPoints = 100;
    _attackDamage = 30;

    std::cout << "Fragtrap" << _name << " Constructed default" << std::endl;
}

Fragtrap::Fragtrap(const std::string &name) : Claptrap(name)
{
    _hitPoints =  100;
    _energyPoints = 100;
    _attackDamage = 30;

    std::cout << "Fragtrap" << _name << " Constructed " << std::endl;
}

Fragtrap::Fragtrap(const Fragtrap &other) :  Claptrap(other)
{
    *this = other;
    std::cout << "Fragtrap" << _name << " Copied Constructed " << std::endl;
}

Fragtrap &Fragtrap::operator=(const Fragtrap &rhs)
{
    if (this != &rhs)
    {
        Claptrap::operator=(rhs);
    }
    return(*this);
}

Fragtrap::~Fragtrap()
{
    std::cout << "Destructed called " << std::endl;
}

void Fragtrap::attack(const std::string &target)
{
    if (_hitPoints > 0 && _energyPoints > 0 )
    {
        _energyPoints--;
        std::cout << "Fragtrap " << _name  << "  attacks " << target
                << ",  causing " << _attackDamage  << " Points of damage" << std::endl; 
    }
    else
        std::cout << " Fragtrap " << _name << " Can´t attack due insufficent energy or health" << std::endl;
}

void Fragtrap::highFivesGuys() const
{
    std::cout << "FragTrap " << _name << " requests a high five! ✋" << std::endl;
}
