/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcameira <jcameira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/17 21:39:13 by jcameira          #+#    #+#             */
/*   Updated: 2024/11/19 15:12:35 by jcameira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include <AAnimal.hpp>
# include <Brain.hpp>

class Dog: public AAnimal {
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