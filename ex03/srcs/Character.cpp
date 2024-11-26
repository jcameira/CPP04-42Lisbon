/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcameira <jcameira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/26 16:01:07 by jcameira          #+#    #+#             */
/*   Updated: 2024/11/26 19:26:01 by jcameira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Character.hpp>

Character::Character( void ) {
}

Character::Character( const Character &copy ) {
    *this = copy;
}

Character::~Character( void ) {
    for ( int i = 0; i < 4; i++ ) {
        if ( this->_inventory[ i ] ) {
            delete this->_inventory[ i ];
        }
    }
}

Character   &Character::operator=( const Character &obj ) {
    if ( this != &obj ) {
        this->_name = obj.getName();
    }
    return ( *this );
}



std::string const   &Character::getName( void ) const {
    return ( this->_name );
}

void    Character::setName( std::string const &name ) {
    this->_name = name;
}