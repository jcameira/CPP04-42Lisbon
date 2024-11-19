/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcameira <jcameira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/17 21:39:13 by jcameira          #+#    #+#             */
/*   Updated: 2024/11/19 00:56:47 by jcameira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include <Animal.hpp>
# include <Brain.hpp>

class Dog: public Animal {
    public:
        Dog( void );
        Dog( const Dog &copy );
        ~Dog( void );
        
        Dog &operator=( const Dog &obj );
    
        void    makeSound( void ) const;
        void    printIdeas( void ) const;
        void    giveIdea( std::string idea );

    private:
        Brain   *_brain;

};

#endif