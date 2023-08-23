/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nplieger <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/13 13:36:24 by nplieger          #+#    #+#             */
/*   Updated: 2023/06/13 14:02:04 by nplieger         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef CURE_HPP
# define CURE_HPP

# include "AMateria.hpp"

# include <iostream>
# include <string>

class	ICharacter;

class	Cure: public AMateria
{
	public:
		/* Attributes */

		/* Constructors & Destructors */

		Cure(void);
		Cure(const std::string &type);

		Cure(const Cure &other);
		Cure	&operator=(const Cure &other);

		virtual ~Cure(void);

		/* Member functions */

		Cure	*clone(void) const;
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
