/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcameira <jcameira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 01:09:11 by jcameira          #+#    #+#             */
/*   Updated: 2024/11/19 02:28:33 by jcameira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <WrongAnimal.hpp>

WrongAnimal::WrongAnimal( void ): _type( "No type" ) {
    std::cout << "WrongAnimal Default Constructor called" << std::endl;
}

WrongAnimal::WrongAnimal( const WrongAnimal &copy ) {
    std::cout << "WrongAnimal Copy Constructor called" << std::endl;
    *this = copy;
}

WrongAnimal::~WrongAnimal( void ) {
    std::cout << "WrongAnimal Destructor called" << std::endl;
}

WrongAnimal  &WrongAnimal::operator=( const WrongAnimal &obj ) {
    std::cout << "WrongAnimal Assignment operator called" << std::endl;
    if ( this != &obj ) {
        this->_type = obj.getType();
    }
    return ( *this );   
}

void    WrongAnimal::makeSound( void ) const {
    std::cout << "No particular sound..." << std::endl;
}

std::string const   &WrongAnimal::getType( void ) const {
    return ( this->_type );
}