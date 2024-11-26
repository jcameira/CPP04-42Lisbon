/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcameira <jcameira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/26 14:44:56 by jcameira          #+#    #+#             */
/*   Updated: 2024/11/26 14:48:27 by jcameira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Ice.hpp>

Ice::Ice( void ){
    this->_type = "ice";
}

Ice::Ice( const Ice &copy ) {
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

void    use( ICharacter& target ) {
    std::cout << "* heals " << target.getName() << "'s wounds*" << std::endl;
}