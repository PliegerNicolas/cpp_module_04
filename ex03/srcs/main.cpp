/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nplieger <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/13 13:13:14 by nplieger          #+#    #+#             */
/*   Updated: 2023/06/16 17:28:31 by nplieger         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "Character.hpp"
#include "MateriaSource.hpp"

#include "Ice.hpp"
#include "Cure.hpp"


void	subject_tests(void)
{
	IMateriaSource* src = new MateriaSource(); // = spell template
	src->learnMateria(new Ice()); // add Ice
	src->learnMateria(new Cure()); // add cure
	ICharacter* me = new Character("me"); // create empty called "me" character

	AMateria* tmp; // creat a temporary variable to reference.
	tmp = src->createMateria("ice"); // create ice as AMateria.
	me->equip(tmp); // equip ice to "me"
	tmp = src->createMateria("cure"); // create cure as AMateria
	me->equip(tmp); // equipe cure to "me"

	me->printInventory();

	ICharacter* bob = new Character("bob");

	std::cout << std::endl << std::endl;

	me->use(0, *bob);
	me->use(1, *bob);

	std::cout << std::endl << std::endl;

	delete bob;
	delete me;
	delete src;
}

int	main(void)
{
	subject_tests();
	return (0);
}
