/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nplieger <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/13 13:13:14 by nplieger          #+#    #+#             */
/*   Updated: 2023/08/30 23:05:20 by nicolas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "Character.hpp"
#include "MateriaSource.hpp"

#include "Ice.hpp"
#include "Cure.hpp"

void	subject_tests(void)
{
	ICharacter	*me = new Character("Nicolas");
	ICharacter	*corrector = new Character("Corrector");
	ICharacter	*bob = new Character("bob");

	IMateriaSource	*src = new MateriaSource(); // = spell template
	src->learnMateria(new Ice()); // add Ice
	src->learnMateria(new Cure()); // add cure

	AMateria* tmp; // creat a temporary variable to reference.
	// Create materia from MateriaSource.
	tmp = src->createMateria("ice"); // create ice as AMateria.
	me->equip(tmp); // equip ice to "me"
	tmp = src->createMateria("cure"); // create cure as AMateria
	me->equip(tmp); // equipe cure to "me"

	std::cout << std::endl;
	me->printInventory();
	std::cout << std::endl;

	me->use(0, *bob);
	me->use(1, *bob);
	me->use(2, *bob);

	delete me;
	delete corrector;
	delete bob;
	delete src;
}

int	main(void)
{
	subject_tests();
	return (0);
}
