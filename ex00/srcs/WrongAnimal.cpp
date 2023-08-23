/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nicolas <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/12 21:15:59 by nicolas           #+#    #+#             */
/*   Updated: 2023/06/12 21:27:21 by nicolas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "WrongAnimal.hpp"

/* Constructors & Destructors */

/* Public */

WrongAnimal::WrongAnimal(void): _type("Default")
{
	std::cout << "\033[37m" << "WrongAnimal : Default constructor called";
	std::cout << "\033[0m" << std::endl;
}

WrongAnimal::WrongAnimal(const std::string type): _type(type)
{
	std::cout << "\033[37m" << "WrongAnimal : ";
	std::cout << "Constructor with type parameter called";
	std::cout << "\033[0m" << std::endl;
}

WrongAnimal::~WrongAnimal(void)
{
	std::cout << "\033[37m" << "WrongAnimal : Destructor called";
	std::cout << "\033[0m" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &other): _type(other.getType())
{
	std::cout << "\033[37m" << "WrongAnimal : Copy constructor called";
	std::cout << "\033[0m" << std::endl;
}

WrongAnimal	&WrongAnimal::operator=(const WrongAnimal &other)
{
	std::cout << "\033[37m" << "WrongAnimal : Assignment operator called";
	std::cout << "\033[0m" << std::endl;

	if (this != &other)
	{
		_type = other.getType();
	}
	return (*this);
}

/* Member Functions */

/* Public */

void	WrongAnimal::makeSound(void) const
{
	std::cout << "Wrong sound not parametred." << std::endl;
}

// Getter functions

const std::string	WrongAnimal::getType(void) const
{
	return (_type);
}

// Setter functions

void	WrongAnimal::setType(const std::string type)
{
	_type = type;
}

/* Private */
