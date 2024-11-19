/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcameira <jcameira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/17 21:37:17 by jcameira          #+#    #+#             */
/*   Updated: 2024/11/19 00:49:57 by jcameira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# include <Animal.hpp>
# include <Brain.hpp>

class Cat: public Animal {
    public:
        Cat( void );
        Cat( const Cat &copy );
        ~Cat( void );

        Cat &operator=( const Cat &obj );
    
        void    makeSound( void ) const;
        void    printIdeas( void ) const;
        void    giveIdea( std::string idea );
    
    private:
        Brain   *_brain;

};

#endif