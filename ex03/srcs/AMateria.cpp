/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nplieger <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/13 13:22:06 by nplieger          #+#    #+#             */
/*   Updated: 2023/06/16 12:31:58 by nplieger         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "AMateria.hpp"

/* Constructors & Destructors */

/* Public */

AMateria::AMateria(void): _type("Default")
{
	std::cout << "\033[37m" << "AMateria : Default constructor called";
	std::cout << "\033[0m" << std::endl;
}

AMateria::AMateria(const std::string &type): _type(type)
{
	std::cout << "\033[37m" << "AMateria : ";
	std::cout << "Constructor with type parameter called";
	std::cout << "\033[0m" << std::endl;
}

AMateria::~AMateria(void)
{
	std::cout << "\033[37m" << "AMateria : Destructor called";
	std::cout << "\033[0m" << std::endl;
}

AMateria::AMateria(const AMateria &other)
{
	std::cout << "\033[37m" << "AMateria : Copy constructor called";
	std::cout << "\033[0m" << std::endl;

	*this = other;
}

AMateria &AMateria::operator=(const AMateria &other)
{
	std::cout << "\033[37m" << "AMateria : Assignment operator called";
	std::cout << "\033[0m" << std::endl;

	if (this != &other)
	{
		_type = other.getType();
	}
	return (*this);
}

/* Member Functions */

/* Public */

void		AMateria::use(ICharacter &target)
{
	std::cout << "AMateria abstractly used on " << target.getName() << std::endl;
}

// Getter functions

const std::string	&AMateria::getType(void) const
{
	return (_type);
}

// Setter functions

void	AMateria::setType(const std::string &type)
{
	_type = type;
}

/* Private */
