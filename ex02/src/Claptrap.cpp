/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Claptrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pipe <pipe@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/15 23:04:57 by pipe              #+#    #+#             */
/*   Updated: 2024/12/15 23:49:09 by pipe             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Claptrap.hpp"


Claptrap::Claptrap() : _name("Default"), _hitPoints(10), _energyPoints(10) ,_attackDamage(0)
{
    std::cout <<  "Default constructed called" << std::endl;
}

Claptrap::Claptrap(const std::string &name) : _name(name)
{
    std::cout << "Claptrap " << name << " Default constructed" << std::endl;
}

Claptrap::Claptrap(const Claptrap &other)
{
    *this = other;
    std::cout <<  "Copy constructed" << std::endl;
}

Claptrap &Claptrap::operator=(const Claptrap &rhs)
{
    if (this != &rhs)
    {
        _name = rhs._name;
        _hitPoints = rhs._hitPoints;
        _attackDamage = rhs._attackDamage;
        _energyPoints = rhs._energyPoints;
    }
    return (*this);
}

Claptrap::~Claptrap()
{
    std::cout << "Destructed call" << std::endl;
}

void Claptrap::attack(const std::string &target)
{
    if (_hitPoints > 0  && _energyPoints > 0)
    {
        _energyPoints--;
        std::cout << _name << " Attacks " << target << " Causing " << _attackDamage << " Points of damage" << std::endl;
        
    }
    else 
        std::cout << _name << "Can´t attack due to insufficient energy or health" << std::endl;
}

void Claptrap::takeDamage(unsigned int value)
{
    if (_hitPoints > 0)
    {
        if (value >= _hitPoints)
        {
            _hitPoints = 0;
        }
        else
            _hitPoints -= value;
    }
    else
        std::cout << " Clap trap" << _name << " Is already destroyed" << std::endl;
}
void Claptrap::beReapaired(unsigned int value)
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
    return(_name);
}

unsigned int Claptrap::getHitPoints() const
{
    return (_hitPoints);
}

unsigned int Claptrap::getEnergyDamage() const
{
    return (_energyPoints);
}

unsigned int Claptrap::getTakeDamage() const
{
    return (_attackDamage);
}

void Claptrap::setHitPoints(unsigned int value)
{
    _hitPoints = value;
}
void Claptrap::setEnergyDamage(unsigned int value)
{
    _energyPoints = value;
}
void Claptrap::setTakeDamage(unsigned int value)
{
    _attackDamage = value;
}