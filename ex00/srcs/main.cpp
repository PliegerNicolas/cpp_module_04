/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nicolas <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/12 20:03:04 by nicolas           #+#    #+#             */
/*   Updated: 2023/06/12 21:26:17 by nicolas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

static void	testAnimal(void)
{
	Animal	a1;
	Animal	a2("Bird");

	std::cout << "a1_type : " << a1.getType() << std::endl;
	std::cout << "a2_type : " << a2.getType() << std::endl;
	a1.setType("Dromadaire à deux bosses");
	std::cout << "a1_type : " << a1.getType() << std::endl;
	std::cout << "a2_type : " << a2.getType() << std::endl;
	a1 = a2;
	std::cout << "a1_type : " << a1.getType() << std::endl;
	std::cout << "a2_type : " << a2.getType() << std::endl;
	a1.makeSound();
}

static void	testDogAndCat(void)
{
	std::cout << std::endl;
	Dog	dog1;
	Dog	dog2("Flying doggy");
	Cat	cat;

	dog1.makeSound();
	cat.makeSound();
	std::cout << "dog1 is of type : " << dog1.getType() << std::endl;
	dog1.setType("Bird");
	std::cout << "dog1 is of type : " << dog1.getType() << std::endl;
	dog1.makeSound();
	//dog = cat; this doesn't work.
	std::cout << "dog2 is of type : " << dog2.getType() << std::endl;
	dog1 = dog2;
	std::cout << "dog1 is of type : " << dog1.getType() << std::endl;
}

static void	subjectTest(void)
{
	std::cout << std::endl;
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();

	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	i->makeSound();
	j->makeSound();
	meta->makeSound();
	delete meta;
	delete j;
	delete i;
	std::cout << std::endl;
}

static void	subjectWrongTest(void)
{
	std::cout << std::endl;
	const WrongAnimal* meta = new WrongAnimal();
	//const WrongAnimal* j = new Dog();
	const WrongAnimal* i = new WrongCat();

	//std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	i->makeSound();
	//j->makeSound();
	meta->makeSound();
	delete meta;
	//delete j;
	delete i;
	std::cout << std::endl;
}

int	main(void)
{
	testAnimal();
	testDogAndCat();
	subjectTest();
	subjectWrongTest();
	return (0);
}
