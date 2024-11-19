/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcameira <jcameira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/17 21:34:06 by jcameira          #+#    #+#             */
/*   Updated: 2024/11/18 01:15:48 by jcameira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>
# include <string>

class Animal {
    public:
        Animal( void );
        Animal( const Animal &copy );
        virtual ~Animal( void );

        Animal  &operator=( const Animal &obj );

        virtual void    makeSound( void ) const;

        std::string const   &getType( void ) const;
        
    protected:
        std::string  _type;

};

#endif