/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nicolas <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/12 20:03:04 by nicolas           #+#    #+#             */
/*   Updated: 2023/08/30 22:40:23 by nicolas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "AAnimal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

# define SIZE 20
# define RED "\033[31m"
# define GREEN "\033[32m"
# define GRAY "\033[37m"
# define CLEAR "\033[0m"

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

	{
		for (size_t i = 0; i < SIZE; i++)
			delete zoo[i];
	}

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

	{
		Dog	dog1;
		Dog	dog2;

		std::cout << GREEN << "Set three first ideas of 'dog1'" << CLEAR << std::endl;
		dog1.getBrain()->setIdea(0, "Idee 0");
		dog1.getBrain()->setIdea(1, "Idee 1");
		dog1.getBrain()->setIdea(2, "Idee 2");

		std::cout << GREEN << "Print 'dog1's ideas" << CLEAR << std::endl;
		dog1.getBrain()->printIdeas(0, 2);
		std::cout << GREEN << "Print 'dog2's ideas" << CLEAR << std::endl;
		dog2.getBrain()->printIdeas(0, 2);

		dog2 = dog1;

		std::cout << GREEN << "Print 'dog1's ideas" << CLEAR << std::endl;
		dog1.getBrain()->printIdeas(0, 2);
		std::cout << GREEN << "Print 'dog2's ideas" << CLEAR << std::endl;
		dog2.getBrain()->printIdeas(0, 2);

		std::cout << GRAY << "Set 'dog1's first idea to 'banana'" << CLEAR << std::endl;
		dog1.getBrain()->setIdea(1, "banana");

		Dog	dog3(dog1);

		std::cout << GREEN << "Print 'dog1's ideas" << CLEAR << std::endl;
		dog1.getBrain()->printIdeas(0, 2);
		std::cout << GREEN << "Print 'dog2's ideas" << CLEAR << std::endl;
		dog2.getBrain()->printIdeas(0, 2);
		std::cout << GREEN << "Print 'dog3's ideas" << CLEAR << std::endl;
		dog3.getBrain()->printIdeas(0, 2);

	}

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
