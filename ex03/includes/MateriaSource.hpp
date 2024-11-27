/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcameira <jcameira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 12:59:36 by jcameira          #+#    #+#             */
/*   Updated: 2024/11/27 13:03:48 by jcameira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

# include <IMateriaSource.hpp>

class MateriaSource: public IMateriaSource {
    public:
        MateriaSource( void );
        MateriaSource( const MateriaSource &copy );
        ~MateriaSource( void );

        MateriaSource   &operator=( const MateriaSource &obj );

        void        learnMateria( AMateria *obj );
        AMateria    *createMateria( std::string const &type );
    
};

#endif