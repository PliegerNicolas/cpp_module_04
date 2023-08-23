/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nicolas <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/12 20:03:39 by nicolas           #+#    #+#             */
/*   Updated: 2023/06/13 11:51:13 by nplieger         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "Cat.hpp"

/* Constructors & Destructors */

/* Public */

Cat::Cat(void): Animal("Cat"), _brain(new Brain())
{
	std::cout << "\033[37m" << "Cat : Default constructor called";
	std::cout << "\033[0m" << std::endl;
}

Cat::Cat(const std::string type): Animal(type), _brain(new Brain())
{
	std::cout << "\033[37m" << "Cat : ";
	std::cout << "Constructor with type parameter called";
	std::cout << "\033[0m" << std::endl;
}

Cat::~Cat(void)
{
	std::cout << "\033[37m" << "Cat : Destructor called";
	std::cout << "\033[0m" << std::endl;

	delete _brain;
}

Cat::Cat(const Cat &other): Animal(other), _brain(new Brain(*other._brain))
{
	std::cout << "\033[37m" << "Cat : Copy constructor called";
	std::cout << "\033[0m" << std::endl;
}

Cat	&Cat::operator=(const Cat &other)
{
	std::cout << "\033[37m" << "Cat : Assignment operator called";
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

void	Cat::makeSound(void) const
{
	std::cout << "Meow." << std::endl;
}

// Getter functions

Brain	Cat::getBrain(void) const
{
	return (*_brain);
}

// Setter functions

/* Private */
