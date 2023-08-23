/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nicolas <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/12 20:59:17 by nicolas           #+#    #+#             */
/*   Updated: 2023/06/13 11:51:43 by nplieger         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef DOG_HPP
# define DOG_HPP

# include "Animal.hpp"
# include "Brain.hpp"

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

		Brain	*getBrain(void) const;

		// Setter functions

		/* Overloaded operators */

	protected:
		/* Attributes */

		/* Constructors & Destructors */

		/* Member functions */

	private:
		/* Attributes */
		Brain	*_brain;

		/* Constructors & Destructors */

		/* Member functions */
};

#endif
