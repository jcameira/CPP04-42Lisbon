/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcameira <jcameira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 21:02:07 by jcameira          #+#    #+#             */
/*   Updated: 2024/11/29 11:03:32 by jcameira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Ice.hpp>
#include <Cure.hpp>
#include <MateriaSource.hpp>
#include <Character.hpp>

int main( void ) {
	// subject main
	{
		std::cout << "\033[33m";
		IMateriaSource* src = new MateriaSource();
		src->learnMateria(new Ice());
		src->learnMateria(new Cure());


		ICharacter* me = new Character("me");

		AMateria* tmp;
		tmp = src->createMateria("ice");
		me->equip(tmp);
		tmp = src->createMateria("cure");
		me->equip(tmp);

		ICharacter* bob = new Character("bob");
		me->use(0, *bob);
		me->use(1, *bob);

		me->unequip(1);
		
		delete tmp;
		delete bob;
		delete me;
		delete src;
	}
	// my tests 1
	{
		std::cout << "\033[32m" << std::endl;
		IMateriaSource *attacks = new MateriaSource();
		attacks->learnMateria(new Ice());

		IMateriaSource *heals = new MateriaSource();
		heals->learnMateria(new Cure());

		Character *me = new Character("me");
		me->equip(heals->createMateria("cure"));
		me->equip(attacks->createMateria("death"));
		me->equip(attacks->createMateria("fire"));
		me->equip(heals->createMateria("revive"));

		AMateria *temp = attacks->createMateria("ice");

		me->equip(temp);
		Character *enemy = new Character("enemy");
		me->use(0, *enemy);
		me->use(1, *enemy);
		me->use(2, *enemy);
		me->use(3, *enemy);

		delete attacks;
		delete heals;
		delete me;
		delete enemy;
	}
	// Materia Source tests
	{
		std::cout << "\033[31m" << std::endl;
		IMateriaSource *materiaSource = new MateriaSource();
		materiaSource->learnMateria(new Ice());
		materiaSource->learnMateria(new Cure());

		AMateria *temp = materiaSource->createMateria("ice");

		delete temp;
		delete materiaSource;
	}
	// Deep Copy tests
	{
		std::cout << "\033[34m" << std::endl;
		IMateriaSource *materiaSource = new MateriaSource();
		materiaSource->learnMateria(new Ice());
		materiaSource->learnMateria(new Cure());
		Character  *t1 = new Character("me");
		t1->equip(materiaSource->createMateria("cure"));
		t1->equip(materiaSource->createMateria("ice"));
		t1->equip(materiaSource->createMateria("asd"));
		Character t2;
		t2 = *t1;
		Character *t3 = new Character(*t1);
		t1->use(0, t2);
		t1->use(1, t2);
		t1->use(2, t2);
		delete t1;
		t3->use(0, t2);
		t2.use(1, *t3);
		t2.use(2, *t3);
		delete materiaSource;
		delete t3;
		std::cout << "\033[39m";
	}
}