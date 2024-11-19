/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcameira <jcameira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/17 21:32:56 by jcameira          #+#    #+#             */
/*   Updated: 2024/11/19 17:26:27 by jcameira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Dog.hpp>
#include <Cat.hpp>
#include <WrongCat.hpp>

int main() {
	std::cout << std::endl << "--- PDF: ---" << std::endl
						<< std::endl;
	AAnimal *dog = new Dog();
	AAnimal *cat = new Cat();

	delete dog;
	delete cat;

	std::cout << std::endl
				<< "\033[32m--- Array of animals ---" << std::endl
				<< std::endl;

	AAnimal *array_animals[ 10 ];
	for ( int i = 0; i < 10; i++ ) {
		if ( i % 2 ) {
			array_animals[i] = new Dog();
		}
		else {
			array_animals[i] = new Cat();
		}
	}
	std::cout << std::endl << "\033[33m";

	for ( int i = 0; i < 10; i++ ) {
		array_animals[i]->makeSound();
	}

	std::cout << std::endl << "\033[31m";

	for ( int i = 0; i < 10; i++ ) {
		delete array_animals[i];
	}

	std::cout << std::endl
				<< "\033[94m--- Test for deep copy ---" << std::endl
				<< std::endl;
	Cat *cat2 = new Cat();
	cat2->giveIdea( "Hmm... fish!" );
	cat2->giveIdea( "I wanna play..." );
	cat2->printIdeas();

	std::cout << std::endl
				<< "\033[35m--- Making a deep copy ---" << std::endl
				<< std::endl;

	Cat *cat3 = new Cat( *cat2 );
	cat2->giveIdea( "Gotta sleep now..." );
	std::cout << std::endl;
	cat2->printIdeas();
	std::cout << std::endl;
	cat3->printIdeas();
	std::cout << std::endl;

	std::cout << std::endl
				<< "\033[36m--- Copy assignment operator ---" << std::endl
				<< std::endl;

	std::cout << "New Cat" << std::endl << std::endl;
	Cat *cat4 = new Cat();
	std::cout << std::endl <<"Assigning cat 3 to cat 4" << std::endl << std::endl;
	*cat4 = *cat3;
	std::cout << std::endl ;
	cat4->printIdeas();
	std::cout << std::endl;
	cat3->giveIdea( "No sleeping now!!!" );
	cat3->printIdeas();
	std::cout << std::endl;
	cat4->printIdeas();
	std::cout << std::endl;

	std::cout << std::endl
				<< "\033[39m--- Destruction ---" << std::endl
				<< std::endl;

	delete cat2;
	delete cat3;
	delete cat4;
	return ( 0 );
}