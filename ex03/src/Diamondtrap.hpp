/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Diamondtrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pipe <pipe@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/16 01:28:08 by pipe              #+#    #+#             */
/*   Updated: 2024/12/16 01:38:23 by pipe             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_H

#define DIAMONDTRAP_H

#include "Fragtrap.hpp"
#include "Scavtrap.hpp"
#include "Claptrap.hpp"

class Diamondtrap : public Fragtrap, public Scavtrap
{
    private:
        std::string _name;
    
    public:
        Diamondtrap();
        Diamondtrap(const std::string &name);
        Diamondtrap(const Diamondtrap &other);
        Diamondtrap &operator=(const Diamondtrap &rhs);
        ~Diamondtrap();

        void attack(const std::string &target);
        void whoAmI() const;        
        
};

#endif