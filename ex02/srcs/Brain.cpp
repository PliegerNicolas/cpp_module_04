/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nplieger <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/13 09:20:04 by nplieger          #+#    #+#             */
/*   Updated: 2023/08/30 22:39:25 by nicolas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "Brain.hpp"

/* Constructors & Destructors */

/* Public */

Brain::Brain(void)
{
	std::cout << "\033[37m" << "Brain : Default constructor called";
	std::cout << "\033[0m" << std::endl;
}

Brain::~Brain(void)
{
	std::cout << "\033[37m" << "Brain : Destructor called";
	std::cout << "\033[0m" << std::endl;
}

Brain::Brain(const Brain &other)
{
	std::cout << "\033[37m" << "Brain : Copy constructor called";
	std::cout << "\033[0m" << std::endl;

	for (size_t i = 0; i < 100; i++)
		_ideas[i] = other._ideas[i];
}

Brain	&Brain::operator=(const Brain &other)
{
	std::cout << "\033[37m" << "Brain : Assignment operator called";
	std::cout << "\033[0m" << std::endl;

	if (this != &other)
	{
		for (size_t i = 0; i < 100; i++)
			_ideas[i] = other._ideas[i];
	}
	return (*this);
}

/* Member Functions */

/* Public */

void	Brain::printIdeas(size_t start, size_t end) const
{
	std::cout << "\033[36m";
	while (start <= end)
		std::cout << _ideas[start++] << std::endl;
	std::cout << "\033[0m";
}

// Getter functions

const std::string	Brain::getIdea(size_t i) const
{
	return (_ideas[i]);
}

// Setter functions

void	Brain::setIdea(size_t i, std::string str)
{
	_ideas[i] = str;
}

/* Private */
