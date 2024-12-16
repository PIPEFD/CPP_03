/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Claptrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pipe <pipe@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/15 23:52:55 by pipe              #+#    #+#             */
/*   Updated: 2024/12/16 01:46:43 by pipe             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Claptrap.hpp"


Claptrap::Claptrap() : _name("Default"), _hitPoints(10), _energyPoints(0) ,_attackDamage(0)
{
    std::cout << _name << "Constructed default" << std::endl;
}

Claptrap::Claptrap(const std::string &name) : _name(name)
{
    std::cout << "Claptrap " << _name << " Default Cosntructed" << std::endl;
    
}

Claptrap::Claptrap(const Claptrap &other)
{
    *this = other;
    std::cout << "Copy constructed " << std::endl;
}

Claptrap &Claptrap::operator=(const Claptrap &rhs)
{
    if (this !=  &rhs)
    {
        Claptrap::operator=(rhs);        
    }
    return (*this);
}

Claptrap::~Claptrap()
{
    std::cout << "Destructed called" << std::endl;
}

void Claptrap::attack(const std::string &target)
{
    if (_hitPoints > 0 && _energyPoints > 0)
    {
        _energyPoints--;
        std::cout << _name << " Attacks " << target << " Causing " << _attackDamage << " Points of damage" << std::endl;

    }
    else
        std::cout << _name << "Can´t attack due to insufficient energy or health" << std::endl;

}
void Claptrap::takeDamage(unsigned value) 
{
    if (_hitPoints > 0)
    {
        if (value >= _hitPoints)
        _hitPoints = 0;
        else
            _hitPoints -= value;        
        
    }
    else
        std::cout << " Clap trap" << _name << " Is already destroyed" << std::endl;

}

void Claptrap::beReapaired(unsigned value)
{
    if (_energyPoints > 0 && _hitPoints)
    {
        _energyPoints--;
        _hitPoints += value;
        std::cout << " Claptrap " << _name << " Repairs itself by" << value
                << " Points! Curren HP: " << _hitPoints << std::endl;

    }
    else
        std::cout << " CLaptrap" << _name << " Can´t repait due to insufficient energy or health!" << std::endl;

        
}
std::string Claptrap::getname() const
{
    return _name;    
}
unsigned int Claptrap::getHitPoints() const 
{
    return _hitPoints;
}

unsigned int Claptrap::getEnergyPoints() const 
{
    return _energyPoints;
}
unsigned int Claptrap::getTakeDamage() const
{
    return _attackDamage;
}


void Claptrap::setTakeDamage(unsigned int amount)
{
    _attackDamage = amount;
}

void Claptrap::setHitPoints(unsigned int amount) 
{
    _hitPoints = amount;
}

void Claptrap::setEnergyPoints(unsigned int amount) 
{
    _energyPoints = amount;
}