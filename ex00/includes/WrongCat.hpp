/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nicolas <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/12 21:19:45 by nicolas           #+#    #+#             */
/*   Updated: 2023/06/12 21:23:17 by nicolas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

# include "WrongAnimal.hpp"

class	WrongCat: public WrongAnimal
{
	public:
		/* Attributes */

		/* Constructors & Destructors */

		WrongCat(void);
		WrongCat(const std::string type);

		WrongCat(const WrongCat &other);
		WrongCat	&operator=(const WrongCat &other);

		~WrongCat(void);

		/* Member functions */

		void	makeSound(void) const;

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
