/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcameira <jcameira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/17 21:33:24 by jcameira          #+#    #+#             */
/*   Updated: 2024/11/19 02:28:33 by jcameira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Cat.hpp>

Cat::Cat( void ): Animal() {
    std::cout << "Cat Default Constructor called" << std::endl;
    this->_type = "Cat";
}

Cat::Cat( const Cat &copy ): Animal( copy ) {
    std::cout << "Cat Copy Constructor called" << std::endl;
}

Cat::~Cat( void ) {
    std::cout << "Cat Destructor called" << std::endl;
}

Cat  &Cat::operator=( const Cat &obj ) {
    std::cout << "Cat Assignment operator called" << std::endl;
    if ( this != &obj ) {
        this->_type = obj._type;
    }
    return ( *this );   
}

void    Cat::makeSound( void ) const {
    std::cout << this->getType() << " Meows!" << std::endl;
}