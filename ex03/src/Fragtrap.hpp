/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fragtrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pipe <pipe@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/16 00:13:18 by pipe              #+#    #+#             */
/*   Updated: 2024/12/16 01:44:07 by pipe             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_H

#define FRAGTRAP_H

#include "Claptrap.hpp"

class Fragtrap : virtual public Claptrap
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