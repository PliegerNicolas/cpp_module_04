/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nplieger <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/16 15:29:22 by nplieger          #+#    #+#             */
/*   Updated: 2023/06/16 17:18:20 by nplieger         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "MateriaSource.hpp"

/* Constructors & Destructors */

/* Public */

MateriaSource::MateriaSource(void)
{
	std::cout << "\033[37m" << "MateriaSource : Default constructor called";
	std::cout << "\033[0m" << std::endl;
}

MateriaSource::~MateriaSource(void)
{
	std::cout << "\033[37m" << "MateriaSource : Destructor called";
	std::cout << "\033[0m" << std::endl;

	for(size_t i = 0; i < _inventory_slots; i++)
	{
		if (_inventory[i])
			delete _inventory[i];
	}
}

MateriaSource::MateriaSource(const MateriaSource &other)
{
	std::cout << "\033[37m" << "MateriaSource : Copy constructor called";
	std::cout << "\033[0m" << std::endl;

	for(size_t i = 0; i < _inventory_slots; i++)
	{
		if (other._inventory[i])
			_inventory[i] = other._inventory[i]->clone();
		else
			_inventory[i] = NULL;
	}
}

MateriaSource	&MateriaSource::operator=(const MateriaSource &other)
{
	std::cout << "\033[37m" << "MateriaSource : Assignment operator called";
	std::cout << "\033[0m" << std::endl;

	if (this != &other)
	{
		for(size_t i = 0; i < _inventory_slots; i++)
		{
			if (_inventory[i])
				delete _inventory[i];
			if(other._inventory[i])
			{
				_inventory[i] = other._inventory[i]->clone();
			}
			else
			{
				_inventory[i] = NULL;
			}
		}
	}
	return (*this);
}

/* Member Functions */

/* Public */

void	MateriaSource::learnMateria(AMateria *m)
{
	for(size_t i = 0; i < _inventory_slots; i++)
	{
		if (_inventory[i] == NULL)
		{
			std::cout << " learning a new spell " << m->getType() << std::endl;
			_inventory[i] = m;
			return ;
		}
	}
	std::cout << "Inventory is full. Can't learn new spell." << std::endl;
	delete m;
}

AMateria*	MateriaSource::createMateria(std::string const &type)
{
	for(size_t i = 0; i < _inventory_slots; i++)
	{
		if (_inventory[i] && _inventory[i]->getType() == type)
		{
			return (_inventory[i]->clone());
		}
	}
	std::cout << "Can't create" << type << " materia" << std::endl;
	return (NULL);
}

// Getter functions

// Setter functions

/* Private */
