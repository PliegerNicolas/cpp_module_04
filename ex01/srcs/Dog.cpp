/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nicolas <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/12 20:03:44 by nicolas           #+#    #+#             */
/*   Updated: 2023/06/13 11:51:36 by nplieger         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "Dog.hpp"

/* Constructors & Destructors */

/* Public */

Dog::Dog(void): Animal("Dog"), _brain(new Brain())
{
	std::cout << "\033[37m" << "Dog : Default constructor called";
	std::cout << "\033[0m" << std::endl;
}

Dog::Dog(const std::string type): Animal(type), _brain(new Brain())
{
	std::cout << "\033[37m" << "Dog : ";
	std::cout << "Constructor with type parameter called";
	std::cout << "\033[0m" << std::endl;
}

Dog::~Dog(void)
{
	std::cout << "\033[37m" << "Dog : Destructor called";
	std::cout << "\033[0m" << std::endl;

	delete _brain;
}

Dog::Dog(const Dog &other): Animal(other), _brain(new Brain(*other._brain))
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
		*_brain = *other._brain;
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

Brain	*Dog::getBrain(void) const
{
	return (_brain);
}

// Setter functions

/* Private */
