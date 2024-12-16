/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fragtrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pipe <pipe@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/15 23:24:51 by pipe              #+#    #+#             */
/*   Updated: 2024/12/15 23:33:00 by pipe             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_H

#define FRAGTRAP_H

#include "Claptrap.hpp"

class Fragtrap : public Claptrap
{
    public:
        Fragtrap();
        Fragtrap(const std::string &name);
        Fragtrap(const Fragtrap &other);
        Fragtrap &operator=(const Fragtrap &rhs);
        ~Fragtrap();

        void attack(const std::string &target);
        void highFivesGuys() const;  
};


#endif