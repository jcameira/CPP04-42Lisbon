/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcameira <jcameira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 16:35:10 by jcameira          #+#    #+#             */
/*   Updated: 2024/11/28 19:25:51 by jcameira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <MateriaSource.hpp>

MateriaSource::MateriaSource( void ) {
    for ( int i = 0; i < 4; i++ ) {
        this->_memory[ i ] = NULL;
    }
}

MateriaSource::MateriaSource( const MateriaSource &copy ) {
    *this = copy;
}

MateriaSource::~MateriaSource( void ) {
    for ( int i = 0; i < 4; i++ ) {
        if ( this->_memory[ i ] ) {
            delete this->_memory[ i ];
        }
    }
}

MateriaSource   &MateriaSource::operator=( const MateriaSource &obj ) {
    ( void )obj;
    for ( int i = 0; i < 4; i++ ) {
        this->_memory[ i ] = NULL;
    }
    return ( *this );
}

void    MateriaSource::learnMateria( AMateria *obj ) {
    for ( int i = 0; i < 4; i++ ) {
        if ( !this->_memory[ i ] ) {
            this->_memory[ i ] = obj;
            std::cout << "Materia " << obj->getType() << " was learned!" << std::endl;
            return ;
        }
    }
    std::cout << "Couldn't learn " << obj->getType() << " Materia, memory of Source is full!" << std::endl;
    delete obj;
}

AMateria    *MateriaSource::createMateria( std::string const &type ) {
    if ( type.compare( "cure" ) && type.compare( "ice" ) ) {
        std::cout << "Couldn't create Materia " << type << ", unknown type!" << std::endl;
        return ( NULL );
    }
    for ( int i = 0; i < 4; i++ ) {
        if ( this->_memory[ i ] && this->_memory[ i ]->getType() == type ) {
            std::cout << "Created Materia " << type << " !" << std::endl;
            return ( this->_memory[ i ]->clone() );
        }
    }
    std::cout << "Couldn't create Materia " << type << ", no such materia in memory!" << std::endl;
    return ( NULL );
}