/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcameira <jcameira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 15:12:07 by jcameira          #+#    #+#             */
/*   Updated: 2024/11/19 15:12:09 by jcameira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AANIMAL_HPP
# define AANIMAL_HPP

# include <iostream>
# include <string>

class AAnimal {
    public:
        AAnimal( void );
        AAnimal( const AAnimal &copy );
        virtual ~AAnimal( void );

        AAnimal  &operator=( const AAnimal &obj );

        virtual void    makeSound( void ) const = 0;

        std::string const   &getType( void ) const;
        
    protected:
        std::string  _type;

};

#endif