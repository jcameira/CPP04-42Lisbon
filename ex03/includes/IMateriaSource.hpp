/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IMateriaSource.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcameira <jcameira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 20:59:13 by jcameira          #+#    #+#             */
/*   Updated: 2024/11/19 21:26:08 by jcameira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef IMATERIASOURCE_HPP
# define IMATERIASOURCE_HPP

# include <AMateria.hpp>

class IMateriaSource {
    public:
        virtual             ~IMateriaSource( void ) {}
        virtual void        learnMateria( AMateria* ) = 0;
        virtual AMateria    *createMateria( std::string const & type ) = 0;
};

#endif