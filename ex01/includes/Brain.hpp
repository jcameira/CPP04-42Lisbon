/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcameira <jcameira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 20:47:36 by jcameira          #+#    #+#             */
/*   Updated: 2024/11/19 01:55:42 by jcameira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <iostream>
# include <string>

class Brain {
    public:
        Brain( void );
        Brain( const Brain &copy );
        ~Brain( void );

        Brain   &operator=( const Brain &obj );

        std::string getIdea( unsigned int i ) const;

        void    setIdea( unsigned int i, std::string idea );
        
    private:
        std::string _ideas[ 100 ];

};

#endif