/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nicolas <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/12 20:03:39 by nicolas           #+#    #+#             */
/*   Updated: 2023/06/12 21:01:27 by nicolas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "Cat.hpp"

/* Constructors & Destructors */

/* Public */

Cat::Cat(void): Animal("Cat")
{
	std::cout << "\033[37m" << "Cat : Default constructor called";
	std::cout << "\033[0m" << std::endl;
}

Cat::Cat(const std::string type): Animal(type)
{
	std::cout << "\033[37m" << "Cat : ";
	std::cout << "Constructor with type parameter called";
	std::cout << "\033[0m" << std::endl;
}

Cat::~Cat(void)
{
	std::cout << "\033[37m" << "Cat : Destructor called";
	std::cout << "\033[0m" << std::endl;
}

Cat::Cat(const Cat &other): Animal(other)
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

// Setter functions

/* Private */

