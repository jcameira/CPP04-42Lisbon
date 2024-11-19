/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcameira <jcameira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 20:49:14 by jcameira          #+#    #+#             */
/*   Updated: 2024/11/19 02:28:33 by jcameira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Brain.hpp>

Brain::Brain( void ) {
    std::cout << "Brain Default Constructor called" << std::endl;
}

Brain::Brain( const Brain &copy) {
    std::cout << "Brain Copy Constructor called" << std::endl;
    *this = copy;
}

Brain::~Brain( void ) {
    std::cout << "Brain Destructor called" << std::endl;
}

Brain   &Brain::operator=( const Brain &obj ){
    std::cout << "Brain Assignment operator called" << std::endl;
    if ( this != &obj ) {
        for ( int i = 0; i < 100; i++ ) {
            if ( obj._ideas[ i ].length() ) {
                this->_ideas[ i ] = obj.getIdea( i );
            }
        }
    }
    return ( *this );
}

std::string Brain::getIdea( unsigned int i ) const {
    if ( i < 100 ) {
        return ( this->_ideas[ i ] );
    }
    else {
        std::cout << "There is only space for 100 ideas in my brain!" << std::endl;
        return ( "" );
    }
}

void    Brain::setIdea( unsigned int i, std::string idea ) {
    if ( i < 100 ) {
        this->_ideas[ i ] = idea;
    }
    else {
        std::cout << "There is only space for 100 ideas in my brain!" << std::endl;
    }
}