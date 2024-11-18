/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcameira <jcameira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/17 21:37:17 by jcameira          #+#    #+#             */
/*   Updated: 2024/11/18 00:57:33 by jcameira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# include <Animal.hpp>

class Cat: public Animal {
    public:
        Cat( void );
        Cat( const Cat &copy );
        ~Cat( void );

        Cat &operator=( const Cat &obj );
    
        void    makeSound( void ) const;
        
};

#endif