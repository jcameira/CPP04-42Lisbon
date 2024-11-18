/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcameira <jcameira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/17 21:39:13 by jcameira          #+#    #+#             */
/*   Updated: 2024/11/18 01:06:55 by jcameira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include <Animal.hpp>

class Dog: public Animal {
    public:
        Dog( void );
        Dog( const Dog &copy );
        ~Dog( void );
        
        Dog &operator=( const Dog &obj );
    
        void    makeSound( void ) const;

};

#endif