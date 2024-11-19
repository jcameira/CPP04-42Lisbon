/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcameira <jcameira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 20:54:50 by jcameira          #+#    #+#             */
/*   Updated: 2024/11/19 20:56:35 by jcameira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include <ICharacter.hpp>

class Character: public ICharacter {
    public:
        Character( void );
        Character( const Character &copy );
        ~Character( void );

        Character &Character::operator=( const Character &obj );
        
};

#endif