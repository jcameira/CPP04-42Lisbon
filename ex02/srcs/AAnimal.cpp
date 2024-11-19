/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcameira <jcameira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 15:11:55 by jcameira          #+#    #+#             */
/*   Updated: 2024/11/19 15:12:01 by jcameira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <AAnimal.hpp>

AAnimal::AAnimal( void ): _type( "No type" ) {
    std::cout << "AAnimal Default Constructor called" << std::endl;
}

AAnimal::AAnimal( const AAnimal &copy ) {
    std::cout << "AAnimal Copy Constructor called" << std::endl;
    *this = copy;
}

AAnimal::~AAnimal( void ) {
    std::cout << "AAnimal Destructor called" << std::endl;
}

AAnimal  &AAnimal::operator=( const AAnimal &obj ) {
    std::cout << "AAnimal Assignment operator called" << std::endl;
    if ( this != &obj ) {
        this->_type = obj.getType();
    }
    return ( *this );   
}

void    AAnimal::makeSound( void ) const {
    std::cout << "No particular sound..." << std::endl;
}

std::string const   &AAnimal::getType( void ) const {
    return ( this->_type );
}