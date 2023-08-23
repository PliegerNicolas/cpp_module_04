/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nicolas <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/12 20:03:26 by nicolas           #+#    #+#             */
/*   Updated: 2023/06/12 20:53:04 by nicolas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "Animal.hpp"

/* Constructors & Destructors */

/* Public */

Animal::Animal(void): _type("Default")
{
	std::cout << "\033[37m" << "Animal : Default constructor called";
	std::cout << "\033[0m" << std::endl;
}

Animal::Animal(const std::string type): _type(type)
{
	std::cout << "\033[37m" << "Animal : ";
	std::cout << "Constructor with type parameter called";
	std::cout << "\033[0m" << std::endl;
}

Animal::~Animal(void)
{
	std::cout << "\033[37m" << "Animal : Destructor called";
	std::cout << "\033[0m" << std::endl;
}

Animal::Animal(const Animal &other): _type(other.getType())
{
	std::cout << "\033[37m" << "Animal : Copy constructor called";
	std::cout << "\033[0m" << std::endl;
}

Animal	&Animal::operator=(const Animal &other)
{
	std::cout << "\033[37m" << "Animal : Assignment operator called";
	std::cout << "\033[0m" << std::endl;

	if (this != &other)
	{
		_type = other.getType();
	}
	return (*this);
}

/* Member Functions */

/* Public */

void	Animal::makeSound(void) const
{
	std::cout << "Sound not parametred." << std::endl;
}

// Getter functions

const std::string	Animal::getType(void) const
{
	return (_type);
}

// Setter functions

void	Animal::setType(const std::string type)
{
	_type = type;
}

/* Private */
