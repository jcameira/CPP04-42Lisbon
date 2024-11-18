/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcameira <jcameira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/17 21:32:56 by jcameira          #+#    #+#             */
/*   Updated: 2024/11/18 01:19:01 by jcameira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Dog.hpp>
#include <Cat.hpp>
#include <WrongCat.hpp>

int main() {
  std::cout << "\033[33m--- Project pdf: derived class overrides base class method ---"
            << std::endl
            << std::endl;
  const Animal *meta = new Animal();
  const Animal *i = new Cat();
  const Animal *j = new Dog();
  std::cout << i->getType() << " " << std::endl;
  std::cout << j->getType() << " " << std::endl;
  i->makeSound();  // will output the cat sound!
  j->makeSound();
  meta->makeSound();
  delete meta;
  delete i;
  delete j;

  std::cout << std::endl
            << "\033[32m--- Objects are created as derived class ---"
            << std::endl
            << std::endl;
  const Animal *meta2 = new Animal();
  const Cat *i2 = new Cat();
  const Dog *j2 = new Dog();
  std::cout << i2->getType() << " " << std::endl;
  std::cout << j2->getType() << " " << std::endl;
  i2->makeSound();  // will output the cat sound!
  j2->makeSound();
  meta2->makeSound();
  delete meta2;
  delete i2;
  delete j2;

  std::cout << std::endl
            << "\033[31m--- WrongAnimal Test: derived class doesn't override base "
               "class function ---"
            << std::endl
            << std::endl;
  const WrongAnimal *meta3 = new WrongAnimal();
  const WrongAnimal *i3 = new WrongCat();
  std::cout << meta3->getType() << " " << std::endl;
  std::cout << i3->getType() << " " << std::endl;
  meta3->makeSound();
  i3->makeSound();  // makes WrongAnimal sound because makeSound in WrongAnimal
                    // is not virtual
  delete meta3;
  delete i3;  // also, only calls one destructor, because destructor of
              // WrongAnimal is not virtual

  return 0;
}