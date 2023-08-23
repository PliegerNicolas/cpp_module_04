/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nplieger <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/16 12:22:44 by nplieger          #+#    #+#             */
/*   Updated: 2023/06/16 17:07:03 by nplieger         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "Character.hpp"

/* Constructors & Destructors */

/* Public */

Character::Character(void): _name("Default")
{
	std::cout << "\033[37m" << "Character : Default constructor called";
	std::cout << "\033[0m" << std::endl;

	for (size_t i = 0; i < _inventory_slots; i++)
		_inventory[i] = NULL;
}

Character::Character(const std::string &name): _name(name)
{
	std::cout << "\033[37m" << "Character : ";
	std::cout << "Constructor with type parameter called";
	std::cout << "\033[0m" << std::endl;

	for (size_t i = 0; i < _inventory_slots; i++)
		_inventory[i] = NULL;
}

Character::~Character(void)
{
	std::cout << "\033[37m" << "Character : Destructor called";
	std::cout << "\033[0m" << std::endl;

	for (size_t i = 0; i < _inventory_slots; i++)
		if (_inventory[i])
			delete _inventory[i];
}

Character::Character(const Character &other): ICharacter(other)
{
	std::cout << "\033[37m" << "Character : Copy constructor called";
	std::cout << "\033[0m" << std::endl;
}

Character &Character::operator=(const Character &other)
{
	std::cout << "\033[37m" << "Character : Assignment operator called";
	std::cout << "\033[0m" << std::endl;

	if (this != &other)
	{
		for (size_t i = 0; i < _inventory_slots; i++); // ???
	}
	return (*this);
}

/* Member Functions */

/* Public */

void	Character::equip(AMateria *m)
{
	for (size_t i = 0; i < _inventory_slots; i++)
	{
		if (_inventory[i])
			continue ;
		else
		{
			_inventory[i] = m;
			std::cout << getName() << " equips " << m->getType();
			std::cout << " in slot nbr " << i << std::endl;
			return ;
		}
	}
	std::cout << _name << "\'s inventory is full. Can't equip" << std::endl;
	delete m;
}

void	Character::unequip(int idx)
{
	if (_inventory[idx])
	{
		std::cout << getName() << " unequips " << _inventory[idx]->getType();
		std::cout << " from slot " << idx << std::endl;
		_inventory[idx] = NULL;
	}
	else
	{
		std::cout << "Invalid inventory slot for " << _name << std::endl;
	}
}

void	Character::use(int idx, ICharacter &target)
{
	if (_inventory[idx])
	{
		_inventory[idx]->use(target);
		return ;
	}
	else
	{
		std::cout << getName() << " does nothing" << std::endl;
	}
}

void	Character::printInventory(void) const
{
	std::cout << getName() << "\'s inventory :" << std::endl;
	for (size_t i = 0; i < _inventory_slots; i++)
	{
		std::cout << "	" << i << " ॰ ";
		if (_inventory[i])
			std::cout << _inventory[i]->getType();
		std::cout << std::endl;
	}
}

// Getter functions

const std::string	&Character::getName(void) const
{
	return (_name);
}

// Setter functions

/* Private */
