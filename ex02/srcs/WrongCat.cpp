/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcameira <jcameira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 01:11:39 by jcameira          #+#    #+#             */
/*   Updated: 2024/11/19 02:28:33 by jcameira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <WrongCat.hpp>

WrongCat::WrongCat( void ): WrongAnimal() {
    std::cout << "WrongCat Default Constructor called" << std::endl;
    this->_type = "WrongCat";
}

WrongCat::WrongCat( const WrongCat &copy ): WrongAnimal( copy ) {
    std::cout << "WrongCat Copy Constructor called" << std::endl;
}

WrongCat::~WrongCat( void ) {
    std::cout << "WrongCat Destructor called" << std::endl;
}

WrongCat  &WrongCat::operator=( const WrongCat &obj ) {
    std::cout << "WrongCat Assignment operator called" << std::endl;
    if ( this != &obj ) {
        this->_type = obj._type;
    }
    return ( *this );   
}

void    WrongCat::makeSound( void ) const {
    std::cout << this->getType() << " Meows!" << std::endl;
}