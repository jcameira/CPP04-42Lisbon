/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcameira <jcameira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/26 14:25:22 by jcameira          #+#    #+#             */
/*   Updated: 2024/11/27 20:09:39 by jcameira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Cure.hpp>

Cure::Cure( void ){
    this->_type = "cure";
}

Cure::Cure( const Cure &copy ) {
    *this = copy;
}

Cure::~Cure( void ) {
}

Cure    &Cure::operator=( const Cure &obj ) {
    ( void )obj;
    return ( *this );
}

AMateria    *Cure::clone( void ) const {
    return ( new Cure( *this ) );
}

void    Cure::use( ICharacter& target ) {
    std::cout << "* heals " << target.getName() << "'s wounds*" << std::endl;
}