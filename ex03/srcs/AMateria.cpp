/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcameira <jcameira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 21:26:59 by jcameira          #+#    #+#             */
/*   Updated: 2024/11/28 17:11:27 by jcameira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <AMateria.hpp>

AMateria::AMateria( void ) {
}

AMateria::AMateria( std::string const &type ): _type( type ) {
}

AMateria::AMateria( const AMateria &copy ) {
    *this = copy;
}

AMateria::~AMateria( void ) {
}

AMateria    &AMateria::operator=( const AMateria &obj ) {
    if ( this != &obj ) {
        this->_type = obj.getType();
    }
    return ( *this );
}

void    AMateria::use( ICharacter &target ) {
    ( void )target;
}

std::string const   &AMateria::getType( void ) const {
    return ( this->_type );
}