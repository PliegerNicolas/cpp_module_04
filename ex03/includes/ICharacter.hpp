/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ICharacter.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nicolas <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/15 23:13:33 by nicolas           #+#    #+#             */
/*   Updated: 2023/06/16 12:16:48 by nplieger         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef ICHARACTER_HPP
# define ICHARACTER_HPP

# include "AMateria.hpp"

class	AMateria;

class	ICharacter
{
	public:
		/* Attributes */

		/* Constructors & Destructors */

		virtual	~ICharacter(void) {};

		/* Member functions */

		virtual void	equip(AMateria *m) = 0;
		virtual void	unequip(int idx) = 0;

		virtual void	use(int idx, ICharacter &target) = 0;

		virtual void	printInventory(void) const = 0;

		// Getter functions

		virtual const std::string	&getName(void) const = 0;

		// Setter functions

		/* Overloaded operators */

	protected:
		/* Attributes */

		/* Constructors & Destructors */

		/* Member functions */

	private:
		/* Attributes */

		/* Constructors & Destructors */

		/* Member functions */
};

#endif
