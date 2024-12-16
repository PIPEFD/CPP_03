/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Claptrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pipe <pipe@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/13 12:38:39 by pipe              #+#    #+#             */
/*   Updated: 2024/12/13 14:07:13 by pipe             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef CLAPTRAP_H
#define CLAPTRAP_H
#include <iostream>

class Claptrap
{
    private:
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
        void beRepaired(unsigned int amount);

    
}
;

#endif
