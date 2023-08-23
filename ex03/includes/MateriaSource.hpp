/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nplieger <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/16 13:05:42 by nplieger          #+#    #+#             */
/*   Updated: 2023/06/16 17:19:09 by nplieger         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

# include "IMateriaSource.hpp"

class	MateriaSource: public IMateriaSource
{
	public:
		/* Attributes */

		/* Constructors & Destructors */

		MateriaSource(void);

		MateriaSource(const MateriaSource &other);
		MateriaSource	&operator=(const MateriaSource &other);

		virtual ~MateriaSource(void);

		/* Member functions */

		virtual void		learnMateria(AMateria*);
		virtual AMateria*	createMateria(std::string const &type);

		// Getter functions

		// Setter functions

		/* Overloaded operators */

	protected:
		/* Attributes */
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
