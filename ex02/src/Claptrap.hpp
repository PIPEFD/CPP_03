/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Claptrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pipe <pipe@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/15 20:40:50 by pipe              #+#    #+#             */
/*   Updated: 2024/12/15 23:40:55 by pipe             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef CLAPTRAP_H

#define CLAPTRAP_H

#include <iostream>

class Claptrap
{
  protected:
    std::string _name;
    unsigned int _hitPoints;
    unsigned int _energyPoints;
    unsigned int _attackDamage;
    
  public:
    Claptrap();
    Claptrap(const std::string &name);
    Claptrap(const Claptrap &other);
    Claptrap &operator=(const Claptrap &rhs);
    ~Claptrap();

    void attack(const std::string &target);
    void takeDamage(unsigned int amount);
    void beReapaired(unsigned int amount);

    std::string getname() const;

    unsigned int getHitPoints() const;
    unsigned int getEnergyDamage() const;
    unsigned int getTakeDamage() const;
    
    void setHitPoints(unsigned int value);
    void setEnergyDamage(unsigned int value);
    void setTakeDamage(unsigned int value);
    
};


#endif