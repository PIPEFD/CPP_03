/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Scavtrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pipe <pipe@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/16 01:17:45 by pipe              #+#    #+#             */
/*   Updated: 2024/12/16 01:44:14 by pipe             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_H

#define SCAVTRAP_H

#include "Claptrap.hpp"

class Scavtrap : virtual public Claptrap
{
    public:
        Scavtrap();
        Scavtrap(const std::string &name);
        Scavtrap(const Scavtrap &other);
        Scavtrap &operator=(const Scavtrap &rhs);
        ~Scavtrap();

        void attack(const std::string &target);
        void guardGate();
};

#endif