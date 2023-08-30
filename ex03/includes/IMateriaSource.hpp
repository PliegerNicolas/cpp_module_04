/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IMateriaSource.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nplieger <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/16 13:01:27 by nplieger          #+#    #+#             */
/*   Updated: 2023/08/30 22:51:27 by nicolas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef IMATERIASOURCE_HPP
# define IMATERIASOURCE_HPP

# include "debug.hpp"

# include "AMateria.hpp"

class	IMateriaSource
{
	public:
		/* Attributes */

		/* Constructors & Destructors */

		virtual ~IMateriaSource(void);

		/* Member functions */

		virtual void		learnMateria(AMateria*) = 0;
		virtual AMateria*	createMateria(std::string const &type) = 0;

		// Getter functions

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
