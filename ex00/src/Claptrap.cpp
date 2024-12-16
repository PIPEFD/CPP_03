/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Claptrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pipe <pipe@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/13 12:45:22 by pipe              #+#    #+#             */
/*   Updated: 2024/12/15 19:40:30 by pipe             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Claptrap.hpp"

Claptrap::Claptrap() : _name("Default"), _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
    std::cout << _name << " Default constructor called" << std::endl;
}

Claptrap::Claptrap(const std::string &name): _name(name), _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
    std::cout << "Claptrap " << name << " Default constructor" << std::endl;
}

Claptrap::Claptrap(const Claptrap &other)
{
    *this = other;
    std::cout << "Copy constructor called" << std::endl;
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
    return(*this);
}

Claptrap::~Claptrap()
{
    std::cout << "Claptrap" << _name << std::endl;
}

void Claptrap::attack(const std::string &target)
{
    if (_energyPoints > 0 && _energyPoints > 0)
    {
        _energyPoints--;
        std::cout <<  _name << " attacks " << target << " causing " << _attackDamage << " Points of damage" << std::endl;
    }
    else 
        std::cout << _name <<  " can't attack due to insufficient energy or health!" << std::endl;
}

void Claptrap::takeDamage(unsigned int value)
{
    if (_hitPoints > 0)
    {
        if (value >= _hitPoints)
        {    
            _hitPoints = 0;
            std::cout << "ClapTrap " << _name << " is already destroyed!" << std::endl;
        }    
        else
            _hitPoints -= value;
    }
    else
        std::cout << "ClapTrap " << _name << " is already destroyed!" << std::endl;
       
}

void Claptrap::beRepaired(unsigned value)
{
    if (_energyPoints > 0 && _hitPoints)
    {
        _energyPoints--;
        _hitPoints += value;
        std::cout << "ClapTrap " << _name << " repairs itself by " << value
                  << " points! Current HP: " << _hitPoints << std::endl;
    }
    else
            std::cout << "ClapTrap " << _name << " can't repair due to insufficient energy or health!" << std::endl;
}


