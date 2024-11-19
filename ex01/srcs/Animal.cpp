/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcameira <jcameira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/17 21:33:05 by jcameira          #+#    #+#             */
/*   Updated: 2024/11/19 02:28:33 by jcameira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Animal.hpp>

Animal::Animal( void ): _type( "No type" ) {
    std::cout << "Animal Default Constructor called" << std::endl;
}

Animal::Animal( const Animal &copy ) {
    std::cout << "Animal Copy Constructor called" << std::endl;
    *this = copy;
}

Animal::~Animal( void ) {
    std::cout << "Animal Destructor called" << std::endl;
}

Animal  &Animal::operator=( const Animal &obj ) {
    std::cout << "Animal Assignment operator called" << std::endl;
    if ( this != &obj ) {
        this->_type = obj.getType();
    }
    return ( *this );   
}

void    Animal::makeSound( void ) const {
    std::cout << "No particular sound..." << std::endl;
}

std::string const   &Animal::getType( void ) const {
    return ( this->_type );
}