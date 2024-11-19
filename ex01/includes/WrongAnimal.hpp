/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcameira <jcameira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 01:07:32 by jcameira          #+#    #+#             */
/*   Updated: 2024/11/18 01:15:54 by jcameira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

# include <iostream>
# include <string>

class WrongAnimal {
    public:
        WrongAnimal( void );
        WrongAnimal( const WrongAnimal &copy );
        virtual ~WrongAnimal( void );

        WrongAnimal  &operator=( const WrongAnimal &obj );

        void    makeSound( void ) const;

        std::string const   &getType( void ) const;
        
    protected:
        std::string  _type;
};

#endif