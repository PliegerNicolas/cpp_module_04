/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nplieger <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/13 13:29:39 by nplieger          #+#    #+#             */
/*   Updated: 2023/06/16 17:31:16 by nplieger         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "Ice.hpp"

/* Constructors & Destructors */

/* Public */

Ice::Ice(void): AMateria("ice")
{
	std::cout << "\033[37m" << "Ice : Default constructor called";
	std::cout << "\033[0m" << std::endl;
}

Ice::Ice(const std::string &type): AMateria(type)
{
	std::cout << "\033[37m" << "Ice : ";
	std::cout << "Constructor with type parameter called";
	std::cout << "\033[0m" << std::endl;
}

Ice::~Ice(void)
{
	std::cout << "\033[37m" << "Ice : Destructor called";
	std::cout << "\033[0m" << std::endl;
}

Ice::Ice(const Ice &other): AMateria(other.getType())
{
	std::cout << "\033[37m" << "Ice : Copy constructor called";
	std::cout << "\033[0m" << std::endl;
}

Ice &Ice::operator=(const Ice &other)
{
	std::cout << "\033[37m" << "Ice : Assignment operator called";
	std::cout << "\033[0m" << std::endl;

	if (this != &other)
	{
		AMateria::operator=(other);
	}
	return (*this);
}

/* Member Functions */

/* Public */

Ice		*Ice::clone(void) const
{
	return (new Ice(*this));
}

void	Ice::use(ICharacter &target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}

// Getter functions

// Setter functions

/* Private */
