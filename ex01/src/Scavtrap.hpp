/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Scavtrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pipe <pipe@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/15 15:06:00 by pipe              #+#    #+#             */
/*   Updated: 2024/12/15 15:24:38 by pipe             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_H

#define SCAVPTRAP_H

#include "Claptrap.hpp"


class Scavtrap : public Claptrap 
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