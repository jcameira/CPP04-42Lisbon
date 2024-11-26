/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcameira <jcameira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 20:54:50 by jcameira          #+#    #+#             */
/*   Updated: 2024/11/26 19:25:51 by jcameira         ###   ########.fr       */
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

        void equip( AMateria* m );
        void unequip( int idx );
        void use( int idx, ICharacter& target );

        std::string const &getName( void ) const;

        void    setName( std::string const &name );

    private:
        AMateria    *_inventory[ 4 ];
        std::string _name;

};

#endif