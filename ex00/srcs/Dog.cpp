/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcameira <jcameira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/17 21:33:43 by jcameira          #+#    #+#             */
/*   Updated: 2024/11/18 01:06:00 by jcameira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Dog.hpp>

Dog::Dog( void ): Animal() {
    std::cout << "Dog Default Constructor called" << std::endl;
    this->_type = "Dog";
}

Dog::Dog( const Dog &copy ): Animal( copy ) {
    std::cout << "Dog Copy Constructor called" << std::endl;
}

Dog::~Dog( void ) {
    std::cout << "Dog Deconstructor called" << std::endl;
}

Dog  &Dog::operator=( const Dog &obj ) {
    std::cout << "Dog Assignment operator called" << std::endl;
    if ( this != &obj ) {
        Animal::operator=(obj);
    }
    return ( *this );   
}

void    Dog::makeSound( void ) const {
    std::cout << this->getType() << " Barks!" << std::endl;
}