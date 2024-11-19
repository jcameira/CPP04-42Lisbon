/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcameira <jcameira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 01:10:52 by jcameira          #+#    #+#             */
/*   Updated: 2024/11/18 01:11:24 by jcameira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

# include <WrongAnimal.hpp>

class WrongCat: public WrongAnimal {
    public:
        WrongCat( void );
        WrongCat( const WrongCat &copy );
        ~WrongCat( void );

        WrongCat &operator=( const WrongCat &obj );
    
        void    makeSound( void ) const;
        
};

#endif