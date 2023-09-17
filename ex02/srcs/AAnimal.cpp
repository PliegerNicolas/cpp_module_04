/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nicolas <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/12 20:03:26 by nicolas           #+#    #+#             */
/*   Updated: 2023/09/17 21:53:10 by nicolas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "AAnimal.hpp"

/* Constructors & Destructors */

/* Public */

AAnimal::AAnimal(void): _type("Default")
{
	std::cout << "\033[37m" << "AAnimal : Default constructor called";
	std::cout << "\033[0m" << std::endl;
}

AAnimal::AAnimal(const std::string type): _type(type)
{
	std::cout << "\033[37m" << "AAnimal : ";
	std::cout << "Constructor with type parameter called";
	std::cout << "\033[0m" << std::endl;
}

AAnimal::~AAnimal(void)
{
	std::cout << "\033[37m" << "AAnimal : Destructor called";
	std::cout << "\033[0m" << std::endl;
}

AAnimal::AAnimal(const AAnimal &other): _type(other.getType())
{
	std::cout << "\033[37m" << "AAnimal : Copy constructor called";
	std::cout << "\033[0m" << std::endl;
}

AAnimal	&AAnimal::operator=(const AAnimal &other)
{
	std::cout << "\033[37m" << "AAnimal : Assignment operator called";
	std::cout << "\033[0m" << std::endl;

	if (this != &other)
	{
		_type = other.getType();
	}
	return (*this);
}

/* Member Functions */

/* Public */

// Getter functions

const std::string	AAnimal::getType(void) const
{
	return (_type);
}

// Setter functions

void	AAnimal::setType(const std::string type)
{
	_type = type;
}

/* Private */
