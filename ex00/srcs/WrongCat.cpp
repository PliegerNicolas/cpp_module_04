/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nicolas <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/12 21:16:07 by nicolas           #+#    #+#             */
/*   Updated: 2023/06/12 21:22:30 by nicolas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "WrongCat.hpp"

/* Constructors & Destructors */

/* Public */

WrongCat::WrongCat(void): WrongAnimal("WrongCat")
{
	std::cout << "\033[37m" << "WrongCat : Default constructor called";
	std::cout << "\033[0m" << std::endl;
}

WrongCat::WrongCat(const std::string type): WrongAnimal(type)
{
	std::cout << "\033[37m" << "WrongCat : ";
	std::cout << "Constructor with type parameter called";
	std::cout << "\033[0m" << std::endl;
}

WrongCat::~WrongCat(void)
{
	std::cout << "\033[37m" << "WrongCat : Destructor called";
	std::cout << "\033[0m" << std::endl;
}

WrongCat::WrongCat(const WrongCat &other): WrongAnimal(other)
{
	std::cout << "\033[37m" << "WrongCat : Copy constructor called";
	std::cout << "\033[0m" << std::endl;
}

WrongCat	&WrongCat::operator=(const WrongCat &other)
{
	std::cout << "\033[37m" << "WrongCat : Assignment operator called";
	std::cout << "\033[0m" << std::endl;

	if (this != &other)
	{
		WrongAnimal::operator=(other);
	}
	return (*this);
}

/* Member Functions */

/* Public */

void	WrongCat::makeSound(void) const
{
	std::cout << "Wrong Meow." << std::endl;
}

// Getter functions

// Setter functions

/* Private */
