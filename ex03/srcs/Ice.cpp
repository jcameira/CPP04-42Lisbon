/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcameira <jcameira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/26 14:44:56 by jcameira          #+#    #+#             */
/*   Updated: 2024/11/28 18:47:39 by jcameira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Ice.hpp>

Ice::Ice( void ) {
    this->_type = "ice";
}

Ice::Ice( const Ice &copy ): AMateria( copy ) {
    *this = copy;
}

Ice::~Ice( void ) {
}

Ice    &Ice::operator=( const Ice &obj ) {
    ( void )obj;
    return ( *this );
}

AMateria    *Ice::clone( void ) const {
    return ( new Ice( *this ) );
}

void    Ice::use( ICharacter& target ) {
    std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}