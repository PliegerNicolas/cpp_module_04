/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nicolas <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/12 20:03:04 by nicolas           #+#    #+#             */
/*   Updated: 2023/08/30 22:21:45 by nicolas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

# define RED "\033[31m"
# define GREEN "\033[32m"
# define GRAY "\033[37m"
# define CLEAR "\033[0m"

static void	testAnimal(void)
{
	std::cout << std::endl;
	std::cout << "\033[36;4m" << "testAnimal():" << CLEAR << std::endl;
	std::cout << std::endl;
	{
		std::cout << "\033[36m" << "Animal type" << CLEAR << std::endl;
		std::cout << std::endl;

		Animal	animal;
		Animal	bird("Bird");

		std::cout << GREEN << "'animal' type is " << CLEAR << animal.getType() << std::endl;
		std::cout << GREEN << "'bird' type is " << CLEAR << bird.getType() << std::endl;
		std::cout << GRAY << "Artificially set 'animal' type to 'Bear'" << CLEAR << std::endl;
		animal.setType("Bear");
		std::cout << GREEN << "'animal' type is " << CLEAR << animal.getType() << std::endl;
		std::cout << GREEN << "'bird' type is " << CLEAR << bird.getType() << std::endl;
	}
	{
		std::cout << std::endl;
		std::cout << "\033[36m" << "Animal constructors" << CLEAR << std::endl;
		std::cout << std::endl;
	
		Animal	bird1("Bird");
		Animal	bird2(bird1);
		Animal	bird3;

		bird3 = bird2;

		std::cout << GREEN << "'bird1' type is " << CLEAR << bird1.getType() << std::endl;
		std::cout << GREEN << "'bird2' type is " << CLEAR << bird2.getType() << std::endl;
		std::cout << GREEN << "'bird3' type is " << CLEAR << bird3.getType() << std::endl;

		bird1.makeSound();
		bird2.makeSound();
		bird3.makeSound();
	}
}

static void	testDogAndCat(void)
{
	std::cout << std::endl;
	std::cout << "\033[36;4m" << "testDogAndCat():" << CLEAR << std::endl;
	std::cout << std::endl;
	{
		std::cout << "\033[36m" << "Dog" << CLEAR << std::endl;
		std::cout << std::endl;

		Dog		dog1;
		Dog		dog2("Custom name");
		Dog		dog3;
		Cat		cat1;
		Cat		cat2("Custom name");
		Cat 	cat3;

		dog3 = dog2;
		dog2.setType("Flying doggo");

		std::cout << GREEN << "'dog1' type is " << CLEAR << dog1.getType() << std::endl;
		std::cout << GREEN << "'dog2' type is " << CLEAR << dog2.getType() << std::endl;
		std::cout << GREEN << "'dog3' type is " << CLEAR << dog3.getType() << std::endl;
		dog1.makeSound();
		std::cout << std::endl;
	}
	{
		std::cout << std::endl;
		std::cout << "\033[36m" << "Cat" << CLEAR << std::endl;
		std::cout << std::endl;

		Cat		cat1;
		Cat		cat2("Custom name");
		Cat 	cat3;

		cat3 = cat2;
		cat2.setType("Super cat");

		std::cout << GREEN << "'cat1' type is " << CLEAR << cat1.getType() << std::endl;
		std::cout << GREEN << "'cat2' type is " << CLEAR << cat2.getType() << std::endl;
		std::cout << GREEN << "'cat3' type is " << CLEAR << cat3.getType() << std::endl;
		cat1.makeSound();
		std::cout << std::endl;
	}
	{
		std::cout << std::endl;
		std::cout << "\033[36m" << "Cat and Dog ???" << CLEAR << std::endl;
		std::cout << std::endl;

		Cat		cat;
		Dog		dog;
		Animal	animal;

		//cat = dog; << is impossible

		animal = dog;
		std::cout << GREEN << "'animal' type is " << CLEAR << animal.getType() << std::endl;
		animal = cat;
		std::cout << GREEN << "'animal' type is " << CLEAR << animal.getType() << std::endl;

		cat.makeSound();
		dog.makeSound();
		animal.makeSound();

		//cat = animal; << is impossible
		//dog = animal; << is impossible

		std::cout << std::endl;
	}
}

static void	subjectTest(void)
{
	std::cout << std::endl;
	std::cout << "\033[36;4m" << "subjectTest():" << CLEAR << std::endl;
	std::cout << std::endl;

	const Animal* meta = new Animal();
	const Animal* dog = new Dog();
	const Animal* cat = new Cat();

	std::cout << GREEN << "animal as dog's type " << CLEAR << dog->getType() << std::endl;
	std::cout << GREEN << "animal as cat's type " << CLEAR << cat->getType() << std::endl;

	dog->makeSound();
	cat->makeSound();
	meta->makeSound();

	delete meta;
	delete dog;
	delete cat;
}

static void	wrongAnimalTest(void)
{
	std::cout << std::endl;
	std::cout << "\033[36;4m" << "wrongAnimalTest():" << CLEAR << std::endl;
	std::cout << std::endl;

	const WrongAnimal* meta = new WrongAnimal();
	const WrongAnimal* wrongCat = new WrongCat();

	std::cout << GREEN << "wrong animal as wrongcat's type " << CLEAR << wrongCat->getType() << std::endl;

	wrongCat->makeSound();
	meta->makeSound();

	delete meta;
	delete wrongCat;
}

int	main(void)
{
	testAnimal();
	testDogAndCat();
	subjectTest();
	wrongAnimalTest();
	return (0);
}
