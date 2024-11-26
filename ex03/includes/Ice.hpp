/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcameira <jcameira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 20:43:02 by jcameira          #+#    #+#             */
/*   Updated: 2024/11/26 14:45:55 by jcameira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
# define ICE_HPP

# include <AMateria.hpp>

class Ice: public AMateria {
    public:
        Ice( void );
        Ice( const Ice &copy );
        virtual ~Ice( void );

        Ice &Ice::operator=( const Ice &obj );
        
        AMateria    *clone( void ) const;
        void        use( ICharacter& target );

};

#endif