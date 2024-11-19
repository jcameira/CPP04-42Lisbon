/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcameira <jcameira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 20:45:53 by jcameira          #+#    #+#             */
/*   Updated: 2024/11/19 21:19:33 by jcameira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
# define CURE_HPP

# include <AMateria.hpp>

class Cure: public AMateria {
    public:
        Cure( void );
        Cure( const Cure &copy );
        virtual ~Cure( void );

        Cure &Cure::operator=( const Cure &obj );
        
};

#endif