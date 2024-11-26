/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcameira <jcameira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 17:53:49 by jcameira          #+#    #+#             */
/*   Updated: 2024/11/26 16:00:57 by jcameira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
# define AMATERIA_HPP

# include <iostream>
# include <string>
# include <ICharacter.hpp>

class AMateria {
    public:
        AMateria( void );
        AMateria( std::string const &type );
        AMateria( const AMateria &Copy );
        virtual ~AMateria( void );

        AMateria    &AMateria::operator=( const AMateria &obj );

        virtual AMateria    *clone( void ) const = 0;
        virtual void        use( ICharacter& target );
        
        std::string const   &getType( void ) const;
    
    protected:
        std::string _type;

};


#endif