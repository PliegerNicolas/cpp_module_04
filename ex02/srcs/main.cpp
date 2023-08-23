/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nicolas <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/12 20:03:04 by nicolas           #+#    #+#             */
/*   Updated: 2023/06/13 13:09:11 by nplieger         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "AAnimal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

#define SIZE 20

static void	populateZoo(AAnimal *zoo[])
{
	std::cout << std::endl << "\033[36m";
	std::cout << "===== ===== ===== ===== =====" << std::endl;
	std::cout << "Populating zoo..." << std::endl;
	std::cout << "===== ===== ===== ===== =====" << std::endl;
	std::cout << "\033[0m" << std::endl;

	for (size_t i = 0; i < SIZE; i++)
	{
		zoo[i++] = new Dog();
		zoo[i] = new Cat();
	}

	std::cout << std::endl << "\033[36m";
	std::cout << "===== ===== ===== ===== =====" << std::endl;
	std::cout << "Finished populating zoo." << std::endl;
	std::cout << "===== ===== ===== ===== =====" << std::endl;
	std::cout << "\033[0m";
}

static void	exterminate(AAnimal *zoo[])
{
	std::cout << std::endl << "\033[36m";
	std::cout << "===== ===== ===== ===== =====" << std::endl;
	std::cout << "Exterminating zoo population..." << std::endl;
	std::cout << "===== ===== ===== ===== =====" << std::endl;
	std::cout << "\033[0m" << std::endl;

	for (size_t i = 0; i < SIZE; i++)
		delete zoo[i];

	std::cout << std::endl << "\033[36m";
	std::cout << "===== ===== ===== ===== =====" << std::endl;
	std::cout << "Finished exterminating zoo population." << std::endl;
	std::cout << "===== ===== ===== ===== =====" << std::endl;
	std::cout << "\033[0m";
}

static void	testDeepCopy(void)
{
	std::cout << std::endl << "\033[36m";
	std::cout << "===== ===== ===== ===== =====" << std::endl;
	std::cout << "Testing deep copy..." << std::endl;
	std::cout << "===== ===== ===== ===== =====" << std::endl;
	std::cout << "\033[0m" << std::endl;

	Dog	dog1;

	dog1.getBrain()->setIdea(0, "Idee 0");
	dog1.getBrain()->setIdea(1, "Idee 1");
	dog1.getBrain()->setIdea(2, "Idee 2");
	dog1.getBrain()->printIdeas(0, 2);
	std::cout << dog1.getType() << std::endl;
	dog1.setType("Labrador");
	std::cout << dog1.getType() << std::endl;
	Dog	dog2(dog1);
	std::cout << dog2.getType() << std::endl;
	dog2.getBrain()->printIdeas(0, 2);

	std::cout << std::endl << "\033[36m";
	std::cout << "===== ===== ===== ===== =====" << std::endl;
	std::cout << "Finished testing deep copy..." << std::endl;
	std::cout << "===== ===== ===== ===== =====" << std::endl;
	std::cout << "\033[0m";
}

int	main(void)
{
	AAnimal	*zoo[100];
	//AAnimal	dog("Dog"); // This shouldn't compile

	populateZoo(zoo);
	exterminate(zoo);

	testDeepCopy();

	return (0);
}
