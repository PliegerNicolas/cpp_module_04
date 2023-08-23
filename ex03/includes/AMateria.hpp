/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nplieger <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/13 13:13:58 by nplieger          #+#    #+#             */
/*   Updated: 2023/06/15 23:20:22 by nicolas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef AMATERIA_HPP
# define AMATERIA_HPP

# include <iostream>
# include <string>

# include "ICharacter.hpp"

class	ICharacter;

class	AMateria
{
	public:
		/* Attributes */

		/* Constructors & Destructors */

		AMateria(void);
		AMateria(const std::string &type);

		AMateria(const AMateria &other);
		AMateria	&operator=(const AMateria &other);

		virtual ~AMateria(void);

		/* Member functions */

		virtual	AMateria	*clone(void) const = 0;
		virtual void		use(ICharacter &target);

		// Getter functions

		const std::string	&getType(void) const;

		// Setter functions

		void				setType(const std::string &type);

		/* Overloaded operators */

	protected:
		/* Attributes */
		std::string	_type;

		/* Constructors & Destructors */

		/* Member functions */

	private:
		/* Attributes */

		/* Constructors & Destructors */

		/* Member functions */
};

#endif
