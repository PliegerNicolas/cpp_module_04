/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nplieger <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/16 12:17:25 by nplieger          #+#    #+#             */
/*   Updated: 2023/06/16 12:54:38 by nplieger         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include "ICharacter.hpp"
# include "AMateria.hpp"
# include <iostream>
# include <string>

class	Character:	public ICharacter
{
	public:
		/* Attributes */

		/* Constructors & Destructors */

		Character(void);
		Character(const std::string &name);

		Character(const Character &other);
		Character	&operator=(const Character &other);

		virtual ~Character(void);

		/* Member functions */

		void	equip(AMateria *m);
		void	unequip(int idx);

		void	use(int idx, ICharacter &target);

		void	printInventory(void) const;

		// Getter functions

		const std::string	&getName(void) const;

		// Setter functions

		void				setName(const std::string &name);

		/* Overloaded operators */

	protected:
		/* Attributes */
		const std::string	_name;
		static const size_t	_inventory_slots = 4;
		AMateria			*_inventory[_inventory_slots];

		/* Constructors & Destructors */

		/* Member functions */

	private:
		/* Attributes */

		/* Constructors & Destructors */

		/* Member functions */
};

#endif
