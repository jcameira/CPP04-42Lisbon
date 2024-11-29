/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcameira <jcameira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/17 21:33:24 by jcameira          #+#    #+#             */
/*   Updated: 2024/11/29 10:56:39 by jcameira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Cat.hpp>

Cat::Cat( void ): AAnimal() {
    std::cout << "Cat Default Constructor called" << std::endl;
    this->_type = "Cat";
    this->_brain = new Brain();
}

Cat::Cat( const Cat &copy ): AAnimal( copy ) {
    std::cout << "Cat Copy Constructor called" << std::endl;
    this->_brain = new Brain( *copy._brain );
    this->_type = copy._type;
}

Cat::~Cat( void ) {
    std::cout << "Cat Destructor called" << std::endl;
    delete this->_brain;
}

Cat  &Cat::operator=( const Cat &obj ) {
    std::cout << "Cat Assignment operator called" << std::endl;
    if ( this != &obj ) {
        this->_type = obj._type;
        delete this->_brain;
        this->_brain = new Brain( *obj._brain );
    }
    return ( *this );   
}

void    Cat::makeSound( void ) const {
    std::cout << this->getType() << " Meows!" << std::endl;
}

void    Cat::printIdeas( void ) const {
    std::string idea;
    std::cout << "Cat's ideas:" << std::endl;
    for ( int i = 0; i < 100; i++ ) {
        idea = this->_brain->getIdea( i );
        if ( idea.length() ) {
            std::cout << idea << std::endl;
        }
    }
}

void    Cat::giveIdea( std::string idea ) {
    for ( int i = 0; i < 100; i++ ) {
		if ( this->_brain->getIdea( i ) == "" ) {
			this->_brain->setIdea( i, idea );
			return;
		}
	}
	std::cout << "Brain of cat is full!" << std::endl;
}