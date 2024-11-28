/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcameira <jcameira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/26 16:01:07 by jcameira          #+#    #+#             */
/*   Updated: 2024/11/28 22:30:52 by jcameira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Character.hpp>
#include <AMateria.hpp>

Character::Character( void ): _name( "John Doe" ) {
    for ( int i = 0; i < 4; i++ ) {
        this->_inventory[ i ] = NULL;
    }
}

Character::Character( const std::string &name ): _name( name ) {
    for ( int i = 0; i < 4; i++ ) {
        this->_inventory[ i ] = NULL;
    }
}

Character::Character( const Character &copy ) {
    this->_name = copy.getName();
    for ( int i = 0; i < 4; i++ ) {
        if ( copy._inventory[ i ] ) {
            this->_inventory[ i ] = copy._inventory[ i ]->clone();
        }
        else {
            this->_inventory[ i ] = NULL;
        }
    }
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
    for ( int i = 0; i < 4; i++ ) {
        if ( this->_inventory[ i ] ) {
            delete this->_inventory[ i ];
            this->_inventory[ i ] = NULL;
        }
        if ( obj._inventory[ i ] ) {
            this->_inventory[ i ] = obj._inventory[ i ]->clone();
        }
    }
    return ( *this );
}

void    Character::use( int i, ICharacter &target ) {
    if ( i < 0 || i > 3 ) {
        std::cout << "There are only 4 inventory slots!" << std::endl;
        return ;
    }
    if ( this->_inventory[ i ] ) {
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
    for ( int i = 0; i < 4; i++ ) {
        if ( !this->_inventory[ i ] ) {
            this->_inventory[ i ] = m;
            std::cout << this->getName() << " equiped Materia " << this->_inventory[ i ]->getType() << " !" << std::endl;
            return ;
        }
    }
}

void    Character::unequip( int idx ) {
    if ( idx < 0 || idx > 3 ) {
        std::cout << "There are only 4 inventory slots!" << std::endl;
        return ;
    }
    if ( this->_inventory[ idx ] ) {
        std::cout << this->getName() << " unequiped Materia " << this->_inventory[ idx ]->getType() << " !" << std::endl;
        this->_inventory[ idx ] = NULL;
    }
}

std::string const   &Character::getName( void ) const {
    return ( this->_name );
}

void    Character::setName( std::string const &name ) {
    this->_name = name;
}