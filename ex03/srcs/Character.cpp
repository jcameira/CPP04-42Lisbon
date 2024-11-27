/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcameira <jcameira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/26 16:01:07 by jcameira          #+#    #+#             */
/*   Updated: 2024/11/27 19:26:06 by jcameira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Character.hpp>

Character::Character( void ): _name( "John Doe" ) {
    for ( int i; i < 3; i++ ) {
        this->_inventory[ i ] = NULL;
    }
}

Character::Character( const std::string &name ): _name( name ) {
    for ( int i; i < 3; i++ ) {
        this->_inventory[ i ] = NULL;
    }
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
    for ( int i; i < 3; i++ ) {
        this->_inventory[ i ] = NULL;
    }
    return ( *this );
}

void    Character::use( int i, ICharacter &target ) {
    if ( i < 0 || i > 3 ) {
        std::cout << "There are only 4 inventory slots!" << std::endl;
        return ;
    }
    if ( _inventory[ i ] ) {
        this->_inventory[ i ]->use( target );
    }
    else {
        std::cout << "There is no Materia in the chosen slot!" << std::endl;
    }
}

void    Character::equip( AMateria *m ) {
    if ( !m ) {
        std::cout << "Materia doesn't exist!" << std::endl;
        return ;
    }
    for ( int i; i < 4; i++ ) {
        if ( !this->_inventory[ i ] ) {
            this->_inventory[ i ] = m;
            std::cout << this->getName() << " equiped Materia " << this->_inventory[ i ]->getType() << " !" << std::endl;
        }
    }
}

std::string const   &Character::getName( void ) const {
    return ( this->_name );
}

void    Character::setName( std::string const &name ) {
    this->_name = name;
}