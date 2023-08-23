/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nicolas <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/12 20:59:17 by nicolas           #+#    #+#             */
/*   Updated: 2023/06/12 20:59:43 by nicolas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef DOG_HPP
# define DOG_HPP

# include "Animal.hpp"

class	Dog: public Animal
{
	public:
		/* Attributes */

		/* Constructors & Destructors */

		Dog(void);
		Dog(const std::string type);

		Dog(const Dog &other);
		Dog	&operator=(const Dog &other);

		~Dog(void);

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
