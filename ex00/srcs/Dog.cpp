/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nicolas <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/12 20:03:44 by nicolas           #+#    #+#             */
/*   Updated: 2023/06/12 21:01:19 by nicolas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "Dog.hpp"

/* Constructors & Destructors */

/* Public */

Dog::Dog(void): Animal("Dog")
{
	std::cout << "\033[37m" << "Dog : Default constructor called";
	std::cout << "\033[0m" << std::endl;
}

Dog::Dog(const std::string type): Animal(type)
{
	std::cout << "\033[37m" << "Dog : ";
	std::cout << "Constructor with type parameter called";
	std::cout << "\033[0m" << std::endl;
}

Dog::~Dog(void)
{
	std::cout << "\033[37m" << "Dog : Destructor called";
	std::cout << "\033[0m" << std::endl;
}

Dog::Dog(const Dog &other): Animal(other)
{
	std::cout << "\033[37m" << "Dog : Copy constructor called";
	std::cout << "\033[0m" << std::endl;
}

Dog	&Dog::operator=(const Dog &other)
{
	std::cout << "\033[37m" << "Dog : Assignment operator called";
	std::cout << "\033[0m" << std::endl;

	if (this != &other)
	{
		Animal::operator=(other);
	}
	return (*this);
}

/* Member Functions */

/* Public */

void	Dog::makeSound(void) const
{
	std::cout << "Bark." << std::endl;
}

// Getter functions

// Setter functions

/* Private */


