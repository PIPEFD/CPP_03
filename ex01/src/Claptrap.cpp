/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Claptrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pipe <pipe@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/15 14:44:48 by pipe              #+#    #+#             */
/*   Updated: 2024/12/15 23:17:29 by pipe             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Claptrap.hpp"

Claptrap::Claptrap() : _name("Default"), _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
    std::cout <<  "Default Constructor Called" << std::endl;
}

Claptrap::Claptrap(const std::string &name): _name(name), _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
    std::cout << "Claptrap" << name << "Default Constructor" << std::endl;
}

Claptrap::Claptrap(const Claptrap &other)
{
    *this = other;
    std::cout << "Copy Constructor called" << std::endl;
}
Claptrap &Claptrap::operator=(const Claptrap &rhs)
{
    if (this != &rhs)
    {
        _name =  rhs._name;
        _hitPoints = rhs._hitPoints;
        _attackDamage = rhs._attackDamage;
        _energyPoints = rhs._energyPoints;
    }
    return (*this);
}

Claptrap::~Claptrap()
{
    std::cout << "Default destructor" << std::endl;
}

void Claptrap::attack(const std::string &target)
{
    if (_energyPoints > 0  && _hitPoints > 0)
    {
        _energyPoints--;
        std::cout << _name << " attacks " << target << " Causing " << _attackDamage << " Points of damage " << std::endl;
    }
    else
        std::cout << _name << " Can´t attack due tom insufficient energy or health" << std::endl;
}


void Claptrap::takeDamage(unsigned int value)
{
    if (_hitPoints > 0)
    {
        if (value >=  _hitPoints)
        {
            _hitPoints = 0;
        }
        else
            _hitPoints -= value;
    }
    else
        // std::cout << " Claptrap " << _name << " Is already destroyed  ";
        std::cout << " Claptrap " << _name << " Is already destroyed" << std::endl;
}


void Claptrap::beReapaired(unsigned int value)
{
    if (_energyPoints > 0 && _hitPoints)
    {
        _energyPoints--;
        _hitPoints += value;
        std::cout << "Claptrap " << _name << " Repairs itself by  " << value
                    << " points! Current HP: " << _hitPoints << std::endl;
        
    }
    else
        std::cout << " Claptrap" << _name << " Can´t repair due to insufficient energy or health!" << std::endl;
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