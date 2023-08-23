/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nplieger <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/13 13:26:24 by nplieger          #+#    #+#             */
/*   Updated: 2023/06/13 14:01:38 by nplieger         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef ICE_HPP
# define ICE_HPP

# include "AMateria.hpp"

# include <iostream>
# include <string>

class	ICharacter;

class	Ice: public AMateria
{
	public:
		/* Attributes */

		/* Constructors & Destructors */

		Ice(void);
		Ice(const std::string &type);

		Ice(const Ice &other);
		Ice	&operator=(const Ice &other);

		virtual ~Ice(void);

		/* Member functions */

		Ice		*clone(void) const;
		void	use(ICharacter &target);

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
