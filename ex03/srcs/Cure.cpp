/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nplieger <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/13 13:34:35 by nplieger          #+#    #+#             */
/*   Updated: 2023/06/16 17:30:38 by nplieger         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "Cure.hpp"

/* Constructors & Destructors */

/* Public */

Cure::Cure(void): AMateria("cure")
{
	std::cout << "\033[37m" << "Cure : Default constructor called";
	std::cout << "\033[0m" << std::endl;
}

Cure::Cure(const std::string &type): AMateria(type)
{
	std::cout << "\033[37m" << "Cure : ";
	std::cout << "Constructor with type parameter called";
	std::cout << "\033[0m" << std::endl;
}

Cure::~Cure(void)
{
	std::cout << "\033[37m" << "Cure : Destructor called";
	std::cout << "\033[0m" << std::endl;
}

Cure::Cure(const Cure &other): AMateria(other)
{
	std::cout << "\033[37m" << "Cure : Copy constructor called";
	std::cout << "\033[0m" << std::endl;
}

Cure &Cure::operator=(const Cure &other)
{
	std::cout << "\033[37m" << "Cure : Assignment operator called";
	std::cout << "\033[0m" << std::endl;

	if (this != &other)
	{
		AMateria::operator=(other);
	}
	return (*this);
}

/* Member Functions */

/* Public */

Cure	*Cure::clone(void) const
{
	return (new Cure(*this));
}

void	Cure::use(ICharacter &target)
{
	std::cout << "* heals " << target.getName() << "\'s wounds *" << std::endl;
}


// Getter functions

// Setter functions

/* Private */
