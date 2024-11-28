/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcameira <jcameira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/17 21:33:43 by jcameira          #+#    #+#             */
/*   Updated: 2024/11/28 17:33:21 by jcameira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Dog.hpp>

Dog::Dog( void ): Animal() {
    std::cout << "Dog Default Constructor called" << std::endl;
    this->_type = "Dog";
    this->_brain = new Brain();
}

Dog::Dog( const Dog &copy ): Animal( copy ) {
    std::cout << "Dog Copy Constructor called" << std::endl;
    this->_brain = new Brain( *copy._brain );
    this->_type = copy._type;
}

Dog::~Dog( void ) {
    std::cout << "Dog Destructor called" << std::endl;
    delete this->_brain;
}

Dog  &Dog::operator=( const Dog &obj ) {
    std::cout << "Dog Assignment operator called" << std::endl;
    if ( this != &obj ) {
        this->_type = obj._type;
        delete this->_brain;
        this->_brain = new Brain ( *obj._brain );
    }
    return ( *this );   
}

void    Dog::makeSound( void ) const {
    std::cout << this->getType() << " Barks!" << std::endl;
}

void    Dog::printIdeas( void ) const {
    std::string idea;
    std::cout << "Dog's ideas:" << std::endl;
    for ( int i = 0; i < 100; i++ ) {
        idea = this->_brain->getIdea( i );
        if ( idea.length() ) {
            std::cout << idea << std::endl;
        }
    }
}

void    Dog::giveIdea( std::string idea ) {
    for ( int i = 0; i < 100; i++ ) {
		if ( this->_brain->getIdea( i ) == "" ) {
			this->_brain->setIdea( i, idea );
			return;
		}
	}
	std::cout << "Brain of dog is full!" << std::endl;
}